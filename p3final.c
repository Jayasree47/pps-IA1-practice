#include<stdio.h>
int input()
{
  int n;
  printf(" enter the n value\n");
  scanf("%d",&n);
  return n;
}
int add (int n)
{
  int sum,i;
  sum=0;
  for(i=1;i<=n;i++)
{
sum=sum+i;
}
return sum;
}
int output(int sum)
{
  printf ("sun of numbers is %d",sum);
}
int main()
{
  int n,sum;
  n=input();
  sum=add(n);
  output(sum);
  return 0;
}