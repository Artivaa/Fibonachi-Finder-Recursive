#include <iostream>
#include <locale>

using namespace std;

int fibonacci(int n) 
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() 
{
    setlocale(LC_ALL, "Rus");
    int n = 9;
    cout << "Последовательность Фибоначчи до " << n << " числа:\n";
    for (int i = 0; i < n; i++) 
    {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    return 0;
}
