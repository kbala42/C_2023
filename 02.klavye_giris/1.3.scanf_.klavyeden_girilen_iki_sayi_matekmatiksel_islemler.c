/*
    Klavyeden girilen iki sayý üzerinde toplama, çýkartma, çarmpma ve bölme yapýp
    ekrama yazdýran program

                                                                Kamil Bala
*/
#include<stdio.h>


int main()
{
    int sayiBir, sayiIki;
    int toplama, cikarma, carpma, bolme;

    printf("Birinci sayi giriniz: ");
    scanf("%d", &sayiBir);

    printf("Ikinci sayi giriniz: ");
    scanf("%d", &sayiIki);

    toplama = sayiBir + sayiIki;

    cikarma = sayiBir - sayiIki;

    carpma = sayiBir * sayiIki;

    bolme = sayiBir / sayiIki;

/*
    printf("Toplama sonucu: %d", toplama);

    printf("\nCikarma sonucu: %d", cikarma);

    printf("\nCarpma sonucu: %d", carpma);

    printf("\nBolme sonucu: %d", bolme);
*/
    printf("%d + %d = %d",sayiBir, sayiIki, toplama);
    printf("\n%d - %d = %d",sayiBir, sayiIki, cikarma);
    printf("\n%d * %d = %d",sayiBir, sayiIki, carpma);
    printf("\n%d / %d = %d",sayiBir, sayiIki, bolme);




}
