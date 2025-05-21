# Batalha Naval em C

Este é um projeto simples de um tabuleiro do jogo **Batalha Naval**, feito em linguagem C. O programa exibe uma matriz 10x10 representando o campo de batalha, com posições marcadas por números.

## Funcionalidades

- Impressão do tabuleiro com coordenadas de A–J (colunas) e 1–10 (linhas).
- Posicionamento de uma embarcação horizontal com valor `3`.
- Posicionamento de uma embarcação vertical com valor `3`.

## Exemplo de saída

```
    A B C D E F G H I J
 1  0 0 0 0 0 0 0 3 3 3
 2  0 0 0 0 0 0 0 0 0 0
 3  0 0 3 0 0 0 0 0 0 0
 4  0 0 3 0 0 0 0 0 0 0
 5  0 0 3 0 0 0 0 0 0 0
 6  0 0 0 0 0 0 0 0 0 0
 7  0 0 0 0 0 0 0 0 0 0
 8  0 0 0 0 0 0 0 0 0 0
 9  0 0 0 0 0 0 0 0 0 0
10  0 0 0 0 0 0 0 0 0 0
```

## Como compilar

No terminal (Linux/macOS) ou PowerShell (Windows):

```bash
gcc batalha_naval.c -o batalha_naval
./batalha_naval
```

## Autor

Javan Oliveira  
📧 oliveiraajavan@hotmail.com
