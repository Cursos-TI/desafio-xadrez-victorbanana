#include <stdio.h>

int main() {

    int casasTorre = 3;
    int casasBispo = 2;
    int casasRainha = 2;

    printf("\n=== MOVIMENTO DA TORRE ===\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Torre: Direita\n");
    }

    printf("\n=== MOVIMENTO DO BISPO ===\n");
    for (int v = 0; v < casasBispo; v++) {
        for (int h = 0; h < casasBispo; h++) {
            printf("Bispo: Diagonal (Cima e Direita)\n");
        }
    }

    printf("\n=== MOVIMENTO DA RAINHA ===\n");
    for (int i = 0; i < casasRainha; i++) {
        printf("Rainha: Cima\n");
        printf("Rainha: Direita\n");
        printf("Rainha: Diagonal (Cima e Direita)\n");
    }

    printf("\n=== MOVIMENTO DO CAVALO ===\n");
    int maxLinhas = 3, maxColunas = 3;

    for (int i = 0; i < maxLinhas; i++) {
        for (int j = 0; j < maxColunas; j++) {
            if (i == 2 && j == 1) {
                printf("Cavalo: Movimento em L (2 pra Cima e 1 pra Direita)\n");
                break;
            }
            if (i != 2 || j != 1)
                continue;
        }
    }

    printf("\nFim dos movimentos!\n");

    return 0;
}
