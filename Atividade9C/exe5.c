#include <stdio.h>

main(){
    int vetor [10];
    int pares =0;

    printf("\ndigite 10 valores:\n");

    for (int i = 0; i < 10; i++) {
        scanf("\n%d", &vetor[i]);
        if (vetor [i] %2 ==0 ){
            pares++;
        }else{
            printf("\n Numero inserido imapar: %d",vetor[i]);
        }
    }
    printf("o vetor contem %d valores pares.\n", pares);
}