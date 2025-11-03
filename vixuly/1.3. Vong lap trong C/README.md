# II. VÒNG LẶP TRONG LẬP TRÌNH C
1. Kiểu dữ liệu
<p align="center">
  <img src="./Images/image.png" alt="mô tả ảnh" width="600"/>
</p>
2. Vòng lặp While

```C
#include <stdio.h> // thu vien chuan
void main(void){    //chuong trinh chinh
    printf("Hello, cao dang quang ngai");
    unsigned char x = 0;  // 0 -> 255
    while (x < 5)
    {
        printf("\nGia tri cua x: %d\n", x);
        x++ ; //tăng x thêm 1 đơn vị rồi gán ngược lại cho x
    }
}
```

3. Ứng dụng trong vi điều khiển
```C
#include <16F877A.h> //Khai bao thu vien su dung 
#use delay(crystal=20000000) //Khai bao thach anh su dung 20Mhz
void main() //Chuong trinh chinh
{
   set_tris_d(0x00); //PORT D la OUTPUT
   unsigned char x = 0;
   while(x<5), //Kiểm tra điều kiện nếu x < 5 thì vào vòng lặp, x lớn hơn hoặc bằng 5 thì thoát khỏi vòng lặp
   {
      output_high(PIN_D0); //xuat muc cao ra chan RD0 cua vi dieu khien
      output_high(PIN_D1);
      output_high(PIN_D2);
      output_high(PIN_D3);
      delay_ms(1000);
      output_low(PIN_D0); //Xuat muc thap ra chan RD0 cua vi dieu khien
      output_low(PIN_D1);
      output_low(PIN_D2);
      output_low(PIN_D3);
      delay_ms(1000);
      x = x + 1;

//!      output_d(0x0F); //RD7 RD6 RD5 RD4 RD3 RD2 RD1 RD0
//!      delay_ms(100);
//!      output_d(0x00); //RD7 RD6 RD5 RD4 RD3 RD2 RD1 RD0
//!      delay_ms(1000);
   }
}
```

3. Vòng lặp for

```C
#include <16F877A.h> //Khai bao thu vien su dung 
#use delay(crystal=20000000) //Khai bao thach anh su dung 20Mhz
void main() //Chuong trinh chinh
{
   set_tris_d(0x00); //PORT D la OUTPUT
   for(unsigned char x=0; x<5; x++>), //Kiểm tra điều kiện nếu x < 5 thì vào vòng lặp, x lớn hơn hoặc bằng 5 thì thoát khỏi vòng lặp
   {
      output_high(PIN_D0); //xuat muc cao ra chan RD0 cua vi dieu khien
      output_high(PIN_D1);
      output_high(PIN_D2);
      output_high(PIN_D3);
      delay_ms(1000);
      output_low(PIN_D0); //Xuat muc thap ra chan RD0 cua vi dieu khien
      output_low(PIN_D1);
      output_low(PIN_D2);
      output_low(PIN_D3);
      delay_ms(1000);
      x = x + 1;
   }
}
```