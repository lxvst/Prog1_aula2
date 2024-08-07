#include <stdio.h>

int main() {
    
    float nota1, nota2, media;

    printf("Informe as notas: ");
    scanf("%f %f", &nota1, &nota2);

    media = (nota1 + nota2) / 2;

    printf("A media das notas é: %.2f\n", media);

    if (media >= 5) {
        printf("Aprovado!");
    } else {
        printf("Reprovado.");
    }

    /*
    E -> &&
    OU -> ||
    Negação -> !
    Diferente -> !=
    Igual -> ==
    */


    return 0;
}