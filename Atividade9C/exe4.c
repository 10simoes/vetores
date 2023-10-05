#include<stdio.h>

main(){
    int vetor[8];
    int x,y;
    int soma = 0;

    
    
    
    printf("\nDigite 8 valores do vetor: ");
    for(int i = 0;i < 8;i++){
    scanf("%d",&vetor[i]);

    }

do{
    printf("\nDigite duas posicao (de 0 a 7): ");
    scanf("\n%d %d",&x, &y);
    if(x >= 0 &&  x < 8 && y >= 0 && y < 8){

        for(int i = 0;i < 8;i++ ){
            if(i == x || i == y){
                soma += vetor[i];
            }
        }
     }else{
        printf("\nInvalido. Digite novamente");
        
     }
}while(x <= 0 && x > 8 && y <= 0 && y > 8);

printf("\n Soma: %d",soma);
    

    
}
    

