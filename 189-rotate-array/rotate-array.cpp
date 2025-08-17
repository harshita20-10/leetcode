class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;   // handle k > n
        
        // store last k elements
        vector<int> temp(k);
        for (int i = 0; i < k; i++) {
            temp[i] = nums[n - k + i];
        }

        // shift remaining elements to the right
        for (int i = n - k - 1; i >= 0; i--) {
            nums[i + k] = nums[i];
        }

        // put temp elements at beginning
        for (int i = 0; i < k; i++) {
            nums[i] = temp[i];
        }
    }
};
