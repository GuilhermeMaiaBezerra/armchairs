#ifndef FUNCOES_H
#define FUNCOES_H

#include <stdbool.h>

#define linhas 4
#define colunas 9

// Variáveis globais
extern int ocupadas[linhas][colunas][1];
extern int codFilme;
extern char nomeFilme[50];
extern bool sair;

//Funções
void EscolherFilme();
int AssentosOcupados();

#endif
