#include<stdio.h>
#include<conio.h>

int main()
{
    char text[]="hellothere";
    int i=4 ,j=4 ;
    printf("prefix=%d postfix=%d for var having value 4\n",++i,j++);
    printf("prefix=%d postfix=%d after post increment\n",i,j);
    printf("prefix=%c postfix=%c indexing a string text",text[++i],text[j++]);
    return 0;
}


/*
so where does this convention have advantage on
well its commonly useful when ur passing values by incrementation
look how it works on printing character in the string
*/