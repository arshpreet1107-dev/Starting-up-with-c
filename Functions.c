#include <stdio.h>
int add(int,int);//function declaration
int mp(int,int);
int div(int,int);
int main(){
    int a;
    printf("Enter first Number: ");
    scanf("%d",&a);
    int b;
    printf("Enter second number: ");
    scanf("%d",&b);
    //addition
    int c=add(a,b);
    printf("Addition = %d",c);
    //multiplication
    int d=mp(a,b);
    printf("\nMultiplication = %d",d);
    //division
    int e =div(a,b);
    printf("\nDivision = %d",e);
    return 0;
}
int add(int x, int y) {
    int temp = x+y;
    return temp ;
}
int mp(int x, int y){
    int temp=x*y;
    return temp;
}
int div(int x, int y){
    if (x!=0){
    int temp = x/y;
    return temp;
    }
    else 
    printf("Not defined");
    
}
