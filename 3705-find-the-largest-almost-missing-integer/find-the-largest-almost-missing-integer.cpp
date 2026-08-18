class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int> count;//konsa element kitni baar aya h
     
        int n = nums.size();
        for(int i = 0;i<= n-k ; i++){ // size k ke subarrays bnata h
            unordered_set<int>s;
            for(int j = i ; j < i+ k ; j++){
                s.insert(nums[j]);//set ke ander values ari hia jisse duplicates nhi ayenge 
            }
                for(int x : s){
                    count[x]++;
                }

            }
            int ans = -1;
            for(auto it : count){
                if(it.second == 1){
                    ans= max(ans,it.first);
                }
            }
            return ans;
        
        
    }
};