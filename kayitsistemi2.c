#include <stdio.h>

struct kayit {
	char ad[20];
	char soyad[20];
	int no;
	int yas;
	float ort;
};

int main(){
   struct kayit first;
   int deger;
   printf("Adinizi giriniz ");
   scanf("%s",&first.ad);
   printf("Soyadinizi giriniz ");
   scanf("%s",&first.soyad);
   printf("Numaranizi giriniz ");
   scanf("%d",&first.no);
   printf("Yasinizi giriniz ");
   scanf("%d",&first.yas);
   printf("Ortalamanizi giriniz ");
   scanf("%f",&first.ort);
   
   printf("%s %s %d %d %.2f",first.ad,first.soyad,first.no,first.yas,first.ort);
}
