#include<stdio.h>

int f(int n);
int g(int n);

int f(int n)
{
    if(n<=0)
        return 1;

    else 
    {
     
        int final=n*g(n-1);
        printf("We are in f(n) and value of x is %d\n",final);
        return final;
    }
}

int g(int n)
{
    if(n<=0)
        return 0;

    else 
    {
        int final= n-f(n-2);
        printf("We are in g(n) and value of x is %d\n",final);
        return final;

    }
}



int main() {

    int input;
    printf("Enter the value of n");
    scanf("%d",&input);

    int answer=f(input);
    printf("The final return value of f(%d) is %d",input,answer);

    return 0;
}