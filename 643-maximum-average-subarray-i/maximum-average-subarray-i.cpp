class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int windowSum = 0;

        for (int i = 0; i < k; i++){
            windowSum += nums[i];
        }

        int maxSum = windowSum;
        int len = nums.size();
        for(int i = k; i < len; i++){
            windowSum += nums[i] - nums[i-k];
            maxSum = max(maxSum, windowSum);
        }

        return (double)maxSum/k;
    }
};