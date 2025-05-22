#include <stdio.h>

int main() {
    // Número de casas definidas diretamente no código
    int movTorre = 5;
    int movBispo = 5;
    int movRainha = 8;
    int casasBaixo = 2;
    int casasEsquerda = 1;

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

    //  Movimento do Cavalo (loops aninhados for + while) 
    printf("\nMovimento do Cavalo (para baixo e esquerda):\n");
    int j;
    for (i = 0; i < casasBaixo; i++) {
        // loop externo controla os passos para baixo
        printf("Baixo\n");
        // quando completa os passos para baixo, executa o interno
        if (i == casasBaixo - 1) {
            j = 0;
            while (j < casasEsquerda) {
                printf("Esquerda\n");
                j++;
            }
        }
    }

    return 0;
}