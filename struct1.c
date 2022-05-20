#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct kitap {
	char kitapAdi[30];
	float fiyat;
	int sayfa;
};

typedef struct {
	char adSoyad[30];
	int yas;
} yazar;


int main() {

	// Direct  
	struct kitap kitap1;
	strcpy(kitap1.kitapAdi, "Turklerin Tarihi");
	kitap1.fiyat = 17.50;
	kitap1.sayfa = 350;

    printf("Bilgiler: %s %f %d", kitap1.kitapAdi, kitap1.fiyat, kitap1.sayfa);

	// Undirect

	struct kitap* kitap2 = (struct kitap*)malloc(sizeof(struct kitap));
	strcpy(kitap2->kitapAdi, "Fabrika Ayari");
	kitap2->fiyat = 16.50;
	kitap2->sayfa = 300;

	printf("\nBilgiler: %s %f %d", kitap2->kitapAdi, kitap2->fiyat, kitap2->sayfa);

	// Typedef ile kullaným

	yazar yazar1;
	strcpy(yazar1.adSoyad, "Ilber Ortayli");
	yazar1.yas = 74;

	// Typedef - Undirect
	yazar* yazar2 = (yazar*)malloc(sizeof(yazar));
	strcpy(yazar2->adSoyad, "Hayati Inanc");
	yazar2->yas = 60;

	printf("\nYazar 1: %s %d", yazar1.adSoyad, yazar1.yas);
	printf("\nYazar 2: %s %d", yazar2->adSoyad, yazar2->yas);

	return 1;
}
