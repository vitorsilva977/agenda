//
// Created by aluno on 26/02/2026.
//

#include "interface.h"

#include <stdio.h>

int exibir_menu() {
    int opcao;
    printf("======= AGENDA DE CONTATOS =======\n");
    printf("1 - Adicionar contatos\n");
    printf("2 - Listar contatos\n");
    printf("3 - Buscar contatos\n");
    printf("0 - Sair\n");
    printf("Digite a sua opcao: ");
    scanf("%d", &opcao);
    return opcao;
}
