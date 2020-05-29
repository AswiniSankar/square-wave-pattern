/*

4
3
     5  6  7  8       17 18 19 20       29 30 31 32   
     4        9       16       21       28       33   
     3       10       15       22       27       34   
  1  2       11 12 13 14       23 24 25 26       35 36

*/

#include<stdio.h>
int main()
{
 int h,l,i,j,k,inc,num,x,jump;
 scanf("%d%d",&h,&l);
 num=h+1;
 jump=(num*3+2)-(num+3);
 inc=1,x=0;
 for(i=1;i<=h;i++)
 {for(j=1;j<=l;j++)
  { if(i!=h)
      printf("   ");
    else
       printf("%3d",num-1);
    for(k=1;k<=4;k++)
    {if(i==1||k==1||k==4)
      {printf("%3d",num);
       num=num+inc;
      }
     else
      printf("   ");
    }
    num=num-inc;
   if(i!=h)
     printf("   ");
   else
      printf("%3d",num+1);
   num=num+jump;
  }
 jump=jump-2;
 inc=5+x;
 x=x+2;
 num=h-i+1;
  printf("\n");
 }
 printf("\n");
 return 0;
}

