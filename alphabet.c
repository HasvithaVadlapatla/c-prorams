#include <stdio.h>

int main() {
    char ch;
    printf("Enter the charecter \n");
    scanf("%c",&ch);
    int res=((ch>='A')&&(ch<='Z')||(ch>='a')&&(ch<='z'));
    
    printf("%c is a charecter i.e is: %d",ch,res);

    return 0;
}