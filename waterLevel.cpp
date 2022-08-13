class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int maxh = 0;
        while(left < right)
        {
            int righth = height[right];
            int lefth = height[left];
            int minh = min(lefth , righth);
            maxh = max(maxh , (minh * (right - left)));
            if(lefth < righth)
            {
                left++ ;
            }
            else {
                right-- ;
            }
           
        }
         return maxh ;
        
    }
};