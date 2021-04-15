/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
char input[10];
char output[10];
int i,j,l=0;

printf("Enter the input \n");
scanf("%s",&input);
printf("\n%s",input);
int len=strlen(input)-1;
printf("\n%d",len);
 int k;
 k=(len/2);
printf("\n");
for(i=1;i<=strlen(input);i++)
{
 printf("\n");  
   k=(len/2);
    for(j=strlen(input)-1;j>=0;j--)
    {
     if(j<i)
        {
           
       printf("%c",input[k]);
        if(k<len)
        {
        k++;
        }
        else
        {
          k=len-k;
        }
        }
        else
        {
        printf(" ");
        }
        //printf("%d%d",i,j);
    }

}

  
    return 0;
}
