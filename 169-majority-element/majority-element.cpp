class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int candidate = 0;
        int count = 0;

        for(int num : nums) {

            if(count == 0) {
                candidate = num;
            }

            if(num == candidate) {
                count++;
            }
            else {
                count--;
            }
        }

        return candidate;
    }
};
        
    /* map<int,int>mpp;
     for(int i=0;i<nums.size();i++){
        mpp[nums[i]]++;
     }
     for(auto it:mpp){
        if(it.second>nums.size()/2){
            return it.first;
        }
     }
     return -1;
    }
    
};
*/
