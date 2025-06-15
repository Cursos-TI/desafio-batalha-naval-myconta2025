#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};
    int navioH[3] = {3, 3, 3};
    int navioV[3] = {3, 3, 3};
    int navioD1[3] = {3, 3, 3};
    int navioD2[3] = {3, 3, 3};

    int linhaH = 2, colunaH = 4; //navio horizontal começa na linha 3, coluna E
    int linhaV = 5, colunaV = 7; //navio vertical começa na linha 6, coluna H
    int linhaD1 = 1, colunaD1 = 1; //navio diagonal descendo
    int linhaD2 = 7, colunaD2 = 2; //navio diagonal subindo

    //posicionamento do navio horizontal
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaH][colunaH + i] = navioH[i];
    }

    //posicionamento do navio vertical
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaV + i][colunaV] = navioV[i];
    }

    //posicionamento do navio diagonal descendo (linha+, coluna+)
    if (linhaD1 + 2 < 10 && colunaD1 + 2 < 10) {
        for (int i = 0; i < 3; i++) {
            tabuleiro[linhaD1 + i][colunaD1 + i] = navioD1[i];
        }
    }

    //posicionamento do navio diagonal subindo (linha-, coluna+)
    if (linhaD2 - 2 >= 0 && colunaD2 + 2 < 10) {
        for (int i = 0; i < 3; i++) {
            tabuleiro[linhaD2 - i][colunaD2 + i] = navioD2[i];
        }
    }

    //imprime o cabeçalho, letras das colunas
    printf("   A B C D E F G H I J\n");

    //imprime o tabuleiro com numeração de linhas de 1 a 10
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1); 
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
