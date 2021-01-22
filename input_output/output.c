//This program has the output methods of c

//printf functions

/*

A width or precision may be specified as *, in which case the value is computed by converting the next argument (which must be an int). For example,
to print at most max characters from a string s,
printf( "%.*s", max, s);

*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int max=10;
    char word[]="hello, world";
    printf( ":%.*s:", max, word); //hello, wor ->prints only 10 charac becoz max is 10
    printf("\n");

    printf(":%s:",word); //hello, world
    printf("\n");

    printf(":%10s:",word);//hello world ->it asks for
    printf("\n");

    printf(":%-10s:",word);
    printf("\n");

    printf(":%-15.10s:",word); //reserves 15 space for the string since '-' sign is used prints 10(precesion is given 10) characters starting form left
    printf("\n");

    printf(":%15.10s:",word); //reserves 15 char space for the string since no sign is used ...prints 10(precesion is given 10) characters starting form right
    printf("\n");


    return 0;
}


/*
general note:
printf(s);    1* FAILS if s contains % *1 because it parses it as a string
printf("%s", s);     1* SAFE *1
*/