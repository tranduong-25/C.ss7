#include <stdio.h>

int main() {
    int mang[5] = {1, 3, 4, 7, 8};
    int co_so_chan = 0; 
    printf("Cac so chan trong mang la:\n");
    for (int i = 0; i < 5; i++) {
        if (mang[i] % 2 == 0) {
            printf("%d ", mang[i]);
            co_so_chan = 1;
        }
    }

    if (co_so_chan == 0) {
        printf("Mang khong chua so chan.");
    }

    return 0;
}
