class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int write = 0;
        int len = nums.size();

        for (int i = 0; i < len; i++){
            if (nums[i] != 0){
                nums[write++] = nums[i];
            }
        }

        while (write < len){
            nums[write++] = 0;
        }
    }
};