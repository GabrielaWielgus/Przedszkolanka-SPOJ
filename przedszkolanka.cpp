#include <iostream>

using namespace std;
int nwd(int m, int n) 
{
    if (n != 0)
        return nwd(n, m % n);
    else
        return m;
}
int nww(int m, int n)
{
    return m * n / nwd(m, n);
}
int main()
{
    int n,a,b;
    cin >> n;
    if (n < 1 || n>20) return 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a < 10 || b < 10 || a> 30 || b>30) return 0;
        cout << nww(a, b) << endl;
    }
    return 0;
}

