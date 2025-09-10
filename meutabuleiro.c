#include <stdio.h>

int main() {
    // Definindo o tabuleiro (10x10)
    int tabuleiro[10][10] = {0};

    // Posição do navio vertical (coluna fixa = 2, linhas de 1 a 3)
    int x_vertical = 2;
    int y_inicio_vertical = 1;
    int y_fim_vertical = 3;

    // Posição do navio horizontal (linha fixa = 5, colunas de 4 a 7)
    int y_horizontal = 5;
    int x_inicio_horizontal = 4;
    int x_fim_horizontal = 7;

    // Marcar o navio vertical no tabuleiro
    for (int y = y_inicio_vertical; y <= y_fim_vertical; y++) {
        tabuleiro[y][x_vertical] = 1;
    }

    // Marcar o navio horizontal no tabuleiro
    for (int x = x_inicio_horizontal; x <= x_fim_horizontal; x++) {
        tabuleiro[y_horizontal][x] = 2;
    }

    // Exibir coordenadas do navio vertical
    printf("=== Navio Vertical ===\n");
    for (int y = y_inicio_vertical; y <= y_fim_vertical; y++) {
        printf("Coordenada: (%d, %d)\n", x_vertical, y);
    }

    // Exibir coordenadas do navio horizontal
    printf("\n=== Navio Horizontal ===\n");
    for (int x = x_inicio_horizontal; x <= x_fim_horizontal; x++) {
        printf("Coordenada: (%d, %d)\n", x, y_horizontal);
    }

    return 0;
}