#include <stdio.h>
#include <string.h>

int main() {

    int opcao;

    printf("=== MENU DE ALGORITMOS ===\n");
    printf("1 - Verificar Par ou Impar\n");
    printf("2 - Tabuada\n");
    printf("3 - Media de numeros (vetor)\n");
    printf("4 - Contar letras de uma palavra\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    fflush(stdin);

    if(opcao == 1) {

        int numero;

        printf("Digite um numero: ");
        scanf("%d", &numero);

        if(numero % 2 == 0) {
            printf("O numero e PAR\n");
        } else {
            printf("O numero e IMPAR\n");
        }

    }

    else if(opcao == 2) {

        int numero;

        printf("Digite um numero para ver a tabuada: ");
        scanf("%d", &numero);

        for(int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", numero, i, numero * i);
        }

    }

    else if(opcao == 3) {

        int numeros[5];
        int soma = 0;

        printf("Digite 5 numeros:\n");

        for(int i = 0; i < 5; i++) {
            scanf("%d", &numeros[i]);
            soma += numeros[i];
        }

        float media = soma / 5.0;

        printf("A media e: %.2f\n", media);

    }

    else if(opcao == 4) {

        char palavra[100];

        printf("Digite uma palavra: ");
        scanf("%s", palavra);

        int tamanho = strlen(palavra);

        printf("A palavra tem %d letras\n", tamanho);

    }

    else {

        printf("Opcao invalida\n");

    }

    return 0;
}