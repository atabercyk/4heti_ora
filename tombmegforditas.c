#include <stdio.h>

void kiir(int n, int tomb[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", tomb[i]);
    }
}

int osszeg(int n, int tomb[])
{
    int sum = 0; // ha nem adok méretet neki memória szemét lenne
    for (int i = 0; i < n; i++)
    {
        sum += tomb[i];
    }
    return sum;
}

int szorzat(int n, int tomb[])
{
    int szorz = 1;
    for (int i = 0; i < n; i++)
    {
        szorz *= tomb[i];
    }
    return szorz;
}


double atlag(int n, int tomb[])
{
    double avg = 0; // ha nem adok méretet neki memória szemét lenne
    for (int i = 0; i < n; i++)
    {
        avg += tomb[i];
    }
    avg = avg / n;
    return avg;
}

void megfordit (int n, int tomb[])
{
    int i = 0;
    int j = n-1;
    while (i < j)
    {
        int tmp = tomb[i];
        tomb[i] = tomb[j];
        tomb[j] = tmp;
        i++;
        j--;
    }
}

int main(int argc, char const *argv[])
{
    int tomb[10] = {1,2,3,4,5,6,7,8,9,10};
    int meret = 10;
    
    
    // int sum = osszeg(meret, tomb);
    // printf("sum=%d\n", sum);

    // int szorz = szorzat(meret, tomb);
    // printf("szoratuk=%d\n", szorz);
    
    // double avg = atlag(meret, tomb);
    // printf("Átlag=%lf\n", avg);
    // kiir(meret, tomb);
// int a = 6;
// int b = 9;
// printf("előtte a =%d b=%d\n", a, b);
// int tmp = a;
// a = b;
// b = tmp;
// printf("utánna a=%d b=%d\n",a, b);

printf("\nelőte\n");
kiir(meret, tomb);
printf("\nutana\n");
megfordit (meret,tomb);
kiir(meret, tomb);



    return 0;
}
