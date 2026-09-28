#include <stdio.h>

int main() {
    int numeros[20];
    int i;

    int somaMultiplos3 = 0;
    int somaPares = 0;
    int quantidadePares = 0;

    int positivos = 0;
    int negativos = 0;

    int maior;
    int menor;

    float mediaPares;

    // Leitura dos 20 números
    printf("Digite 20 numeros inteiros:\n\n");

    for (i = 0; i < 20; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // O primeiro numero sera usado como referencia
    // para encontrar o maior e o menor valor
    maior = numeros[0];
    menor = numeros[0];

    // Percorre o vetor para realizar os calculos
    for (i = 0; i < 20; i++) {

        // Verifica se o numero e multiplo de 3
        if (numeros[i] % 3 == 0) {
            somaMultiplos3 += numeros[i];
        }

        // Verifica se o numero e par
        if (numeros[i] % 2 == 0) {
            somaPares += numeros[i];
            quantidadePares++;
        }

        // Conta os numeros positivos e negativos
        if (numeros[i] > 0) {
            positivos++;
        } else if (numeros[i] < 0) {
            negativos++;
        }

        // Verifica o maior e o menor numero
        if (numeros[i] > maior) {
            maior = numeros[i];
        }

        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    // Calcula a media dos pares apenas se houver numeros pares
    if (quantidadePares > 0) {
        mediaPares = (float) somaPares / quantidadePares;
    }

    // Mostra os resultados
    printf("           RESULTADOS\n");

    printf("Soma dos multiplos de 3: %d\n", somaMultiplos3);

    if (quantidadePares > 0) {
        printf("Media dos numeros pares: %.2f\n", mediaPares);
    } else {
        printf("Nao existem numeros pares.\n");
    }

    printf("Quantidade de positivos: %d\n", positivos);
    printf("Quantidade de negativos: %d\n", negativos);
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    // Exibe todos os numeros armazenados
    printf("\nNumeros armazenados no vetor:\n");

    for (i = 0; i < 20; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n");

    return 0;
}
