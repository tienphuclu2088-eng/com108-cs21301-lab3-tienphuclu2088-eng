/******************************************************************************
 * Họ và tên: [Luu Phuc Tien]
 * MSSV:      [PS48200]
 * Lớp:       [COM108-CS21301]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TIỀN ĐIỆN 
//  Input: Nhập vào số điện tiêu thụ hàng tháng 
//  Output: Hiển thị số tiền cần phải đóng
 
#include <stdio.h>

int main(){
    int kWh;
    long long tien;
    
    printf("Nhập số kWh: ");
    scanf("%d", &kWh);
    
    if (kWh <= 50) {
        tien = kWh * 1678;
    } else if (kWh <= 100) {
        tien = 83900 + (kWh - 50) * 1734;
    } else if (kWh <= 200) {
        tien = 170600 + (kWh - 100) * 2014;
    } else if (kWh <= 300) {
        tien = 372000 + (kWh - 200) * 2536;
    } else if (kWh <= 400) {
        tien = 625600 + (kWh - 300) * 2834;
    } else {
        tien = 909000 + (kWh - 400) * 2927;
    }
    
    printf("Số tiền phải đóng: %lld đồng\n", tien);
    
    return 0;


}