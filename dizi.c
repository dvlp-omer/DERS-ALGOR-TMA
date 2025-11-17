/*
#include <stdio.h>
int main(){

    int i, C[]={ -5,6,0,72,1543,-89,0,62,-3,1,6453,78};
    for(i= 0;i<12;i++)
    printf("C[%d] = %d\n", i,C[i]);
}*/


/*
#include <stdio.h>
#define SIZE 10 // dizimizin kaç elemanlı olduğunu verir (size)
int main(){

    int A[SIZE],number,i;
    printf("Enter a number");
    scanf("%d", &number);

    for(i= 0;i< SIZE;i++)
    A[i] = number;
    //diziyi ekrana yazdırmak icin kullan
    for(i= 0; i< SIZE;i++)
    printf("A[%d]= %d\n", i, A[i]);
}*/
 /*
#include <stdio.h>
int main(){
    char Name[] = {'s','e','n','g','u','l', '\0'};

    int i;
    for(i = 0; i< 6; i++)
    printf("Name[%d]= %c\n", i ,Name[i]);
}
*/
 // 100 elemanlı int türden A dizisinin elemanlarına 2 den başlyarak 
 //cift sayıları atayan C kodunu yazınız
/*
 #include <stdio.h>
 #define SIZE 100
 int main(){
    int A[SIZE],i;
    for(i = 0;i<SIZE;i++)
    A[i]= (i+1) * 2;
   for(i = 0;i<SIZE;i++)
   printf("A[%d]= %d\n",i, A[i]);


 }
 */