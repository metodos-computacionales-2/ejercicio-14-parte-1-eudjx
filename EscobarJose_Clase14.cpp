#include <iostream>
#include <cmath>

double func(double t)
{
    return sin(t);
    
}


double Euler(double t, double h)
{
    return func(t)+h*func(t);
}




int main(void)
{
    for (double i=0; i<2;i+=0.1)
    {
    double res1;
     res1= Euler(i, 0.1);
     std::cout.precision(17);
    std::cout<<i<<" :"<<res1<<std::endl;
    }
    return 0;
}