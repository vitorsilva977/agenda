//
// Created by aluno on 26/02/2026.
//

#include "agenda.h"

#include <stdio.h>

#include "interface.h"

typedef struct contato {
    char *nome;
    char *telefone;
    int idade;
} contato_t;

typedef struct agenda {
    contato_t *contato;
    int tamanho;
} agenda_t;

int init_agenda() {

    int opcao = 9;
    while (opcao != 0) {
        opcao = exibir_menu();
        switch (opcao) {
            case 1:
                adicionar_contato()
                break;
                case 2:
                printf("Listando contato....");
                break;
                case 3:
                printf("    Buscando contato...");
                break;
                case 0:
                printf("Saindo...");
                break;
        }
    };


    return 0;
}