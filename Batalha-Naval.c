#include <stdio.h>

int main() {
    // Tabuleiro 10x10, começa todo com água (0)
    int tabuleiro[10][10] = { {0} };

    // Letras para identificar as colunas (A até J)
    char colunas[10] = {'A','B','C','D','E','F','G','H','I','J'};

    int pode_colocar = 1;

    // ==== NAVIO 1: horizontal na linha 2, colunas F até H ====
    for (int c = 5; c <= 7; c++) {
        if (tabuleiro[1][c] != 0) pode_colocar = 0; // Verifica se já tem algo lá
    }
    if (pode_colocar) {
        for (int c = 5; c <= 7; c++)
            tabuleiro[1][c] = 3; // Coloca o navio
    }

    // ==== NAVIO 2: vertical na coluna C, linhas 4 até 6 ====
    pode_colocar = 1;
    for (int l = 3; l <= 5; l++) {
        if (tabuleiro[l][2] != 0) pode_colocar = 0;
    }
    if (pode_colocar) {
        for (int l = 3; l <= 5; l++)
            tabuleiro[l][2] = 3;
    }

    // ==== NAVIO 3: diagonal principal de G7 até I9 ====
    pode_colocar = 1;
    for (int i = 6; i <= 8; i++) {
        if (tabuleiro[i][i] != 0) pode_colocar = 0;
    }
    if (pode_colocar) {
        for (int i = 6; i <= 8; i++)
            tabuleiro[i][i] = 3;
    }

    // ==== NAVIO 4: diagonal secundária de I2 até G4 ====
    pode_colocar = 1;
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[1 + i][8 - i] != 0) pode_colocar = 0;
    }
    if (pode_colocar) {
        for (int i = 0; i < 3; i++)
            tabuleiro[1 + i][8 - i] = 3;
    }

    // ==== MOSTRA O TABULEIRO ====
    printf("    ");
    for (int i = 0; i < 10; i++)
        printf(" %c", colunas[i]); // Cabeçalho com letras

    for (int linha = 0; linha < 10; linha++) {
        printf("\n%2d  ", linha + 1); // Número da linha
        for (int coluna = 0; coluna < 10; coluna++) {
            printf(" %d", tabuleiro[linha][coluna]); // Valor da célula
        }
    }
    printf("\n");

    return 0;
}
