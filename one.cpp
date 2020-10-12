#include<iostream>
using namespace std;
int main()
 {
    int p;
    cin>>p;
    while(p--)
 {
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     int res=arr[0];
     int maximum=arr[0];
     for(int i=1;i<n;i++)
     {
         maximum=max(maximum+arr[i],arr[i]);
         res=max(res,maximum);
     }
     
     cout<<res<<endl;
 }
 }
