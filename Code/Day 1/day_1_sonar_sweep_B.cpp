#include<bits/stdc++.h>
using namespace std;
int main()
{
    int f, s, t, m, ctr=0;
    cin>>f>>s>>t;
    int sum;
    sum = f+s+t;
    int prev_sum = sum;
    while(cin >> m){
        sum += m;
        sum -= f;
        ctr += (sum > prev_sum) ? 1 : 0;
        prev_sum = sum;
        f = s;
        s = t;
        t = m;
    }
    cout<<ctr;
    return 0;
}