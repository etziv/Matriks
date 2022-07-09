/*///////////////////////
// By : Hanif Abdillah //
///////////////////////*/

#include<stdio.h>

int m,n,i,j,k,p,q,pilih,hasil=0;
int matriks1[10][10], matriks2[10][10];
int jumlah[10][10],kurang[10][10],kali[10][10];

void baca_matriks(int mat[10][10], int baris, int kolom)
{
    for( i =1;i<=baris; i++){
        for(j=1;j<=kolom;j++){
            printf("Data [%d,%d] = ", i,j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void cetak_matriks(const int A[10][10], int baris, int kolom)
{
    printf("\n");
    for(i = 1;i<=baris;i++){
        for(j = 1;j<=kolom;j++){
            printf("\t%d ", A[i][j]);
        }
        printf("\n");
    }
}

void matriks_jumlah(const int matriks[10][10], const int matriks2[10][10], int baris, int kolom, int jumlah [10][10])
{
    for(i = 1;i<=baris; i++){
        for(j = 0;j<=kolom;j++){
				jumlah [i][j] = matriks[i][j] + matriks2[i][j];
        }
    }
}

void matriks_kurang(const int matriks[10][10], const int matriks2[10][10], int baris, int kolom, int kurang [10][10])
{
    for(i = 1;i<=baris; i++){
        for(j = 0;j<=kolom;j++){
            kurang [i][j] = matriks[i][j] - matriks2[i][j];
        }
    }
}
void matriks_kali(const int matriks[10][10], const int matriks2[10][10], int baris, int kolom,int baris2, int kali[10][10])
{
     for(i = 1; i <= baris; i++){
      for(j = 0; j <= kolom; j++){
        for(k = 0; k <= baris2; k++){
          hasil = hasil + matriks[i][k] * matriks2[k][j];
        }
        kali[i][j] = hasil;
        hasil=0;
      }
    }
}

int main()
{
do{
printf("\n<<<<< PROGRAM OPERASI DUA MATRIKS >>>>>\n");
printf("===================================\n");
printf("\t1. Input Data Matriks\n");
printf("\t2. Penjumlahan Matriks\n");
printf("\t3. Pengurangan Matriks\n");
printf("\t4. Perkalian Matriks\n");
printf("\t5. Selesai\n");
printf("===================================\n");
printf("\nPilihan Anda (1/2/3/4/5) : "); scanf("%d", &pilih);
printf("\n");

if (pilih==1){
        printf("Jumlah Baris = ");scanf("%d", &m);
        printf("Jumlah Kolom = ");scanf("%d", &n);
        printf("\nInput Data matriks ke-1 \n");
        baca_matriks(matriks1,m,n);
        printf("\nMatriks 1:");
        cetak_matriks(matriks1,m,n);
        printf("\nInput Data matriks ke-2 \n");
        baca_matriks(matriks2, m, n);
        printf("\nMatriks 2:");
        cetak_matriks(matriks2, m, n);
    }
else if(pilih==2){
        if (m==0){
        printf("Input Data Dahulu, Pilih Option 1 !!\n");
        }else{
        printf("\nMatriks 1 : ");
        cetak_matriks(matriks1,m,n);
        printf("\nMatriks 2 : ");
        cetak_matriks(matriks2, m, n);
        matriks_jumlah(matriks1, matriks2, m, n, jumlah);
        printf("\nHasil penjumlahan : ");
        cetak_matriks(jumlah,m,n);
        }
    }
else if(pilih==3){
        if (m==0){
        printf("Input Data Dahulu, Pilih Option 1 !!\n");
        }else{
        printf("\nMatriks 1 : ");
        cetak_matriks(matriks1,m,n);
        printf("\nMatriks 2 : ");
        cetak_matriks(matriks2, m, n);
        matriks_kurang(matriks1, matriks2, m, n, kurang);
        printf("\nHasil Pengurangan : ");
        cetak_matriks(kurang,m,n);
        }
    }
else if(pilih==4){
        if (m==0){
        printf("Input Data Dahulu, Pilih Option 1 !!\n");
        }else{
        printf("\nMatriks 1 : ");
        cetak_matriks(matriks1,m,n);
        printf("\nMatriks 2 : ");
        cetak_matriks(matriks2, m, n);
        matriks_kali(matriks1, matriks2, m, n, m, kali);
        printf("\nHasil Perkalian : ");
        cetak_matriks(kali,m,n);
        }
    }
else if (pilih > 5){
    printf("\tInput Anda Salah !!!\n");
}
}while(pilih!=5);
return 0;
     }


