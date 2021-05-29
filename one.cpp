#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {5, 7, -3, 2, 9, 6, 16, 22, 21, 29, -14, 10, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    int res = arr[0];
    int ans = arr[0];
    int start = 0, end = 0, s = 0;
    int finalstart = 0, finalend = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < res + arr[i])
        {
            res = res + arr[i];
            start = s;
            end = i;
        }
        else
        {
            res = arr[i];
            start = i;
            end = i;
            s=i;
        }
        if (ans <= res)
        {
            ans = res;
            finalstart = start;
            finalend = end;
        }
        else
        {
            ans = ans;
        }
    }

    cout <<"Longest contiguous subarray sum is: "<< ans << "\n";
    cout << "Starting point is: "<<finalstart << " and  " <<"final point is: "<< finalend << endl;
}
