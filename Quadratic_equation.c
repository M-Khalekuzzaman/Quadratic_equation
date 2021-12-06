#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    double x1,x2;
    printf("Enter the three numbers a,b & c are : ");
    scanf("%d%d%d",&a,&b,&c);
    int d = b*b - 4*a*c;
    if(d>0)
    {
        x1 = (-b - sqrt(d)) / (2*a);
        x2 = (-b + sqrt(d)) / (2*a);
        printf("The value of X1 is : %.2lf\n",x1);
        printf("The value of X2 is : %.2lf\n",x2);
    }
    else if(d == 0)
    {
        printf("The quadratic equation doesn't exist");
    }
    else
        printf("The quadratic equation doesn't exist");

    getch();


}
