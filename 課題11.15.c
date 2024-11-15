#include <stdio.h>

int main(void)
{
    int Souta,Yuto,Takuto;
    
    Souta=170;   //宗太の身長
    Yuto=175;    //悠斗の身長
    Takuto=180;  //拓斗の身長
    
    //変数と定数の比較
    if (Souta == 170)
        printf("宗太の身長は170cmです\n");
    if (Yuto != 170)
        printf("悠斗は170cmではありません\n");
    if (Yuto >= 170)
        printf("悠斗は170cm以上です\n");
    if (Souta < 180)
        printf("宗太は180cm未満です\n");
        
    //変数と変数の比較
    if (Souta < Takuto)
        printf("拓斗は宗太より高身長です\n");
    if (Yuto < Takuto)
        printf("悠斗は拓斗より低身長です\n");
}