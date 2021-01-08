#include <stdio.h>
#include <stdlib.h>
char stack[50];
int top=-1;
int main()
{
    char string[30];
    int i,length;
    printf("Enter string :  ");
    scanf("%s",string);
    length = strlen(string);
    for(i=0;i<length;i++)
    {
        push(string[i]);
    }
    printf("Reversed string is :  ");
    for(i=0;i<length;i++)
    {
        pop();
    }
    return 0;
}
void push(char c)
{
    top+=1;
    stack[top]=c;
}
void pop()
{
    char c;
    c=stack[top];
    top-=1;
    printf("%c",c);
}
