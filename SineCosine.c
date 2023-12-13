#include<stdio.h>
#include<math.h>
#define PI 3.14159265

void GetSinCos(int degree, double *dSin, double *dCos)
{
    double radian = degree * PI / 180;//convert it to radian
    *dSin = sin(radian);//also need to add "*" before the variable here, remember!!! this is c, not c++
    *dCos = cos(radian);
}

int main()
{
    double dSin;
    double dCos;
    int degree;
    
    //read in user input to variable degree
    scanf("%d",&degree);
    //call the GetSinCos() function
    GetSinCos(degree,&dSin,&dCos);
    
    printf("The sin is %g \n",dSin);
    printf("The cos is %g \n",dCos);
    return 0;
}
