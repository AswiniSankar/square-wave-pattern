/*

4
3
 ****  ****  **** 
 *  *  *  *  *  * 
 *  *  *  *  *  * 
**  ****  ****  **

*/

#include<stdio.h>
int main()
{
 int h,t,m,l,i,j,k;
 scanf("%d%d",&h,&l);
 //k=(((h*2)-1)*l)-l+h;
 //printf("%d\n",k);
 for(i=1;i<=h;i++)
 {for(j=1;j<=l;j++)
  { if(i!=h)
      printf(" ");
    else
       printf("*");
    for(k=1;k<=4;k++)
    {if(i==1||k==1||k==4)
      printf("*");
     else
      printf(" ");
    }
   if(i!=h)
     printf(" ");
   else
      printf("*");
  }
  printf("\n");
 }
 printf("\n");
 return 0;
}

