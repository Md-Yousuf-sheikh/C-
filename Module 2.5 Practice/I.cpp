#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(b-a == c-b){
        cout<<"YES";
    }
    if(b-a != c-b){
        cout<<"NO";
    }
    return 0;
}