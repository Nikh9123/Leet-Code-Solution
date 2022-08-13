class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int m = nums1.size();
        int n = nums2.size();
        double ans;
        vector<int> nums3;
        for(int i = 0; i < m; i++){
            nums3.push_back(nums1[i]);
        }
        for(int i = 0; i < n; i++){
            nums3.push_back(nums2[i]);
        }
        sort(nums3.begin(), nums3.end());
        if((m+n)%2 == 0)
            ans = (nums3[(m+n)/2] + nums3[(m+n)/2-1]) / 2.0;
        else
            ans = nums3[(m+n-1)/2];
        return ans;
    }
};