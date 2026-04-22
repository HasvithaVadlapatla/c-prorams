#include <stdio.h>
int main() {
    char ch;
    printf("enter a character");
    scanf("%d",&ch);
    int res=(ch>=0)&&(ch<=9);
    printf("%d is a digit i.e is:%d",ch,res);
    return 0;
}