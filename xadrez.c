#include <stdio.h>

/*
  Desafio de Xadrez - Nível Novato
  - Torre: 5 casas para a direita (usar for)
  - Bispo: 5 casas na diagonal para cima e à direita (usar while)
           Imprimir combinação "Cima Direita" por casa
  - Rainha: 8 casas para a esquerda (usar do-while)

  Requisitos:
  - Entradas definidas no código (constantes/variáveis)
  - Imprimir a direção a cada casa com printf
  - Código legível e documentado; usar apenas inteiros e strings (literais)
*/

int main(void) {
    /* Quantidades de casas (definidas no código) */
    const int casasTorre   = 5;
    const int casasBispo   = 5;
    const int casasRainha  = 8;

    /* ----------------------------- */
    /* TORRE — mover para a DIREITA  */
    /* Estrutura utilizada: for      */
    /* ----------------------------- */
    for (int i = 1; i <= casasTorre; i++) {
        /* A torre move em linha reta: aqui, sempre para a direita */
        printf("Direita\n");
    }

    /* ----------------------------------------------- */
    /* BISPO — mover na diagonal CIMA + DIREITA        */
    /* Estrutura utilizada: while                      */
    /* ----------------------------------------------- */
    int passosBispo = 0;
    while (passosBispo < casasBispo) {
        /* Diagonal para cima e à direita: combina duas direções */
        printf("Cima Direita\n");
        passosBispo++;
    }

    /* ---------------------------------- */
    /* RAINHA — mover para a ESQUERDA     */
    /* Estrutura utilizada: do-while      */
    /* ---------------------------------- */
    int passosRainha = 0;
    if (casasRainha > 0) {
        /* do-while garante pelo menos uma iteração quando necessário */
        do {
            printf("Esquerda\n");
            passosRainha++;
        } while (passosRainha < casasRainha);
    }

    return 0;
}
