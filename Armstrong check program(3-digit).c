#include <stdio.h>
int main()
{ 
int ognum , num , remainder , result ; 
printf("Enter the number : ");
scanf("%d",&ognum); 
num=ognum;
result=0;
while(num!=0) {
    remainder = num%10;
    result = result +(remainder*remainder*remainder);
    num = num/10; 
} 
if(result == ognum) 
    printf("\n%d is an armstrong number",ognum); 
else 
    printf("\n%d is not an armstrong number",ognum); 
return 0;
}
