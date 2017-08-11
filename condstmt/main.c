#include <stdio.h>
#include <stdlib.h>
/*Application for marriage confirmation age*/
int main()
{
    int age;
    printf("enter the age\n");
    scanf("%d",&age);
    printf("the age is %d\n",age);
    if(age>18){
        printf("ur an adult\n you are eligible for marriage\n");

        if(age<30){
            printf("age is greater than 18 and less than 30\n");
        }
        else{
            printf("hurry up your age crossing 30\n");
        }
    }
        else if(age==18){
                printf("age is equal to 18\n");
        }
        else{
            printf("you are a child\n");
            printf("come after %d years",18-age);
        }

}
