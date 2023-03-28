/* Nama File    		: JumPrimaProsedur.c */
/* Deskripsi    		: Menjumlahkan bilangan prima yang terdapat dari 1 sampai input (bilangan integer sembarang) */
/* Pembuat      		: Miriam Stefani Abigail Hutapea - 24060122130051 */
/*Tanggal Pembuatan		: 26 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int main(){
     printf("-----Menampilkan bilangan prima beserta jumlahnya----\n");
    int n;
    printf("Masukkan bilangan :");
    scanf ("%d",&n);
    jumprima(9);
    return 0;
}

void jumprima (int *n){
    // Spesifikasi
    //IS
    //FS
    //Kamus lokal
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
                if (i==2){
                    printf ("%d",i);
                }else{
                printf ("+%d",i);}
                totalprima=totalprima+i;

            }
        }printf ("=%d",totalprima);
     }else{
     printf("Tidak ada bilangan prima, sehingg jumlah Sn=0");}
}
