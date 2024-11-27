#include <stdio.h>

int main() {
    int mang[5] = {12, 45, 7, 23, 89};

    int lon_nhat = mang[0];
    int nho_nhat = mang[0];

    for (int i = 1; i < 5; i++) {
        if (mang[i] > lon_nhat) {
            lon_nhat = mang[i];
        }
        if (mang[i] < nho_nhat) {
            nho_nhat = mang[i];
        }
    }
    printf("Phan tu lon nhat trong mang la: %d\n", lon_nhat);
    printf("Phan tu nho nhat trong mang la: %d\n", nho_nhat);

    return 0;
}
