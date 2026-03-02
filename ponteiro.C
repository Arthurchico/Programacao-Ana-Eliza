#include <stdio.h>

int main ()     {
    int num;
    int* ptrNum;
    ptrNum = &num;
    printf("O endereco da variavel num eh %p \n" ,ptrNum);
    printf("O endereco do ponteiro ptrNum eh: %p \n" ,&ptrNum);     
    return 0;
}