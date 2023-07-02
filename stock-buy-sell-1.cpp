#include <iostream>

using namespace std;

int calculateMaxProfit(int a[], int n)
{
    int buy = a[0];
    int sell = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] < buy)
        {
            buy = a[i];
            sell = a[i];
        }
        else if (a[i] > sell)
        {
            sell = a[i];
        }
    }
    return sell - buy;
}

int main()
{
    int N;
    cout << "Enter the size of the array:";
    cin >> N;

    int a[N];
    cout << "Enter all the elements:";
    for (int i = 0; i < N; i++)
    {
        cout << "Enter :" << (i + 1) << "Elements";
        cin >> a[i];
    }

    cout << "MAx sum is" << calculateMaxProfit(a, N);

    return 0;
}