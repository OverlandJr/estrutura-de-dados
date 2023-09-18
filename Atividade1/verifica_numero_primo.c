#include <stdio.h>
#include <stdbool.h>


bool ehPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    
    if (numero <= 3) {
        return true;
    }
    
    
    if (numero % 2 == 0) {
        return false;
    }

    for (int i = 3; i * i <= numero; i += 2) {
        if (numero % i == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int numero;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (ehPrimo(numero)) {
        printf("1 - O número %d é primo.\n", numero);
    } else {
        printf("0 - O número %d não é primo.\n", numero);
    }

    return 0;
}
