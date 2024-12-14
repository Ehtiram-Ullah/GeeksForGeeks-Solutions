/*

problem - https://www.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1?utm_source=youtube&utm_medium=main_channel&utm_campaign=dsa_new


Given an array arr[] containing only 0s, 1s, and 2s. Sort the array in ascending order.

Examples:

Input: arr[] = [0, 1, 2, 0, 1, 2]
Output: [0, 0, 1, 1, 2, 2]
Explanation: 0s 1s and 2s are segregated into ascending order.
Input: arr[] = [0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1]
Output: [0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2]
Explanation: 0s 1s and 2s are segregated into ascending order.
Constraints:
1 <= arr.size() <= 106
0 <= arr[i] <= 2
*/
#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    void sort012(vector<int>& arr) {
        int zeroCnt = 0;
        int oneCnt = 0;
        int twoCnt = 0;
        for(int i=0;i<arr.size();++i)
        {
            if(arr[i] == 0){
                zeroCnt++;
                continue;
            }
            if(arr[i]==1){
                oneCnt++;
                continue;
            }
            twoCnt++;
        }

        for(int i=0;i<arr.size();++i){
            if(i<zeroCnt){
                arr[i]=0;
            }else if (i<(oneCnt+zeroCnt)){
                arr[i] = 1;
            }else{
                arr[i] = 2;
            }
        }
    }

    
};


int main(){
    vector<int> arr = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    Solution().sort012(arr);

    for(int i=0;i<arr.size();++i){
        cout<<arr[i]<<" ";
    }
}