#include <stdio.h>

int main() {
    int N = 3;
    int i, idades[N], generos[N];
    for (i = 0; i < N; i++) {
        printf("Usuario %d:\n", i + 1);
        
        printf("Informe a idade: ");
        scanf("%d", &idades[i]);

        printf("Informe o genero (1=FEMININO, 2=MASCULINO): ");
        scanf("%d", &generos[i]);
        while (generos[i] != 1 && generos[i] != 2) {
            printf("Genero invalido!\n");
            printf("Informe novamente o genero (1=FEMININO, 2=MASCULINO): ");
            scanf("%d", &generos[i]);
        }
    }

    char GENEROS[3][10] = {"vazio","FEMININO","MASCULINO"};

    printf("\n");
    for (i = 0; i < N; i++) {
        printf("Dados do usuario %d: Idade = %d ; Genero = %s\n", i + 1, idades[i], GENEROS[generos[i]]);
    }

    return 0;
}