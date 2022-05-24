#include <stdio.h>

struct kitapbilgi
{
	char kitapadi[20];
    char kitapyazari[20];
    int fiyat;
    float puan;
};

int main()
{
   struct kitapbilgi faruk={"Star Wars","George Lucas",100,10};
   
   printf("Kitap adi:%s\nYazari:%s\nFiyati:%d\nPuani:%.2f",faruk.kitapadi,faruk.kitapyazari,faruk.fiyat,faruk.puan);
   
   return 0;
}
