
//Klavyeden yıl ve ay numarası (1–12) giriniz. Girilen ayın kaç gün çektiğini ekrana yazdıran bir C programı yazınız.
//Şubat ayı için 28 gün, artık yıllarda 29 gün yazdırılmalıdır.


/*
#include <stdio.h>
int main()
{
    int yil,ay,günAdedi;
    
    printf("yili giriniz: ");
    scanf("%d", &yil);

    printf("ay numarasını giriniz (1-12): ");
    scanf("%d",&ay);

switch(ay){
case 1:   //OCAK
case 3:   //MART
case 5:   //MAYIS
case 7:   //TEMMUZ
case 8:   //AGUSTOS
case 10:  //EKİM
case 12:  //ARALIK

günAdedi= 31;

break;
case 4:   //NİSAN
case 6:   //HAZİRAN
case 9:   //EYLÜL
case 11:  //KASIM

günAdedi= 30;

break;
case 2:   //ŞUBAT

//artık yıl kontrolü

if((yil % 4 == 0 && yil % 100 !=0) || (yil % 400  == 0))
günAdedi= 29;

else 
günAdedi= 28;

break;
default:
printf(" geçersiz ay numarası girdiniz!!\n");
return 1;

}
printf("%d. ay %d gun çeker.\n", ay, günAdedi);
return 0;
}
*/



//Kullanıcıdan bir tam sayı alınız.
//Bu sayının palindrom sayı olup olmadığını kontrol eden bir C programı yazınız.


/*
#include <stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    printf("a,b,c,d,e,f ve g sayilarini giriniz: ");
    scanf("%d%d%d%d%d%d%d", &a,&b,&c,&d,&e,&f,&g);
    if ((a==g)&&(b==f)&&(c==e)){
        printf("girdiğiniz sayi palindrom sayidir");

    }
    else {
        printf("girdiğiniz sayi palindrom sayi değildir");
    }
    return 0;
}
*/






