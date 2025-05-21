#include <stdio.h>

int main(){
    int index, coluna;

    // Aqui é o "rótulo" das colunas, de A até J, pra mostrar na tela
    char linha[10] = {
        'A','B','C','D','E','F','G','H','I','J'
    };

    // Essa é a matriz 10x10 toda zerada, que vai ser o "tabuleiro" do jogo
    int jogo[10][10] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    };

    // Agora, vamos colocar três '3's na linha 1, nas colunas 7, 8 e 9
    for (coluna = 7; coluna <= 9; coluna++){
        jogo[1][coluna] = 3;
    };

    // Aqui a gente coloca três '3's na coluna 2, nas linhas 3, 4 e 5
    for (index = 3; index <= 5; index++){
        jogo[index][3] = 3;
    }

    // Vamos imprimir o cabeçalho com as letras, mostrando as colunas
    printf("   ");
    for (index = 0; index < 10; index++){
        printf(" %c", linha[index]);
    };

    // Agora vamos imprimir o tabuleiro completo linha por linha
    for (index = 0; index < 10; index++){
        // Imprime o número da linha (index+1 pra ficar de 1 a 10)
        printf("\n%2d  ", index + 1);
        // Imprime todos os valores daquela linha
        for (int coluna = 0; coluna < 10; coluna++)
            printf("%d ", jogo[index][coluna]);
    }
    printf("\n");

    return 0;
}