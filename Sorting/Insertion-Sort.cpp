#include <bits/stdc++.h>
using namespace std;
int Insertion_Sort(int arr[], int n)
{
    for (int i = 0; i <= n-1; i++)
    {
        int j=i;
        while(j>0 && arr[j-1]>arr[j])
        {
            int temp = arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
            cout<<"Runs\n";
        }
    }
    
}
int main()
{
    int n;
    cout << "Array Size : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter Array Numbers : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Insertion_Sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}