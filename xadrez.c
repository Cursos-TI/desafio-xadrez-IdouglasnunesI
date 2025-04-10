#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


// Movimento recursivo da Torre (para a direita)
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Movimento recursivo da Rainha (para a esquerda)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Movimento recursivo do Bispo (para cima e à direita) com loops aninhados
void moverBispo(int linha, int coluna, int casas) {
    if (casas == 0) return;

    for (int i = 0; i < 1; i++) { // movimento vertical (simulado)
        for (int j = 0; j < 1; j++) { // movimento horizontal (simulado)
            printf("Cima Direita\n");
        }
    }

    moverBispo(linha + 1, coluna + 1, casas - 1);
}

// Movimento do Cavalo (duas casas para cima e uma para a direita) com loops aninhados complexos
void moverCavalo() {
    int movimentosFeitos = 0;

    for (int i = 0; i < 3; i++) { // 3 tentativas de movimento
        for (int j = 0; j < 3; j++) {
            if (i == j) continue; // pula movimentos inválidos

            if (i == 2 && j == 1) {
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
                movimentosFeitos++;
                break;
            }
        }
        if (movimentosFeitos > 0) break; // sai do loop externo
    }
}

int main() {
    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\nMovimento do Bispo:\n");
    moverBispo(0, 0, 5);

    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    printf("\nMovimento do Cavalo:\n");
    moverCavalo();

    return 0;
}
