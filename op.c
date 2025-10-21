#include <stdio.h>
int main(){
    /* int i;
    for (i = 1; i <100; i++)
    {
        if((i%2)== 0)
        printf("%d, ", i);
    }  
    */
  
    /*
  
  
    unsigned int x;

    for (x = 1; x < 5; x++)
    {
        if (x == 5)
        {
            break;
        }
        printf("%d\n", x);
    }
        printf("\nx in son degeri : %d", x);
   */
   /*
   int x;
   for ( x = 1; x < 100; x++)
{   
    if((x ==5)) {
        continue;
    }
}
printf("%u", x);   
*/
//1 ile 100 arasındaki sayilarin toplamını ,ortalamasını hesaplayan C kodunu yazınız.

/*
int x,sum=0,;
float ortalama;
for (x=1; x<=100; x++)
{
    sum=sum+x;
}
printf("1 ile 100 arasındaki sayıların toplamı: %d", sum);  
    ortalama = sum/100;
   printf("\n1 ile 100 arasındaki sayıların toplamının ortalaması %d",ortalama);
return 0;
*/
/*
int x;
double carpim = 1;

for (x=1; x<10;x++){
    carpim *= x;

}printf("çarpım: %lf\n", carpim);
*/

//1 ile 100 arasındaki tek sayıları ve adedini ekrana yazdıran C kodu

 int x,count= 0;

 for(x=1; x<1000; x= x+2)
 {
    printf(" %d ", x);
    count++;
 }
    printf("\n1 ile 1000 arasındaki tek sayıların adedi : %d\n", count);








return 0;
}