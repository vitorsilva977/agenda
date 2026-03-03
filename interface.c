//
// Created by aluno on 26/02/2026.
//

#include "interface.h"

#include <stdio.h>
#include <stdlib.h>
int listar_contatos(agenda_t* agenda)
{
    for (int i = 0; i < 100; i++)
    {
        printf("contato: %d\n", i + 1);
        printf("Nome:%s\n", agenda->contatos[i].nome);
        printf("telefone:%d\n", agenda->contatos[i].telefone);
        printf("Idade:%d\n", agenda->contatos[i].idade);
    }
}
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

char **solicitar_contatos() {
    char **contato = malloc(3 * sizeof(char *));
    char *nome = malloc(80 * sizeof(char));
    char *telefone = malloc(20 * sizeof(char));
    char *idade = malloc(10 * sizeof(char));

    printf("Digite o nome do contato:\n");
    scanf("%s", nome);
    printf("Digite o numero do contato:\n");
    scanf("%s", telefone);
    printf("Digite a idade do contato:\n");
    scanf("%s", idade);

    contato[0] = nome;
    contato[1] = telefone;
    contato[2] = idade;

    return contato;
}
