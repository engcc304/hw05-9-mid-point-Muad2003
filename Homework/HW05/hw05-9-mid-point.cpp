/*
    ผู้ใช้กรอกพิกัดจำนวน 2 จุดลงในโปรแกรม ให้คุณเขียนโปรแกรมคำนวณหาจุดกึ่งกลางของ 2 จุดนี้

    Test case:
        Input A Point :
            2 2
        Input B Point :
            4 4

    Output:
        Mid Point of A and B is ( 3.0, 3.0 )

    Test case:
        Input A Point :
            -3 9
        Input B Point :
            4 -19

    Output:
        Mid Point of A and B is ( 0.5, -5.0 )

    Test case:
        Input A Point :
            6 -8
        Input B Point :
            3 3

    Output:
        Mid Point of A and B is ( 4.5, -2.5 )
*/
#include<stdio.h>

int main() {
    float a1 , a2 , b1 , b2 ;
    printf( "Input A Point :\n" ) ;
    scanf( "%f %f", &a1 , &a2 ) ;

    printf( "Input B Point :\n" ) ;
    scanf( "%f %f", &b1 , &b2 ) ;

    // ทำให้เป็นค่า mid โดย ใช้ ค่า1 + ค่า 2 หาร 2
    float ab1 = ( a1 + b1 ) / 2 ;
    float ab2 = ( a2 + b2 ) / 2 ;

    printf( "Mid Point of A and B is ( %.1f, %.1f )", ab1 , ab2 ) ;
    return 0 ;
}
