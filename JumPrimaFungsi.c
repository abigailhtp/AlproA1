/* Nama File    		: JumPrimaFungsi.c */
/* Deskripsi    		: Menjumlahkan bilangan prima yang terdapat dari 1 sampai input (bilangan integer sembarang) */
/* Pembuat      		: Miriam Stefani Abigail Hutapea - 24060122130051 */
/*Tanggal Pembuatan		: 26 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int hasil;
    printf("-----Menampilkan bilangan prima beserta jumlahnya----\n");
    hasil= jumprima(8);
    printf("%d",hasil);
}

int jumprima (int n){
    int i,j;
    int jum;
    int totalprima=0;

     if (n>0){
        printf ("Bilangan prima :");
        for (i=1;i<=n;i++){
            jum=0;
            for (j=1;j<=i;j++){
                if (i%j==0){
                    jum++;
                }
            }
            if (jum==2){
                printf ("%d +",i);
                totalprima+=i;
            }
        }
     }
     printf ("dengan jumlah deret bilangannya adalah Sn=");
     return totalprima;
}



