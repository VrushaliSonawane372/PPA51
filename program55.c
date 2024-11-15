/*write a program which accepts number from user and return the difference between summation of even digits and summation of odd digits
input:2395
output:   (2)-(3+5+9) = -15
input:1018
output:(8)-(2) = 6
INCOMPLETEE............
*/

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    int iEven = 0;
    int iOdd = 0;
    int Diff = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo > 0)
    {
        iDigit = iNo % 10;
       if(iDigit % 2 == 0)
       {
          iEven = iCnt++;
       }
       if(iDigit != 0)
       {
        iOdd = iCnt++;
       }
      
        iNo = iNo / 10;
        Diff = (iEven) - (iOdd);
    }
    return Diff;
}
int main()
{
   int iValue = 0;
    int iRet = 0;
   printf("Enter a  number: ");
   scanf("%d",&iValue);

   iRet = CountDiff(iValue);

   printf(" %d",iRet);
    return 0;
}