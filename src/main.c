/* Projeto: [nome] | Integrantes: [nomes]
 * Menu principal do programa.
 */
#include <stdio.h>
#include "operacoes.h"

int main(void) {
    int opcao;
    do {
        printf("\n=== MENU PRINCIPAL ===\n");
        printf("1. Inserir\n2. Listar\n3. Editar\n4. Excluir\n");
        printf("5. Pesquisar\n6. Resumo/estatisticas\n0. Sair\n");
        printf("Opcao: ");
        if (scanf("%d", &opcao) != 1) {
            int caractere;
            while ((caractere = getchar()) != '\n' && caractere != EOF) {}
            puts("Entrada invalida.");
            opcao = -1;
            continue;
        }
        switch (opcao) {
            case 1: inserir(); break;
            case 2: listar(); break;
            case 3: editar(); break;
            case 4: excluir(); break;
            case 5: pesquisar(); break;
            case 6: resumo(); break;
            case 0: puts("Encerrando..."); break;
            default: puts("Opcao invalida.");
        }
    } while (opcao != 0);
    return 0;
}
