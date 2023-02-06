/** EL2208 Praktikum Pemecahan Masalah dengan C 2022/2023
 *   Modul               : 1 - Overview of the C Language
 *   Hari dan Tanggal    : Rabu, 8 Febuari 2023
 *   Nama (NIM)          : 
 *   Nama File           : main.c
 *   Deskripsi           :
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int kue, ceri;

    printf("=== Kue Black Forest untuk Raya ===\n");
    printf("Masukkan panjang kue : ");
    scanf("%d", &kue);
    // Validasi panjang kue
    while (kue < 1 || 20 < kue) {
        printf("Panjang kue melebihi dari yang seharusnya!\n");
        printf("Masukkan panjang kue : ");
        scanf("%d", &kue);
    }

    printf("Masukkan jumlah ceri : ");
    scanf("%d", &ceri);
    // Validasi jumlah ceri
    while (ceri < 0 || kue < ceri) {
        printf("Jumlah ceri melebihi dari panjang kue!\n");
        printf("Masukkan jumlah ceri : ");
        scanf("%d", &ceri);
    }

    int array_point;
    int array_ceri[kue];
    for (int i=0; i<ceri; i++) {
        printf("Masukkan letak ceri ke-%d: ", i+1);
        scanf("%d", &array_point);
        array_ceri[array_point-1] = 6;
    }

    printf("\nhasil kue:\n");

    // blok pertama
    printf("--");
    for (int i=0; i<kue; i++) { printf("-");}

    // blok kedua
    printf("\n|");
    for (int i=0; i<kue; i++) {
        if (array_ceri[i] == 6) {
            printf("6");
        }
        else {
            printf(".");
        }
    }
    printf("|\n");

    // blok ketiga
    printf("--");
    for (int i=0; i<kue; i++) { printf("-");}

    printf("\n\n==== Kue sudah siap diberikan ====");

    return 0;
}
