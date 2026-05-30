#include <stdio.h>
#include <string.h> 

#define max 100

typedef struct
{
    char ma_mh[12];  
    char ten_mh[60]; 
    int so_tc;       
} monhoc;

monhoc A[max];

void XoaBoNhoDem() 
{
    while (getchar() != '\n');
}


void NhapDS(monhoc *x)
{
    printf("Nhap ma mon hoc: ");
    gets(x->ma_mh);
    printf("Ten mon hoc: ");
    gets(x->ten_mh);
    printf("So tin chi: ");
    scanf("%d", &x->so_tc);
}


void XuatDS(monhoc A[], int n) 
{
    printf("\n=================== DANH SACH MON HOC ===================\n");
    printf("%-15s | %-30s | %-10s\n", "Ma MH", "Ten mon hoc", "So TC");
    printf("---------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-15s | %-30s | %-10d\n", A[i].ma_mh, A[i].ten_mh, A[i].so_tc);
    }
    printf("=========================================================\n");
}


int TongTinChi(monhoc A[], int n) 
{
    int tong = 0;
    for (int i = 0; i < n; i++) {
        tong += A[i].so_tc;
    }
    return tong;
}


void MonHocTinChiCaoNhat(monhoc A[], int n) 
{
    if (n == 0) return;
    
   
    int max_tc = A[0].so_tc;
    for (int i = 1; i < n; i++) 
    {
        if (A[i].so_tc > max_tc) 
        {
            max_tc = A[i].so_tc;
        }
    }
    
  
    printf("\n--- CAC MON HOC CO TIN CHI CAO NHAT (%d TC) ---\n", max_tc);
    printf("%-15s | %-30s | %-10s\n", "Ma MH", "Ten mon hoc", "So TC");
    for (int i = 0; i < n; i++) 
    {
        if (A[i].so_tc == max_tc) 
        {
            printf("%-15s | %-30s | %-10d\n", A[i].ma_mh, A[i].ten_mh, A[i].so_tc);
        }
    }
}


void TimMonHocTheoSoTC(monhoc A[], int n, int x)
 {
    int found = 0;
    printf("\n--- KET QUA TIM KIEM MON HOC CO %d TIN CHI ---\n", x);
    printf("%-15s | %-30s | %-10s\n", "Ma MH", "Ten mon hoc", "So TC");
    for (int i = 0; i < n; i++) 
    {
        if (A[i].so_tc == x) 
        {
            printf("%-15s | %-30s | %-10d\n", A[i].ma_mh, A[i].ten_mh, A[i].so_tc);
            found = 1;
        }
    }
    
    if (found == 0) 
    {
        printf("Khong tim thay mon hoc co %d tin chi!\n", x);
    }
}

// Chuc nang 6: Tim mon hoc theo ten
void TimMonHocTheoTen(monhoc A[], int n, char ten_tim_kiem[]) 
{
    int found = 0;
    printf("\n--- KET QUA TIM KIEM CHO TEN: '%s' ---\n", ten_tim_kiem);
    printf("%-15s | %-30s | %-10s\n", "Ma MH", "Ten mon hoc", "So TC");
    for (int i = 0; i < n; i++) 
    {
        if (strstr(A[i].ten_mh, ten_tim_kiem) != NULL) 
        {
            printf("%-15s | %-30s | %-10d\n", A[i].ma_mh, A[i].ten_mh, A[i].so_tc);
            found = 1;
        }
    }
    
    if (found == 0) 
    {
        printf("=> Khong tim thay mon hoc nao!\n");
    }
}

int main()
{
    int n;
    printf("Nhap so luong mon hoc: ");
    scanf("%d", &n);
    XoaBoNhoDem();
    
   
    for(int i = 0; i < n; i++) 
    {
        printf("\n--- Nhap mon hoc thu %d ---\n", i + 1);
        NhapDS(&A[i]);
        XoaBoNhoDem();
    }
    
  
    XuatDS(A, n);
    

    printf("\n=> Tong so tin chi cua tat ca cac mon hoc la: %d\n", TongTinChi(A, n));
    
  
    MonHocTinChiCaoNhat(A, n);
    
  
    int x;
    printf("\nNhap so tin chi can tim: ");
    scanf("%d", &x);
    TimMonHocTheoSoTC(A, n, x);
    XoaBoNhoDem(); 
    
   
    char ten_tim_kiem[60];
    printf("\nNhap ten mon hoc can tim: ");
    gets(ten_tim_kiem); 
    TimMonHocTheoTen(A, n, ten_tim_kiem);

    return 0;
}