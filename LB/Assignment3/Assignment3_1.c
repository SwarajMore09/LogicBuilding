#include<stdio.h>

void PrintEven(int iNo)
{
   int i = 0;
   for (i = 1; i <= iNo; i++)
   {
        if ((i % 2) == 0)
        {
            printf("%d \t",i);
        }
   }
   
}

int main()
{
    int iValue = 0;
    printf("Enter a Number : \n");
    scanf("%d",&iValue);

    PrintEven(iValue);
    
    return 0;
}