#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,d;
    float r1,r2;
    printf("enter a,b,c values");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-(4*a*c);
    if(d>0)
    {
        printf ("Roots are real and distinct");
        r1=-b+sqrt(d)/2*a;
        r2=-b-sqrt(d)/2*a;
        {
            printf("r1=%f,r2=%f",r1,r2);
        }
    }
else if (d>0)
{
    printf("Roots are imaginary");
}
else
{
    printf("Roots are real and eqal");
}
r1=r2=-b/2*a;
{
    printf("r1=%f,r2=%f",r1,r2);
}
}




        
    
    
