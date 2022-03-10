#include <iostream>
using namespace std;



int fib(int n) {
    int fib1 = 0;
    int fib2 = 1;
    for (int i = 3; i <= n; ++i) {
        int fibSum = fib1 + fib2;
        cout << fib1 << endl;
        fib1 = fib2;
        fib2 = fibSum;
    }
    cout << fib1 << endl;
    return fib2;
}

int main()
{
    cout << "Hello world!" << endl;
    cout << fib(10);
}

