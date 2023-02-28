/*
double f(double), f(0) > 0 > f(1) -> różne znaki na końcach przedziału [0,1]

double bis(double f(), double a, double b) -> funkcja i przedzial szukania, a < b
{
    int check = 0;
    double m = 0;
    while check == 0:
    {
        m = (a + b)/2
        if f(m) == a or f(m) == b:
        {
            check = 1;
        }
        else:
        {
            if f(a) * f(m) < 0:
            {
                b = m;
            }
            else:
            {
                a = m;
            }
        }
    }
    return m;
}



*/