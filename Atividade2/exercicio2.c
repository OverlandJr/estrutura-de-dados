#include <stdio.h>

// Função para encontrar o menor e o maior elemento de um array
void menorMaiorArray(int array[], int tamanho, int *menor, int *maior) {
    if (tamanho <= 0) {
        *menor = *maior = 0;
        return;
    }

    *menor = *maior = array[0];

    for (int i = 1; i < tamanho; i++) {
        if (array[i] < *menor) {
            *menor = array[i];
        }
        if (array[i] > *maior) {
            *maior = array[i];
        }
    }
}

int main() {
    int tamanho;

    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);

    if (tamanho <= 0) {
        printf("Tamanho inválido. O tamanho do array deve ser maior que zero.\n");
        return 1;
    }

    int array[tamanho];

    printf("Digite os elementos do array:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int menor, maior;
    menorMaiorArray(array, tamanho, &menor, &maior);

    printf("O menor elemento do array é: %d\n", menor);
    printf("O maior elemento do array é: %d\n", maior);

    return 0;
}
