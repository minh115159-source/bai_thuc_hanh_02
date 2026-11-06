#include <stdio.h>
#include <stdlib.h>

struct SinhVien {
    char hoten[100];
    char ma[20];
    float diem1, diem2, diem3;
};

int main() {
    int n, i;
    struct SinhVien *ds;

    printf("Nhap so sinh vien: ");
    scanf("%d", &n);

    ds = (struct SinhVien*)malloc(
        n * sizeof(struct SinhVien)
    );

    if (ds == NULL) {
        printf("Khong cap phat duoc bo nho!");
        return 0;
    }
    for (i = 0; i < n; i++) {
        printf("\nSinh vien thu %d\n", i + 1);

        printf("Ho ten: ");
        scanf(" %99[^\n]", (ds + i)->hoten);

        printf("Ma sinh vien: ");
        scanf("%19s", (ds + i)->ma);

        printf("Diem 1: ");
        scanf("%f", &(ds + i)->diem1);

        printf("Diem 2: ");
        scanf("%f", &(ds + i)->diem2);

        printf("Diem 3: ");
        scanf("%f", &(ds + i)->diem3);
    }

    printf("\nDanh sach sinh vien");

    for (i = 0; i < n; i++) {
        printf("\nSinh vien thu %d\n", i + 1);

        printf("Ho ten: %s\n", (ds + i)->hoten);
        printf("Ma: %s\n", (ds + i)->ma);
        printf("Diem 1: %.2f\n", (ds + i)->diem1);
        printf("Diem 2: %.2f\n", (ds + i)->diem2);
        printf("Diem 3: %.2f\n", (ds + i)->diem3);
    }

    free(ds);

    return 0;
}
