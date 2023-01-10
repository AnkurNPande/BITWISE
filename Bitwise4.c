#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;






UINT OffBit(UINT No)
{
  UINT iMask = 0XFFFFFFF7;
   UINT result = No & iMask;
  return result;
 
}
  
int main()
{
   UINT Value = 0;
   UINT  iRet =0;

   printf("Enter the number \n");
    scanf("%d",&Value);

   iRet = OffBit(Value);

   printf("Updated value is :%d",iRet); 

    return 0;
}