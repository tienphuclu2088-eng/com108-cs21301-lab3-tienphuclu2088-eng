/******************************************************************************
 * Họ và tên: [Luu Phuc Tien]
 * MSSV:      [PS48200]
 * Lớp:       [COM108-CS21301]
 *****************************************************************************/

 //  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH KIỂM TRA SỐ CHẴN LẺ

#include <stdio.h>

int main(){
    int soN;

    printf("Chương trình kiểm tra số chẵn lẻ\n");

    printf("Nhập vào một số nguyên: ");
    scanf("%d", &soN);

    if(soN % 2 == 0){
        printf("Số %d là số chẵn.\n", soN);
    } else {
        printf("Số %d là số lẻ.\n", soN);
    }

    return 0;

}