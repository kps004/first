/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<math.h>

int main()
{
     int a[100000],l,i,n,min;
  
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=1;i<10;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("%d",min);
    return 0;
}
