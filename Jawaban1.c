#include <stdio.h>
#include <string.h>

int main() {
    int jumlah_test;
    printf("masukkan jumlah test: ");
    scanf("%d", &jumlah_test);

    char string_A[1001], string_B[1001];
    int panjang_A, panjang_B;

    for (int i = 0; i < jumlah_test; i++) {
        printf ("masukan test pertama: ");
        scanf("%s", string_A);
        printf ("masukan test kedua: ");
        scanf("%s", string_B);
        panjang_A = strlen(string_A);
        panjang_B = strlen(string_B);

        if (panjang_B > panjang_A) {
            printf("nao encaixa\n");
            continue;
        }

        int sama = 1;
        for (int p = 1; p <= panjang_B; p++) {
            if (string_B[panjang_B-p] != string_A[panjang_A-p]) {
                sama = 0;
            }
        }

        if (sama) {
            printf("encaixa\n");
        } else {
            printf("nao encaixa\n");
        }
    }

    return 0;
}