class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }

private:
    int atMost(vector<int>& nums, int k) {
        if (k < 0)
            return 0;

        int left = 0;
        int count = 0;
        int ans = 0;

        unordered_map<int, int> freq;

        for (int right = 0; right < nums.size(); right++) {

            freq[nums[right]]++;

            if (freq[nums[right]] == 1)
                count++;

            while (count > k) {
                freq[nums[left]]--;

                if (freq[nums[left]] == 0)
                    count--;

                left++;
            }

            ans += right - left + 1;
        }

        return ans;
    }
};