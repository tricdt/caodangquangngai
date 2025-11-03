#include <stdio.h> // thu vien chuan
void main(void){
    printf("Hello, cao dang quang ngai");
    for(unsigned char x = 0; x < 5; x = x+2){
        printf("\nGia tri cua x: %d\n", x);
    }


    // unsigned char x = 0;  // 0 -> 255
    // while (x < 5)
    // {
    //     printf("\nGia tri cua x: %d\n", x);
    //     x++ ;
    // }
}
