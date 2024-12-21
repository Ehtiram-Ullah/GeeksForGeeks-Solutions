/*

problem - https://www.geeksforgeeks.org/problems/count-element-occurences/1?utm_source=youtube&utm_medium=main_channel&utm_campaign=dsa_new

Given an array arr and an element k. The task is to find the count of elements in the array that appear more than n/k times and n is length of arr.

Examples :

Input: arr = [3, 1, 2, 2, 1, 2, 3, 3], k = 4
Output: 2
Explanation: In the given array, 3 and 2 are the only elements that appears more than n/k times.


*/



#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    // Function to find all elements in array that appear more than n/k times.
    int countOccurence(vector<int>& arr, int k) {
        map<int,int> mp;
        int target = arr.size()/k;
        int ans = 0;

        for(int i=0;i<arr.size();++i){
            mp[arr[i]]++;
        }
        for(auto d : mp){
            if(d.second>target){
                ans++;
            }
        }
        return ans;
    }
};



int main(){
    Solution sol = Solution();
    vector<int> v = {2, 3, 3, 2};
    cout<<sol.countOccurence(v,3)<<endl;

}