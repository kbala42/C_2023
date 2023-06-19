/*
    Klavyeden girilen sayýnýn karesini  ve kupunu hesaplayan program

                                                                Kamil Bala
*/
#include<stdio.h>


int main()
{
    int sayi = 1;

    int kare = 1, kup = 1;

    printf( "Bir giriniz: ");
    scanf("%d", &sayi);
/*
    kare = sayi * sayi;

    kup = sayi * sayi * sayi;
 */
    kare = sayi * sayi;

    kup = sayi * kare;

    printf("Girdiginiz sayi:%d ", sayi);

    printf("\nGirdiginiz sayinin karesi:%d ",kare);

    printf("\nGirdiginiz sayinin kupu:%d ",kup);


}

