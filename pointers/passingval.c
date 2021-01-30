#include <stdio.h>

int main()
{
int a[]={1,2,3,4,5,6,7,8,9,10};
int *pt1,*pt2;

pt1=&a[2];
pt2=a+2;
printf("passing value regular %d \n",*pt1);
printf("passing value unconventional %d \n",*pt2);
printf("printing by direct ref of index %d",a[2]);
return 0;
}