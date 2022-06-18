#include <stdio.h>

int ASCII(char ch)
{
    return (int)ch;
}
int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    int a = ASCII(ch);
    printf("ASCII value of %c = %d",ch,a);
    return 0;
}