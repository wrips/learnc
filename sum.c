#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a , b;
    printf("Enter the values to be inputed :\n");
    printf("Enter the value of a\n");
    scanf("%d" , &a );
     printf("Enter the value of b\n");
    scanf("%d" , &b );
    int sum = a + b;
    printf("The answer will be : %d\n" , sum);
    return 0;
}
