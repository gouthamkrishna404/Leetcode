// O(n2) using two for loops
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i=0;i<nums.size();i++){
            for (int j=i+1;j<nums.size();j++){
                if (nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};
// O(n) using hashmap - best solution
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> seen;
        for (int i=0;i<nums.size();i++){
            int current = nums[i];
            int complement = target - current;
            if (seen.find(complement) != seen.end()){
                return {seen[complement],i};
            }
            seen[current] = i;
        }
        return {};
    }
};
