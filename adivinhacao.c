#include <stdio.h>
int main (){
    printf("**************************\n");
    printf("* Jogo de Adivinhacao    *\n");
    printf("**************************\n\n");
    int numerosecreto;
    numerosecreto =  42;
    int chute;
    int acertou = chute == numerosecreto;

    printf("Qual o numero secreto?");
    scanf("%d", &chute);

    if(acertou){
        printf("Parabéns, você acertou!!");
    }
    else{
        int maior = chute > numerosecreto;
        if(maior){
            printf("%d é maior que o numero secreto\n" , chute);
        } else {
            printf("%d é menor que o numero secreto" , chute);
        }
    }
        
}