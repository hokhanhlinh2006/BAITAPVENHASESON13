#include <stdio.h>

#define MAX 10

void nhapMaTran(int maTran[MAX][MAX], int hang, int cot) {
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("Nhap vao phan tu o vi tr [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &maTran[i][j]);
        }
    }
}

void inMaTran(int maTran[MAX][MAX], int hang, int cot) {
    printf("Ma tran vua nhap la:\n");
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%d ", maTran[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int maTran[MAX][MAX];
    int hang, cot;
    
    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &hang);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &cot);

    if (hang <= 0 || cot <= 0 || hang > MAX || cot > MAX) {
        printf("Kich thuoc ma tran khong hop le!\n");
        return 1;
    }
    nhapMaTran(maTran, hang, cot);
    inMaTran(maTran, hang, cot);

    return 0;
}
