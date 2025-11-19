// #include <16F877A.h> //Khai bao thu vien su dung 
// #use delay(crystal=20000000) //Khai bao thach anh su dung 20Mhz
// #bit RD7   = 0x08.7 //Khai bao bit RD7 de su dung nut nhan
// void main() //Chuong trinh chinh
// {
//    unsigned char count = 0; //Khoi tao gia tri ban dau
//    set_tris_d(0x80); //PORT D la OUTPUT
//    // |RD7  |RD6  |RD5  |RD4  |RD3  |RD2  |RD1  |RD0
//    //    1    0     0     0     0     0     0     0
//    output_low(PIN_D0);  //Khoi tao tat ca cac chan output ve muc thap
//    output_low(PIN_D1);  //Khoi tao tat ca cac chan output ve muc thap
//    output_low(PIN_D2);  //Khoi tao tat ca cac chan output ve muc thap
//    output_low(PIN_D3);  //Khoi tao tat ca cac chan output ve muc thap
//     while(TRUE){
//         if(RD7 == 0){   //Neu nut nhan duoc nhan
//             delay_ms(10);   // Chống rung
//             output_high(PIN_D0);    //Bật đèn led ở chân RD0
//         }else{  
//             delay_ms(10);   // Chống rung
//             output_low(PIN_D0);   //Tắt đèn led ở chân RD0
//         }
//     }
// }

#include <16F877A.h> //Khai bao thu vien su dung 
#use delay(crystal=20000000) //Khai bao thach anh su dung 20Mhz
#bit RD7   = 0x08.7
void main() //Chuong trinh chinh
{
   unsigned char count = 0; // count 0x00
   set_tris_d(0x80); //RD7 INPUT, RD6..RD0 OUTPUT
   // |RD7  |RD6  |RD5  |RD4  |RD3  |RD2  |RD1  |RD0    Register 0x08
   //    1    0     0     0     0     0     0     0
   output_low(PIN_D0);  //Khoi tao tat ca cac chan output ve muc thap
   output_low(PIN_D1);  //Khoi tao tat ca cac chan output ve muc thap
   output_low(PIN_D2);  //Khoi tao tat ca cac chan output ve muc thap
   output_low(PIN_D3);  //Khoi tao tat ca cac chan output ve muc thap
   while(TRUE){
      if(RD7 == 0){  //Neu nut nhan duoc nhan
         delay_ms(300); //Chong rung
         count ++;  //
         if(count == 5) count = 0;
      }
      if(count == 0){   //Tat ca cac led tat
         output_low(PIN_D0);
         output_low(PIN_D1);
         output_low(PIN_D2);
         output_low(PIN_D3);
      }
      if(count == 1){   //Led D0 sang
         output_high(PIN_D0);
         output_low(PIN_D1);
         output_low(PIN_D2);
         output_low(PIN_D3);
      }
      if(count == 2){   //Led D1 sang
         output_low(PIN_D0);
         output_high(PIN_D1);
         output_low(PIN_D2);
         output_low(PIN_D3);
      }
      if(count ==3){    //Led D2 sang
         output_low(PIN_D0);
         output_low(PIN_D1);
         output_high(PIN_D2);
         output_low(PIN_D3);
      }
      if(count ==4){    //Led D3 sang
         output_low(PIN_D0);
         output_low(PIN_D1);
         output_low(PIN_D2);
         output_high(PIN_D3);
      }
   }
   
}

