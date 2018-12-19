/*Krisna agustian
STT Pelita Bangsa */
#include<stdio.h>
#include<conio.h>

int penjumlahan (int a, int b);
int pengurangan (int a, int b);
int perkalian (int a, int b);
int pembagian (int a, int b);

int main(void)
{
    int a,b,c,x;
    printf("pilih Oprasi bilangan : \n (1) Penjumlahan \n (2) pengurangan \n (3) Perkalian \n (4) Pembagian \n");
    scanf("%d",&x);
    printf("masukan bilangan pertama = "); scanf("%d",&a);
    printf("masukan bilangan kedua   = "); scanf("%d",&b);
    switch(x)
    {
    case 1:
            c= penjumlahan (a,b);
            printf("\n %d+%d=%d",a,b,c); break;
        case 2:
            c= pengurangan (a,b);
            printf("\n %d-%d=%d",a,b,c); break;
        case 3:
            c= perkalian (a,b);
            printf("\n %d*%d=%d",a,b,c); break;
        case 4:
            c= pembagian (a,b);
            printf("\n %d/%d=%d",a,b,c); break;
        default :
            printf("\n oprasi tidak ditemukan ");
    }
    getch();
}
int penjumlahan(int a, int b)
{
    int c;
    c=a+b;
    return(c);
}
int pengurangan(int a, int b)
{
    int c;
    c=a-b;
    return(c);
}int perkalian(int a, int b)
{
    int c;
    c=a*b;
    return(c);
}int pembagian(int a, int b)
{
    int c;
    c=a/b;
    return(c);
}

