/*Accept N numbers from user and accept one another number as No, and check whether No is present or not
INPUT: N: 6
       NO: 66
       Elemens: 85 66 3 66 93 88
OUTPUT: TRUE
*/
#include<stdio.h>
#include<stdlib.h>
//#include<stdbool.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
 
BOOL Check(int Arr[], int iNo,int iSize)
{
  int iCnt;
  for(iCnt = 1; iCnt < iNo; iCnt++)
  {
    if(Arr[iCnt] == iNo)
    {
        break;
    }
   }  
   if(iCnt == iSize)
   {
     return FALSE;
   } 
   else
   {
     return TRUE;
   }
     
   
}

int main()
{
    int iSize = 0, iRet = 0,iCnt = 0,iValue = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter number of elements :");
    scanf("%d",&iSize);

    printf("Enter the number that you want to search..");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }   

    printf("Enter elements in the array");
    for(iCnt = 1; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p,iSize,iValue);
    if(bRet == TRUE)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is not present");
    }
    free(p);

    return 0;
}


