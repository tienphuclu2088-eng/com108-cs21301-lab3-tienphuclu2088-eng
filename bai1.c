/******************************************************************************
 * Họ và tên: [Lưu Phúc Tiến]
 * MSSV:      [PS48200
 * Lớp:       [COM108-CS21301]
 *****************************************************************************/

// BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÍNH HỌC LỰC  
// Input: Nhập vào điểm của sinh viên (0-10) 
// Output: Hiển thị ra màn hình học lực của sinh viên 
// Biết rằng: 
// Học lực xuất sắc: Điểm >= 9 
// Học lực giỏi: 9 > điểm >= 8 
// Học lực khá: 8 > điểm >= 6.5 
// Học lực trung bình: 6.5 > điểm >= 5 
// Học lực yếu: 5 > điểm >= 3.5 
// Học lực kém: 3.5 > điểm

#include <stdio.h>

int main(){
    float diem;
    printf("NHAP DIEM SINH VIEN (0-10): ");
    scanf("%f", &diem);
    // Kiểm tra điểm hợp lệ
    if (diem < 0 || diem > 10) {
        printf("DIEM KHONG HOP LE! Vui long nhap diem tu 0 den 10.\n");
    } else {
        printf("HOC LUC: ");
        
        if (diem >= 9) {
            printf("XUAT SAC\n");
        } 
        else if (diem >= 8) {  
            printf("GIOI\n");
        }
        else if (diem >= 6.5) { 
            printf("KHA\n");
        }
        else if (diem >= 5) {   
            printf("TRUNG BINH\n");
        }
        else if (diem >= 3.5) { 
            printf("YEU\n");
        }
        else {                
            printf("KEM\n");
        }
    }
    return 0;
}