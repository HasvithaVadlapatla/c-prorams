#include <stdio.h>

int main() {
    int a;
    printf("Enter the of A value \n");
    scanf("%d",&a);
    int res =(a>=3)&&(a<=13);
    printf("%d is in the range of 3-13 i.e is :%d",a,res);
}