/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 4: XÂY DỰNG MENU CHƯƠNG TRÌNH CHO 3 BÀI TẬP TRÊN 
//  Sử dụng lệnh Switch-case để xây dựng menu chương trình cho 3 bài tập trên 

#include <stdio.h>

int main(){
     int choice;
    printf("MENU CHUONG TRINH:\n");
    printf("1. Tinh hoc luc sinh vien\n");
    printf("2. Giai phuong trinh bac 1\n");
    printf("3. Giai phuong trinh bac 2\n");
    printf("4. Tinh tien dien\n");
    printf("Nhap lua chon cua ban (1-4): ");
    scanf("%d", &choice);
    
    switch(choice){
        case 1:
            printf("Ban da chon tinh hoc luc sinh vien.\n");
            break;
        case 2:
            printf("Ban da chon giai phuong trinh bac 1.\n");
            break;
        case 3:
            printf("Ban da chon giai phuong trinh bac 2.\n");
            break;
        case 4:
            printf("Ban da chon tinh tien dien.\n");
            break;
        default:
            printf("Lua chon khong hop le! Vui long chon tu 1 den 4.\n");
    }
    return 0;
}
