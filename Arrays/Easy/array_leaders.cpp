
/*
problem - https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1?utm_source=youtube&utm_medium=main_channel&utm_campaign=dsa_new


You are given an array arr of positive integers. Your task is to find all the leaders in the array. An element is considered a leader if it is greater than or equal to all elements to its right. The rightmost element is always a leader.

Examples:

Input: arr = [16, 17, 4, 3, 5, 2]
Output: [17, 5, 2]
Explanation: Note that there is nothing greater on the right side of 17, 5 and, 2.
Input: arr = [10, 4, 2, 4, 1]
Output: [10, 4, 4, 1]
Explanation: Note that both of the 4s are in output, as to be a leader an equal element is also allowed on the right. side


*/
#include <bits/stdc++.h>


using namespace std;


class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> ans;
        int max = INT_MIN;
        for(int i=arr.size()-1;i>=0;i--){
            if(arr[i]>=max){
                ans.push_back(arr[i]);
                max = arr[i];
            }
        }
        stable_sort(ans.begin(),ans.end(),greater<>());
        return ans;
    }
};

int main(){
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    
    vector<int> sol = Solution().leaders(arr);

    for(int i=0;i<sol.size();++i){
        cout<<sol[i]<<' ';
    }
}