#include <iostream>
using namespace std;

void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= i; j--)
        {
            cout << "* ";
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
    * * * * 
    * * *
    * *
    *
*/