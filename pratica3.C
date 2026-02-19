#include <stdio.h>

 int main() { 

    float precoReal, precoDesc, valorDesc, precoFinal;
    
    printf("Informe o valor real");
    scanf("%f,&precoReal");
    printf("Informe o percentual de descoto: ");
    scanf("%f, &precoDesc");

    valorDesc = precoReal * precoDesc/100 ;
    precoFinal = precoReal - valorDesc;
    
    printf("Preco real do produto: %.2f \n" , precoReal);
    printf("Quanto voce pagara pelo produto: %.2f \n", precoFinal);
    printf("Qual voce esta economiando: %.2f \n",valorDesc);
    
    return 0; 

}