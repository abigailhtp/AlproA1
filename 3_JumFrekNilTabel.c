/* Nama File    		: 3_JumFrekNilTabel.c */
/* Deskripsi    		: Menghitung dan menampilkan jumlah frekuensi nilai dalam tabel */
/* Pembuat      		: Miriam Stefani Abigail Hutapea - 24060122130051 */
/*Tanggal Pembuatan		: 18 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>


int main()
{
    //Kamus
        int n;
        int i,j;
        int *T=(int*)malloc(n*sizeof(int));
        int frek, total;

    //Algoritma
    printf ("Menghitung dan menampilkan jumlah frekuensi nilai dalam tabel\n");
    printf ("Masukkan ukuran tabel :");
    scanf ("%d",&n);
    printf ("Masukkan tabel:\n");
     for (i=0;i<n;i++){
        scanf ("%d",&T[i]);
    }
    total=0;
    for (i=0;i<n;i++){
        frek=1;
        for (j=i+1;j<n;j++){
              if (T[i]!=0 &&T[i]==T[j]){
                frek=frek+1;
                T[j]=0;
              }
        }if (frek>1){
            total=total+(frek*T[i]);

        }
    }printf ("%d ",total);
    return 0;
}
