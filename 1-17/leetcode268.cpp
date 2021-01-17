class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int result;
        int sum = 0;
        int n = nums.size();
        for(int n : nums)   
            sum = sum + n;
        result = (n * (n+1)) / 2 - sum;
        return result;
    }
};
