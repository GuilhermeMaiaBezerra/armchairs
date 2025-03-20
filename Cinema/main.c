#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "funcoes.h"

int main() {
    bool Continuar = true;
    int fileira, poltrona;

    EscolherFilme();

    while (Continuar) {
        if (sair) {
            system("cls");
            printf("\nSaindo do programa...");
            Continuar = false;
            return 0;
        }

        char trocarSessao;

        printf("\nObs: Caso queira trocar de sessao digite (Y)\nPara continuar aperte Enter... ");
        getchar();
        scanf("%c", &trocarSessao);

        if (trocarSessao == 'Y' || trocarSessao == 'y') {
            system("cls");
            EscolherFilme();
            continue;
        }

        printf("\nSessao: %s", nomeFilme);
        printf("\nInforme o assento\n");
        printf("Fileira: ");
        scanf("%d", &fileira);

        if (fileira <= 0 || fileira > linhas) {
            system("cls");
            printf("\n\033[1;33mMensagem de erro: Fileira inexistente\033[0m\n");
            AssentosOcupados();
            continue;
        }

        printf("Poltrona da Fileira 0%d : ", fileira);
        scanf("%d", &poltrona);

        if (poltrona <= 0 || poltrona > colunas) {
            system("cls");
            printf("\n\033[1;33mMensagem de erro: Poltrona inexistente\033[0m\n");
            AssentosOcupados();
            continue;
        }

        if (ocupadas[fileira - 1][poltrona - 1][codFilme] == 1) {
            system("cls");
            printf("\n\033[1;33mEsta fileira ja esta ocupada!!\033[0m\n");
            AssentosOcupados();
            continue;
        }

        ocupadas[fileira - 1][poltrona - 1][codFilme] = 1;
        system("cls");
        AssentosOcupados();
    }

    return 0;
}
