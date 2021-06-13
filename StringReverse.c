#include<stdio.h>

void Reverse(char str[])
{
char *start,*end;
char temp;

start=str;
end=str;

while(*end!='\0')
{
end++;
}
end--;

while(start<end)
{
temp=*start;
*start=*end;
*end=temp;
start++;
end--;
}
}

int main()
{

char Arr[10];
printf("enter a string\n");
scanf("%[^'\n']s",Arr);

Reverse(Arr);
printf("Reverse String is %s",Arr);

return 0;
}
