# Desafio Nível Mestre – Batalha Naval em C

Este projeto é a fase final do desafio de Batalha Naval, com foco em manipulação de matrizes e aplicação de habilidades especiais no tabuleiro do jogo.

## 🎯 Objetivo

Adicionar **três habilidades especiais** com diferentes áreas de efeito ao tabuleiro do jogo, visualizando as posições afetadas:

- 🟢 Cone
- 🔵 Cruz
- 🔶 Octaedro

## 📐 Estrutura do Projeto

- **Tabuleiro:** 10x10, contendo água (`~`), navios (`N`) e áreas afetadas (`*`)
- **Matrizes de habilidade:** 5x5 com `1` indicando área afetada
- **Sobreposição:** A matriz é centralizada num ponto definido no código

## 📌 Como Funciona

- As matrizes são construídas dinamicamente usando `for` com `if`
- Cada habilidade é aplicada sobre o tabuleiro com checagem de limites
- O resultado é impresso com `printf`, exibindo o estado final do tabuleiro

## 🔢 Legenda Visual

| Símbolo | Significado          |
|---------|----------------------|
| `~`     | Água                 |
| `N`     | Navio (valor 3)      |
| `*`     | Área afetada (valor 5) |

## 🚀 Execução

Compile e execute com:

```bash
gcc main.c -o batalha
./batalha
