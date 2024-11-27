#include <stdio.h>

int main() {
    int mang[5];
    
    printf("Nhap 5 phan tu cua mang:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nhap phan tu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }

    printf("\nCac phan tu trong mang la:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", mang[i]);
    }
    
    return 0;
}
