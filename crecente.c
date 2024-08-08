#include <stdio.h>

int main () {
    int n1, n2, n3, maior1, maior2, menor;

    printf("Escreva 3 valores: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 >= n2) {
        maior1 = n1;
        maior2 = n2;
    } else {
        maior1 = n2;
        maior2 = n1;
    }

    if (n3 >= maior1) {
        menor = maior2;
        maior2 = maior1;
        maior1 = n3;
    } else {
        if (n3 > maior2) {
            menor = maior2;
            maior2 = n3;
        } else {
            menor = n3;
        }
    }
    
    printf("%d %d %d\n", menor, maior2, maior1);

    return 0;
}