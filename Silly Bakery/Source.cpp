#include <iostream>
using namespace std;

int n,i,j, a, sum = 0;
int poung[5] = { 8, 6, 4, 2, 1 };

int bread(int a)
{
    sum += a * poung[j];
    return sum;
}

int main() 
{
    cin >> n;
    for (i = 0; i < n; i++) {
        for (j = 0; j < 5; j++) {
            cin >> a;
            bread(a);
        }
    }

    if (sum % 8 == 0) {
        cout << sum/8;
    }
    else {
        cout << (sum/8)+1;
    }
}