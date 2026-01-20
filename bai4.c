/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 4: XÂY DỰNG MENU CHƯƠNG TRÌNH CHO 3 BÀI TẬP TRÊN 
//  Sử dụng lệnh Switch-case để xây dựng menu chương trình cho 3 bài tập trên 

#include <stdio.h>

int main(){
    printf("Menu 3 bt Lab3\n");
    printf("a. tinh hoc luc SV\nb. giai pt bac 1\nc. Giai pt bac 2\nd. tinh tien dien\n");
char BaiTap;
scanf("%s", &BaiTap);
switch(BaiTap){
    case 'a':
        printf(" Chon bai a.");   
        break;
    case 'b':   
        printf(" Chon bai b.");   
        break;
    case 'c':   
        printf(" Chon bai c.");   
        break;
    case 'd':
        printf(" Chon bai d.");   
        break;  
    default:
        printf("Lua chon khong hop le.");
}
    


    // Xử lý, tính toán VÀ Hiển thị kết quả

}