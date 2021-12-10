#include <iostream>
using namespace std;

void pattern(int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= i; j--)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}

int main()
{
    pattern(4);
}

/*
    Output:
    3 
    3 2
    3 2 1
    3 2 1 0
*/