#include<stdio.h>
#include<conio.h>

int main()
{
    int *pt1,*pt2;
    int x[2]={4,10};
    pt1=&x[0];
    pt2=&x[0];
    *pt1++;
    (*pt2)++;
    printf("postfix inc without paranthesis: %d \n",*pt1); //doesnt recogonize the dereferencing operator so points next  index of an array
    printf("postfix inc with paranthesis: %d",*pt2); //recognizes the dereferencing operator so increments the value in the pointed array
    //because unary operators like * and ++ associate right to left.
    return 0;
}