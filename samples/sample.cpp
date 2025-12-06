/*
 sample.cpp - simple C++ sample
 Build: g++ -std=c++17 sample.cpp -o sample
 Run: ./sample
*/

#include <bits/stdc++.h>
using namespace std;

int sum_vector(const vector<int>& v){
    int s=0; for(int x:v) s+=x; return s;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << "Enter numbers separated by spaces, end with EOF (Ctrl+D):\n";
    vector<int> nums;
    int x;
    while(cin >> x) nums.push_back(x);
    if(nums.empty()){
        cout << "No numbers provided. Example vector: {1,2,3}\n";
        nums = {1,2,3};
    }
    cout << "Numbers read: ";
    for(size_t i=0;i<nums.size();++i){
        cout << nums[i] << (i+1<nums.size()? " ":"\n");
    }
    cout << "Sum: " << sum_vector(nums) << "\n";
    cout << "Sorted: ";
    sort(nums.begin(), nums.end());
    for(size_t i=0;i<nums.size();++i){
        cout<<nums[i]<<(i+1<nums.size()?" ":"\n");
    }
    return 0;
}
