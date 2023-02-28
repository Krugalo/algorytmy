#include<iostream>
#include<vector>

double potegaReku(double x, int n)
{
    return x;
}

double potega(double x, int n)
{
    if (n%2 == 0)
    {
        x *= x; //kwadrat, pierwsze
        if (n == 2)
        {
            return x;
        }
        double temp;
        for (int i = 0; i < n / 2; i++) // reszta log_2(n)
        {
            std::cout << i << '\n';
            temp *= x;
        }
        return temp;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            x *= x;
        }
        return x;
    }
}

int main( )
{
    std::cout << potega(2, 4) << '\n';
    return 0;
}