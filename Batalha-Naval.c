#include <stdio.h>
#include <stdlib.h>

#define TAM 10
#define HAB 5

int main() {
    int tabuleiro[TAM][TAM] = {0};
    char letras[] = {'A','B','C','D','E','F','G','H','I','J'};

    // Navios
    for (int c = 5; c <= 7; c++) tabuleiro[1][c] = 3;
    for (int l = 3; l <= 5; l++) tabuleiro[l][2] = 3;
    for (int i = 6; i <= 8; i++) tabuleiro[i][i] = 3;
    for (int i = 0; i < 3; i++) tabuleiro[1 + i][8 - i] = 3;

    int cone[HAB][HAB] = {0}, cruz[HAB][HAB] = {0}, octaedro[HAB][HAB] = {0};

    // Cone
    for (int l = 0; l < HAB; l++)
        for (int c = 0; c < HAB; c++)
            if (c >= HAB / 2 - l && c <= HAB / 2 + l) cone[l][c] = 1;

    // Cruz
    for (int i = 0; i < HAB; i++) {
        cruz[i][HAB / 2] = 1;
        cruz[HAB / 2][i] = 1;
    }

    // Octaedro
    for (int l = 0; l < HAB; l++)
        for (int c = 0; c < HAB; c++)
            if (abs(l - HAB / 2) + abs(c - HAB / 2) <= HAB / 2)
                octaedro[l][c] = 1;

    // Aplicar Cone no ponto (2,2)
    int origem_l = 2, origem_c = 2;
    for (int l = 0; l < HAB; l++)
        for (int c = 0; c < HAB; c++) {
            int tl = origem_l - HAB / 2 + l;
            int tc = origem_c - HAB / 2 + c;
            if (tl >= 0 && tl < TAM && tc >= 0 && tc < TAM)
                if (cone[l][c] == 1 && tabuleiro[tl][tc] == 0)
                    tabuleiro[tl][tc] = 5;
        }

    // Aplicar Cruz no ponto (5,5)
    origem_l = 5, origem_c = 5;
    for (int l = 0; l < HAB; l++)
        for (int c = 0; c < HAB; c++) {
            int tl = origem_l - HAB / 2 + l;
            int tc = origem_c - HAB / 2 + c;
            if (tl >= 0 && tl < TAM && tc >= 0 && tc < TAM)
                if (cruz[l][c] == 1 && tabuleiro[tl][tc] == 0)
                    tabuleiro[tl][tc] = 5;
        }

    // Aplicar Octaedro no ponto (7,7)
    origem_l = 7, origem_c = 7;
    for (int l = 0; l < HAB; l++)
        for (int c = 0; c < HAB; c++) {
            int tl = origem_l - HAB / 2 + l;
            int tc = origem_c - HAB / 2 + c;
            if (tl >= 0 && tl < TAM && tc >= 0 && tc < TAM)
                if (octaedro[l][c] == 1 && tabuleiro[tl][tc] == 0)
                    tabuleiro[tl][tc] = 5;
        }

    // Mostrar o tabuleiro
    printf("    ");
    for (int i = 0; i < TAM; i++) printf(" %c", letras[i]);
    for (int l = 0; l < TAM; l++) {
        printf("\n%2d  ", l + 1);
        for (int c = 0; c < TAM; c++) {
            if (tabuleiro[l][c] == 0) printf(" ~");
            else if (tabuleiro[l][c] == 3) printf(" N");
            else if (tabuleiro[l][c] == 5) printf(" *");
        }
    }
    printf("\n");

    return 0;
}
