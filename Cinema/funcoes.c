#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "funcoes.h"

// Variáveis globais
int ocupadas[linhas][colunas][1] = {0};
int codFilme;
char nomeFilme[50];
bool sair = false;

void EscolherFilme() {
    int opcao;
    bool Continuar = true;

    while(Continuar) {
        printf("---------------CINEMA FAMETRO 2025---------------\n");
        printf("Escolha o codigo da sessao:\n");
        printf("\n1 - Kimetsu no Yaiba Infinity Castle");
        printf("\n2 - Attack on Titan: O Ultimo Ataque");
        printf("\n0 - Sair");
        printf("\nOpcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
        case 1:
            codFilme = 1;
            strcpy(nomeFilme, "Kimetsu no Yaiba Infinity Castle");
            break;
        case 2:
            codFilme = 2;
            strcpy(nomeFilme, "Attack on Titan: O Ultimo Ataque");
            break;
        case 0:
            sair = true;
            return;
        default:
            printf("Codigo invalido !!");
            getchar();
            getchar();
            system("cls");
            continue;
        }

        Continuar = false;
        system("cls");
        AssentosOcupados();
    }
}

int AssentosOcupados() {
    char poltronas[linhas][colunas];

    printf("\n\nFileira\t\tPoltronas\n");
    for(int i = 0; i < linhas; i++) {
        printf("\n    %d", i+1);
        printf("\t");
        for(int j = 0; j < colunas; j++) {
            poltronas[i][j] = (i + 1, j + 1);

            if(ocupadas[i][j][codFilme] != 1) {
                printf("\033[1;32mP%d \033[0m", poltronas[i][j]);
            } else {
                printf("\033[1;31mP%d \033[0m", poltronas[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
