#include<stdio.h>

int main()
{
    double a=51.890;

    float b=10.0085f;

    printf("a=%f b=%f", a, b);

    printf("\n");

    printf("a=%.2f b=%.8f", a, b);

    printf("\n");

    int k=25, m=1, n=567,s=65298;

    printf("%4d\n", k);
    printf("%4d\n", m);
    printf("%4d\n", n);
    printf("%4d\n", s);

    printf("\n");

    printf("%-4d\n", k);
    printf("%-4d\n", m);
    printf("%-4d\n", n);
    printf("%-4d\n", s);

    return 0;
}
