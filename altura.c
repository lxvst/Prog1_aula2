#include <stdio.h>

int main() {

    float altura;
    int idade;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    printf("Informe sua altura: ");
    scanf("%f", &altura);

    if (idade >= 60) {
        printf("Velho\n");
    } else {
        printf("Não velho\n");
    }

    if (altura < 1.60) {
        printf("Hobbit\n");
    } else {
        printf("Não Hobbit\n");
    }

    if (idade < 60 && altura >= 1.60) {
        printf("Muito top\n");
    } 

    return 0;
}