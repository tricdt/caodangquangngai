#include <stdio.h> // thu vien chuan
void main(void){
    printf("Hello, cao dang quang ngai");
    unsigned char x = 5;  // 0 -> 255
    do
    {
        printf("\nGia tri cua x: %d\n", x);
        x++ ;
    } while (x < 5);
    
    // while (x<5)
    // {
    //     printf("\nGia tri cua x: %d\n", x);
    //     x++ ;
    // }
    
    
    

    // unsigned char x = 0;  // 0 -> 255
    // while (x < 5)
    // {
    //     printf("\nGia tri cua x: %d\n", x);
    //     x++ ;
    // }
}
