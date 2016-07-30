#include<stdio.h>
#include<string.h>
int main()
{
int i,r=0,c=0;
char a[40];
char b[40][40];
gets(a);
while(a[i]!='\0')
{
b[r][c]=a[i];
i++;
c++;
if(a[i]==32)
{
b[r][c]='\0';
r++;
c=0;
}
}
for(i=r;i>=0;i--)
{
printf("%s ",b[i]);
}
return 0;
}
