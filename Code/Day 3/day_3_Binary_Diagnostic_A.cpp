#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> bin_arr; 
    vector<string> gamma, epsilon;
    string bin_num;
    int one_cnt = 0, zero_cnt = 0;
    while(cin>>bin_num){
        if(bin_num == "exit"){
            break;
        }
        bin_arr.push_back(bin_num);
    } 
    int len = bin_arr[0].length();
    for(int i=0 ; i<len ; i++){
        for(auto it : bin_arr){
            if(it[i] == '1'){
                one_cnt++;
            }
            else if(it[i] == '0'){
                zero_cnt++;
            }
        }
        if(one_cnt > zero_cnt){
            gamma.push_back("1");
            epsilon.push_back("0");
        }
        else{
            gamma.push_back("0");
            epsilon.push_back("1");
        }
        zero_cnt = 0;
        one_cnt = 0;
    }
    string gamma_str = "", epsilon_str = "";
    for(auto it1 : gamma){
        gamma_str.append(it1);
    }
    for(auto it2 : epsilon){
        epsilon_str.append(it2);
    }
    int gamma_int = stoi(gamma_str, 0, 2);
    int epsilon_int = stoi(epsilon_str, 0, 2);
    cout<<endl<<"Ans = "<<gamma_int * epsilon_int;
    return 0;
}