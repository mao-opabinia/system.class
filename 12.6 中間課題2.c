#include <stdio.h>
#include <string.h>
#include <ctype.h>

void check_password_strength(char password[]) {
    int length = strlen(password);  // パスワードの長さ
    int has_upper = 0;  // 大文字フラグ
    int has_lower = 0;  // 小文字フラグ
    int i;
    
    // 各文字をチェック
    for (i=0; i<length; i++){
        if (isupper(password[i])){
            has_upper = 1;
        }
        if (islower(password[i])){
            has_lower = 1;
        }
    }
    
    // 判定
    if (length >= 8 && has_upper && has_lower) {
        printf("強いパスワードです！\n");
    } else {
        printf("弱いパスワードです。改善点:\n");
        if (length < 8) {
            printf("-パスワードは8文字以上にしてください。\n");
        }
        if (!has_upper) {
            printf("-パスワードには少なくとも1つの大文字を含めてください。\n");
        }
        if (!has_lower) {
            printf("-パスワードには少なくとも1つの小文字を含めてください。\n");
            
        }
    }
}

int main() {
    char password[100];
    
    // パスワード入力
    printf("パスワードを入力してください: ");
    scanf("%99s", password);
    
    // チェック
    check_password_strength(password);
    
    return 0;
}
