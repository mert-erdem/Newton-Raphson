#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

#define eps 0.000000000000000000001

double mutlak(double x)
{
       if(x<0)
              return -x;
       else 
              return x;
}

double g(double x)
{
       return  sin(x);      
}

double gt(double x)
{
       return cos(x);
}

double newton(double x)
{
       return x-g(x)/gt(x);
}


int main ()
{
    int its =0;
    double xnow,xprev;
    xnow=2.875;
    do
    {
       xprev=xnow;           
       xnow=newton(xprev); 
       printf("%4.15lf %4.15lf %4.15lf\n",xprev,xnow,mutlak(xnow-xprev));
       its++;                
    }while(mutlak(xnow-xprev)>eps);
    
    printf("\n\nsonuc = %3.9lf\t its=%d",xnow,its);
    
    
    getch();
    return 0;
}
