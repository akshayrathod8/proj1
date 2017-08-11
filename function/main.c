#include <stdio.h>
#include <stdlib.h>

void sum(int a,int b)
{
    int res=a+b;
    printf("result = %d\n",res);
}
int main()
{
   int x,y;
   printf("enter x");
   scanf("%d",&x);
   printf("enter y");
   scanf("%d",&y);
   sum(x,y);

}
