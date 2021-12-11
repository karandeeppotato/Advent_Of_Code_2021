#include<bits/stdc++.h>
using namespace std;
int main()
{
    int horizontal = 0, depth = 0;
    string dir; 
    int mag;
    while(cin>>dir>>mag){
        if(dir == "forward"){
            horizontal += mag;
        }
        else if(dir == "down"){
            depth += mag;
        }
        else{
            depth -= mag;
        }   
    }
    cout<<horizontal * depth;
    return 0;
}