//Initial try, time exceeded due to complexity
class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        vector<long long> sum(nums.size(), 0);
        for(int i=0;i<nums.size();i++){
            long long summ=0;
            for(int j=0;j<nums.size();j++){
                if (nums[i]==nums[j] && i!=j){
                    summ+= abs(i-j);
                }
            }
            sum[i] = summ;
        }
        return sum;
    }
};
//
