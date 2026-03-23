#include <stdio.h>
#include <stdlib.h>  

#define LIN 10
#define COL 15

void preencher(int matriz [LIN][COL]){
    for(int i = 0;  i < LIN;i++){
        for (int j = 0; j < COL; j++){
            matriz[i][j] = rand () % 10 + 1;
        }
    }
}

void procurar(int matriz [LIN][COL], int valor, int aux[LIN][COL]){
    for (int i = 0; i < LIN; i++  ){
        for (int j = 0; j < COL; j++){
            if(matriz[i][j] == valor){
                aux[i][j] = 1;
            }
        }
    }
}

void exibir (int aux[LIN][COL]){
    int cont = 0;
    
    for(int i = 0; i < LIN ; i++ ){
        for(int j = 0; j < COL ; j++){
            if(aux [i][j] == 1){
                printf("Encontrado na posicao: (%d, %d)\n", i, j);
                cont++;
            }
        }
    }
}