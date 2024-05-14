#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void hanoi(int ds,char bas,char bit,char dig)
{
    if(ds==1)
    {
        printf("1 numarali diski %c . direkten %c numarali direge tasi\n",bas,bit);
        return;
    }
    hanoi(ds-1,bas,dig,bit);
    printf("%d numarali diski %c direginden %c diregine tasi\n",ds,bas,bit);
    hanoi(ds-1,dig,bit,bas);
}
int main()
{   clock_t start_t, end_t;
    int ds;
    printf("Disk sayisini giriniz:");
    scanf("%d",&ds);
    start_t = clock();
    hanoi(ds,'A','C','B');
    end_t = clock();
     printf("Hesaplama sureci (saniye): %.4f\n", (double)(end_t - start_t) / CLOCKS_PER_SEC);
    return 0;
}
