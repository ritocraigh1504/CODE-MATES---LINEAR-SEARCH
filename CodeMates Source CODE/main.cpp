#include<iostream>

using namespace std;

int main()
{
    int a[100], i, n, item, s = 0;

    cout << "\n------------ LINEAR SEARCH ------------ \n\n"; //heading
    cout << "Enter the number of elements : "; //this is where you enter the amount of elements that you want in your array
    cin >> n;

    cout << "\nEnter Elements : \n"; //this is where you enter as many elements as you chose
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    cout << "\nEnter Element you want to Search="; //this is where you search the index at which the number you want is
    cin >> item;

    for (i = 1; i <= n; i++)
    {
        if (a[i] == item)
        {
            cout << "\nElement is Found at Location : " << i;//this outputs the index of of the number you searched
            s = 1;
            break;
        }
    }

    if (s == 0)
    {
        cout << "Data is Not Found";//this is the output youll get if the value you searched is not in the array
    }
    return 0;
}
