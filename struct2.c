#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
	char takimAdi[30];
	int kurulus;
} takim;

typedef struct {
	char adSoyad[30];
	int yas;
	takim takim;
} futbolcu;

int main() {
	futbolcu ft;
	strcpy(ft.adSoyad, "Farukcan Ugurlu");
	ft.yas = 21;
	strcpy(ft.takim.takimAdi,"Galatasaray");
	ft.takim.kurulus = 1905;

	printf("Bilgiler: %s %d", ft.takim.takimAdi, ft.takim.kurulus);
}