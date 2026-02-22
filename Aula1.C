#include <stdio.h>

int main() {
    int idade;
    float altura;
    char genero;

    printf("Ola mundo!\n");

                    
    printf("Qual a sua idade? ");
    scanf("%d", &idade); 

                                
    printf("Qual a sua altura? ");
    scanf("%f", &altura);

                                            
    printf("Qual o seu genero (M/F)? ");
    scanf(" %c", &genero);

                                                        
    printf("\n--- Dados Cadastrados ---\n");
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Genero: %c\n", genero);

    return 0;
    }