#include <stdio.h>

int main() {
    int idade;
    int soma = 0;
    int quantidade = 0;
    float media;

    printf("Digite as idades (0 para encerrar):\n");
    scanf("%d", &idade);

    while (idade != 0) {
        soma = soma + idade;
        quantidade = quantidade + 1;

        printf("digite as idades (0 para encerrar):\n");
        scanf("%d", &idade);
    }

    if (quantidade > 0) {
        media = (float)soma / quantidade;
        printf("Media das idades: %.2f\n", media);
    } else {
        printf("Nenhuma idade valida foi digitada.\n");
    }

    return 0;
}