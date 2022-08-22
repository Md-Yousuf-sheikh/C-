#include<bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin>>n;

    int price = n * 800;
    int desc = n/15;
    int total = price - (desc*200);
    cout<<total;

return 0;
}