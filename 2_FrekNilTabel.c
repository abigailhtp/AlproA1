/* Nama File    		: 2_FrekNilTabel.c */
/* Deskripsi    		: Menampilkan nilai elemen tabel T yang frekuensi kemunculannya lebih dari satu kali */
/* Pembuat      		: Miriam Stefani Abigail Hutapea - 24060122130051 */
/*Tanggal Pembuatan		: 18 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>


int main()
{
    //Kamus
    int n;
    int *T=(int*)malloc(n*sizeof(int));
    int frek;
    int i,j;

    //Algoritma
    printf ("Menampilkan nilai elemen tabel T yang frekuensi kemunculannya lebih dari satu kali\n");
    printf ("Masukkan ukuran tabel :");
    scanf ("%d",&n);
    printf ("Masukkan tabel:\n");
     for (i=0;i<n;i++){
        scanf ("%d",&T[i]);
    }
    printf("Elemen yang muncul lebih dari satu kali :");
    for (i=0;i<n;i++){
        frek=1;
        for (j=i+1;j<n;j++){
              if (T[i]!=0 &&T[i]==T[j]){
                frek=frek+1;
                T[j]=0;
                break;
              }
        }if (frek>1){
            printf ("%d ",T[i]);
        }
    }
    return 0;
}
