#include<iostream>
#include<vector>

double oblicz(std::vector<double> a, double x)
{
    //hoerner
    //a[i] = a_i przy x**i
    //a0 + x(a1 + x(.. (a_n-2 + x(a_n-1 + xa_n))..))
    //bn = an
    //bn-1 = an-1 + bn*x
    int n = a.size( ) - 1;
    double b = a[n];
    for (int i = n-1; i >= 0; i--)
    {
        b = a[i] + b * x;
    }
    return b;
}

int main( )
{
    std::cout << oblicz({ 4,5,3,0,0,18 }, 10) << '\n';
    return 0;
}