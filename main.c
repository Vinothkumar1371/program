#include <stdio.h>
#include <string.h>
 int i,j,n,k,length,ascii,ascii1,temp;
 char Value[100];
char *Once[100]=
{"","One","Two","Three","Four ","Five","Six","Seven",
"Eight","Nine"};

char *Teen[100]=
{"Ten","Eleven","Twelve","Thirteen",
"Fourteen","Fifteen","Sixteen","Seventeen",
"Eighteen","Nineteen"};

char *Tens[100]=
{"","","Twenty","Thirty","Forty","Fifty","Sixty",
"Seventy","Eighty","Ninety"};
int main()
{
 printf("Enter the N value \n");
 scanf("%d",&n);
 printf("%d\n",n);
 sprintf(Value, "%d", n);
 length=strlen(Value)-1;
 while(length>=0)
 {
 ascii=("%d",Value[k]);
 switch(length)
 {
 case 0:
 {
  j=ascii-48;
  if(j==0)
  {
  length--;
  }
  printf("\b%s ",Once[j]);
  length--;
  break;
 }
 case 1:
 {
  j=ascii-48;
  if(j==0)
  {
  length--;
  }
  else if(j==1)
  {
  ascii1=("%d",Value[k+1]);
  temp=ascii1-48;
  printf("%s ",Teen[temp]);
  length=-1;
  }
  else
             {
  printf("%s ",Tens[j]);
  length--;
  }
  break;
 }
 case 2:
 {
  j=ascii-48;
  if(j==0)
  {
  length--;
  }
  else
             {
  printf("%s Hundred ",Once[j]);
  length--;
  }
  break;
 }
 case 3:
 {
  j=ascii-48;
  if(j==0)
  {
  length--;
  }
  printf("%s Thousand ",Once[j]);
  length--;
  break;
 }
 defalut:
 {
 printf("Incorrect value");
 }
 }
 k++;
 }
	
       return 0;
       clrscr();
       getch();
}