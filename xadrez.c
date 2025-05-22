#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
 // Número de casas a se mover para cada peça
    int movTorre = 5;
    int movBispo = 5;
    int movRainha = 8;

    int i;

    //  Movimento da Torre (usando for) 
    printf("Movimento da Torre:\n");
    for (i = 1; i <= movTorre; i++) {
        printf("Direita\n");
    }

    //  Movimento do Bispo (usando while)
    printf("\nMovimento do Bispo:\n");
    i = 1;
    while (i <= movBispo) {
        printf("Cima Direita\n");
        i++;
    }

    //  Movimento da Rainha (usando do-while) 
    printf("\nMovimento da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= movRainha);

    return 0;
}  




