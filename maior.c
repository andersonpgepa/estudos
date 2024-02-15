#include <stdio.h>

int main() {
    int quantidade, i;
    scanf("%d", &quantidade);

    int array[quantidade];

    for (i = 0; i < quantidade; i++) {
        scanf("%d", &array[i]);
    }

    int maior = array[0];

    for (i = 0; i < quantidade; i++) {
        if (array[i] > maior) {
            maior = array[i];
        }
    }
    printf("%d\n", maior);
    return 0;
}