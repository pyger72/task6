#include <iostream>
using namespace std;

int main()
{
    int n, a, b, z, x, sum1, sum2;
    cin >> n;
    a = n / 1000;
    b = n % 1000;
    sum1 = b % 10 + (b / 10)%10 + b / 100;
    sum2 = a % 10 + (a / 10) % 10 + a / 100;
    if (sum1 == sum2) cout << "YES";
    else cout << "NO";
}
