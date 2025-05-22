#include <stdio.h>

// Recursão para mover a Torre (direita)
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

// Recursão para mover o Bispo (diagonal cima-direita)
// utilizando loops aninhados dentro da recursão
void moverBispo(int passos) {
    if (passos > 0) {
        // Loop externo: 1 passo para cima
        for (int v = 0; v < 1; v++) {
            printf("Cima");
            // Loop interno: 1 passo para a direita (aninhado)
            for (int h = 0; h < 1; h++) {
                printf(" Direita");
            }
        }
        printf("\n");
        moverBispo(passos - 1);
    }
}

// Recursão para mover a Rainha (esquerda) 
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

int main() {
    int movTorre  = 5;
    int movBispo = 5;
    int movRainha = 8;

    // Movimentação da Torre (recursiva)
    printf("Movimento da Torre:\n");
    moverTorre(movTorre);

    // Movimentação do Bispo (recursivo com loops aninhados)
    printf("\nMovimento do Bispo:\n");
    moverBispo(movBispo);

    // Movimentação da Rainha (recursiva)
    printf("\nMovimento da Rainha:\n");
    moverRainha(movRainha);

    // Movimentação do Cavalo com loops complexos aninhados
    printf("\nMovimento do Cavalo (para cima e direita):\n");
    int i, j;
    int movimentos = 0;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            if (movimentos == 2 && j == 0) {
                continue; // evita subir além de 2 vezes
            }
            if (movimentos < 2 && j == 0) {
                printf("Cima\n");
                movimentos++;
            } else if (movimentos == 2 && j == 1) {
                printf("Direita\n");
                movimentos++;
                break; // completa o "L"
            }
        }
        if (movimentos >= 3) {
            break; // movimento completo
        }
    }

    return 0;
}
