/******************************************************************************
 * Họ và tên: [PHAN NHƯ ĐỊNH]
 * MSSV:      [PS49566]
 * Lớp:       [COM103_CS21302]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH GIẢI PHƯƠNG TRÌNH  
//  2.1 BẬC 1 
//  Phương trình có dạng ax + b = 0 
//  Input: nhập vào từ bàn phím giá trị của a, b 
//  Output: Hiển thị nghiệm của phương trình 
//  Biết rằng: 
//  Nếu a == 0,  
//   b == 0: Phương trình có vô số nghiệm 
//   b != 0: Phương trình vô nghiệm 
//  Ngược lại: Phương trình có nghiệm x = -b/a 
 

    #include <stdio.h>

int main() {
    float a, b, x;

    printf("Nhap a, b: ");
    scanf("%f %f", &a, &b);

    if (a == 0) {
        if (b == 0)
            printf("Phuong trinh co vo so nghiem");
        else if (b != 0)
            printf("Phuong trinh vo nghiem");
    } else {
        x = -b / a;
        printf("Phuong trinh co nghiem x = %.2f", x);
    }

    return 0;
}

    