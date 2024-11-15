/*write a program which accepts number from user and return the multiplication of all digits
input: 2395
output:270
input:1018
output:8
input:9440
output:144
input:922432
output:864
*/

#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0;
    int iCnt = 1;
    int iMult = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo > 0)
    {
        iDigit = iNo % 10;
       // printf("%d",iDigit);
        iMult = iDigit * iMult;
      
        iNo = iNo / 10;
    }
    return iMult;
}
int main()
{
   int iValue = 0;
    int iRet = 0;
   printf("Enter a  number: ");
   scanf("%d",&iValue);

   iRet = CountEven(iValue);

   printf("multiplication  of digits is %d",iRet);
    return 0;
}