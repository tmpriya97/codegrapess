#include<stdio.h>
int main(void)
{
long int number;
scanf("%ld",&number);
if((number>=1)&&(number!='\0'))
printf("positive number %ld",number);
else if(number==0)
printf("number is zero%ld",number);
else
printf("negative number %ld",number);
return 0;
}
