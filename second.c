#include<stdio.h>
int main()
{
  int i,j,k,l,m;
  char ch1='E';
  for(i=1;i<=5;i++)
  {
    char ch='A';
    for(j=5;j>=i;j--)
    {
      printf("%c",ch);
      if(ch=='E')
      printf("\b");
      ch++;
    }
    for(l=2;l<=i;l++)
    {
      printf(" ");
      if(l>2)
      printf(" ");
    }
    char ch2=ch1;
    for(m=6-i;m>=1;m--)
    {
      printf("%c",ch2);
      ch2--;
    }
    printf("\n");
    ch1--;
  }
  printf("\n");
}
