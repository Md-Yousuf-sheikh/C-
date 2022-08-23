#include<bits/stdc++.h>

using namespace std;

int main (){
    int ar[5]={5,8,80,2,88};
    int mn=ar[0],mx=ar[0];
    for (int i = 0; i < 5; i++)
    {
        mn= min(mn,ar[i]);
        mx= max(mx, ar[i]);
    }
    cout<<"Min ->"<<mn<<" "<<"Max ->"<<mx<<endl;
    
    // //////////////////////
    // int a=1000;
    // int b=500;
    // int c=200;
    // int d=8000;
    // int mn= min(a,min(b,min(c,d)));
    // int mx = max(a,max(b,max(c,d)));
    // cout<<"Min "<<mn<<" "<<"Max "<<mx<<endl;
    return 0;
}