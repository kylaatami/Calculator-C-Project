#include <stdio.h>

void add();
void sub();
void mul();
void div();

int main() {
    int pilihan;

    printf("=== Program Kalkulator Kelompok ===\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("Pilih operasi: ");
    scanf("%d", &pilihan);

    switch(pilihan) {
        case 1: add(); break;
        case 2: sub(); break;
        case 3: mul(); break;
        case 4: div(); break;
        default: printf("Pilihan tidak valid.\n");
    }

    return 0;
}

void add() {
    float a, b;
    printf("Masukkan angka pertama: ");
    scanf("%f", &a);
    printf("Masukkan angka kedua: ");
    scanf("%f", &b);
    printf("Hasil Penjumlahan: %.2f\n", a + b);
}

void sub() {
    // Isi logika pengurangan di sini
}

void mul() {
    // Isi logika perkalian di sini
}

void div() {
    // Isi logika pembagian di sini
}