#include<bits/stdc++.h>
using namespace std;
int main()
{
    int horizontal = 0, depth = 0, aim = 0;
    string dir; 
    int mag;
    while(cin>>dir>>mag){
        if(dir == "forward"){
            horizontal += mag;
            depth += aim * mag;
        }
        else if(dir == "down"){
            aim += mag;
        }
        else{
            aim -= mag;
        }   
    }
    cout<<horizontal * depth;
    return 0;
}