#include<stdio.h>

main(){

    int vetor[5],maior,menor,pMaior,pMenor;

    for(int i = 0;i < 5;i++){

        printf("\n Digite os numeros");
        scanf("%d",&vetor[i]);
    }
    maior = vetor[0];
    menor = vetor[0];

    if(int i = 0;i < 5;i++){
        if(vetor[i]> maior){
            maior = vetor[i];
            pMaior = i;
        }
        if(vetor[i < menor]){
            menor = vetor[i];
            pMenor = i;
        }
    }
    printf("\nMaior: %d esta na posicao %d. \nMenor: %d esta na posicao %d",maior,pMaior,menor,pMenor);
}