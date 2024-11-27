#include <stdio.h>

int main() {
    int n;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So phan tu khong hop le.\n");
        return 1;
    }

    int mang[n];

    printf("Nhap cac phan tu cua mang (chi nhap so le):\n");
    for (int i = 0; i < n; i++) {
        do {
            printf("Nhap phan tu thu %d: ", i + 1);
            scanf("%d", &mang[i]);

            if (mang[i] % 2 == 0) {
                printf("Phan tu phai la so le. Vui long nhap lai!\n");
            }
        } while (mang[i] % 2 == 0);
    }

    printf("Cac phan tu trong mang:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    return 0;
}
