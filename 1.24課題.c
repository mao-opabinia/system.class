#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // 乱数の種を初期化
    srand((unsigned int)time(NULL));
    
    //ステータスの変数
    int intelligence = 0, stamina = 0, charisma = 0;
    int remaining = 20;
    
    //ランダムにステータスを割り振る
    intelligence = rand() % (remaining + 1);
    remaining -= intelligence;
    
    stamina = rand() % (remaining + 1);
    remaining -= stamina;
    
    charisma = remaining;
    
    // クラス判定
    char *character_class;
    if (intelligence >= stamina && intelligence >= charisma)
    {
        character_class = "Mage";
    }
    else if (stamina >= intelligence && stamina >= charisma)
    {
        character_class = "Knight";
    }
    else
    {
        character_class = "Thief";
    }
    
    // 結果を表示
    printf("Class: %s\n", character_class);
    printf("Stats:\n");
    printf("  Intelligence: %d\n", intelligence);
    printf("  Stamina: %d\n", stamina);
    printf("  Charisma: %d\n", charisma);
    
    return 0;
}