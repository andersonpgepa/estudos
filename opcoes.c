#include <stdio.h>

int main() {
    int opcao = -1;
    while (opcao != 0) {
        printf("(1) Cadastrar\n");
        printf("(2) Exibir\n");
        printf("(0) Sair\n");
        printf("OPCAO: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: printf("Cadastro Teste\n"); break;
            case 2: printf("Exibicao Teste\n"); break;
            case 0: break;
            default: printf("Opcao invalida!\n"); break;
        }
        printf("\n");
    }
    return 0;
}