class Solution {
public:
    int missingNumber(vector<int>& nums) {
        map<int,int> mp; 
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        int ans;
        for(int i=0; i<=nums.size(); i++){
            if(mp.find(i)==mp.end()){
                ans = i;
                break;
            }
        }
        return ans;
    }
};
