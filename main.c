#include <stdio.h>

void add();
void sub();
void mul();
void div_func();

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
        case 4: div_func(); break;
        default: printf("Pilihan tidak valid.\n");
    }

    return 0;
}

void add() {
    // Isi logika penjumlahan di sini
}

void sub() {
    // Isi logika pengurangan di sini
}

void mul() {
    // Isi logika perkalian di sini
}

void div_func() {
    // Isi logika pembagian di sini
}