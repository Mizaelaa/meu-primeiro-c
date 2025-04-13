#include <stdio.h>
int main (){
    printf("**************************\n");
    printf("* Jogo de Adivinhacao    *\n");
    printf("**************************\n\n");
    int numerosecreto;
    numerosecreto =  42;
    int chute;

    printf("Qual o numero secreto?");
    scanf("%d", &chute);
    printf("Voce chutou o numero %d" , chute);
}