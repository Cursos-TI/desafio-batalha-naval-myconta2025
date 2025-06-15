#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};
    int navioH[3] = {3, 3, 3};
    int navioV[3] = {3, 3, 3};

    int linhaH = 2, colunaH = 4; // Navio horizontal começa na linha 3, coluna E
    int linhaV = 5, colunaV = 7; // Navio vertical começa na linha 6, coluna H

    // Posiciona navio horizontal
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaH][colunaH + i] = navioH[i];
    }

    // Posiciona navio vertical
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaV + i][colunaV] = navioV[i];
    }

    //imprime o cabeçalho, letras das colunas
    printf("   A B C D E F G H I J\n");

    //imprime o tabuleiro com numeração de linhas de 1 a 10
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1); // Linhas numeradas de 1 a 10
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
