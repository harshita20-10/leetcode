class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp;   // temporary array for non-zero elements

        // Step 1: store all non-zero elements
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                temp.push_back(nums[i]);
            }
        }

        // Step 2: put non-zero elements back into nums
        int nz = temp.size();
        for (int i = 0; i < nz; i++) {
            nums[i] = temp[i];
        }

        // Step 3: fill remaining with zeros
        for (int i = nz; i < n; i++) {
            nums[i] = 0;
        }
    }
};
