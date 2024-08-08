#include <stdio.h>

int main() {

    int a, b, copo;

    printf("Dê um valor a variavel A: ");
    scanf("%d", &a);

    printf("Dê um valor a variavel B: ");
    scanf("%d", &b);

    printf("A = %d B = %d\n", a, b);

    copo = a;
    a = b;
    b = copo;

    printf("A = %d B = %d", a, b);

    return 0;
}