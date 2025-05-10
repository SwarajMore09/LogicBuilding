#include<stdio.h>

void Display(int iNo)
{
    int i = 0;
    while(i < iNo)
    {
        printf("*");
        i++;
    }
}

int main()
{
    int iValue = 0 ;

    printf("Enter a Number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}
