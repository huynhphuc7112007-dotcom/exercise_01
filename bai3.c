#include <stdio.h>
#define max 100
typedef struct
{
    char ma_mh[12];  // Mã môn học
    char ten_mh[60]; // Tên môn học
    int so_tc;       // Số tín chỉ
} monhoc;
monhoc A[max];
void XoaBoNhoDem() {
    while (getchar() != '\n');
}

// Chuc nang 1: Nhap DS
void NhapDS(monhoc *x)
{
    // 1. Nhập mã môn học (thường không có khoảng trắng)
    printf("Nhap ma mon hoc: ");
    gets(x->ma_mh);
    printf("Ten mon hoc: ");
    gets(x->ten_mh);
    printf("So tin chi: ");
    scanf("%d", &x->so_tc);
}

// Chuc nang 2: Xuat DS mon hoc

// Chuc nang 3: Tong so tin chi cua danh sach mon hoc

// Chuc nang 4: In ra list mon hoc co tin chi cao nhat

// Chuc nang 5: Tim mon hoc co x tin chi

// Chuc nang 6: Tim mon hoc theo ten, khi tim duoc thi hien thi thong tin cua mon hoc do





int main()
{
    int n;
    printf("Nhap so luong mon hoc: ");
    scanf("%d", &n);
    XoaBoNhoDem();
    // Vòng lặp để nhập từng môn học vào mảng A
    for(int i = 0; i < n; i++) {
        printf("\n--- Nhap mon hoc thu %d ---\n", i + 1);

        // Truyền địa chỉ của phần tử thứ i vào hàm
       
        NhapDS(&A[i]);
        XoaBoNhoDem();
        
    }
    return 0;
}