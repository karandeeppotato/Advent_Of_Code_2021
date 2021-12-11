#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    int ctr = 0;
    cin>>m;
    int prev_ele = m;
    while(cin>>m){
        ctr += m > prev_ele ? 1 : 0;   
        prev_ele = m; 
    }
    cout<<ctr;
    return 0;
}