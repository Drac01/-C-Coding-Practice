#include<iostream>
using namespace std;
int main()
{
    int array[10];
    cout << "Enter 10 numbers" << endl;
    
    for (int i = 0; i < 10; i++)
    {
        cin >> array[i];
    }
    cout << "Duplicate elements : ";
    for (int i = 0; i < 10; i++)
    {
        for(int j = i + 1; j < 10; j++)
        {
            if (array[i] == array[j])
            cout << array[i] << "\t";
        }
        cout << endl;
    }
    return 0;
}

