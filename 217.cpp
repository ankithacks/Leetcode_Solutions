// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
// Example 
// Input: nums = [1,2,3,1]
// Output: true

// the below approach is used as a shorthand approach:-
// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         bool flag = false;
//         for(int i =0;i<nums.size()-1;i++){
//             if(nums[i] == nums[i+1]) return true;
//         }
//         return flag;
//     }
// };

// time limit brute force solution
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool flag = false;
        for(int i =0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i] == nums[j]) return true;
            }
        }
        return flag;
    }
};