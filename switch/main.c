#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks;
    printf("Enter the marks");
    scanf("%d",&marks);
    switch(marks)
    {
    case 90:
        printf("excellent");
        break;
    case 80:
        printf("very good");
        break;
    case 70:
        printf("good");
        break;
    case 60:
        printf("ok");
        break;
    default:
        printf("grade not found");
        break;

    }


}
