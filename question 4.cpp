
// This is question number 11


class Solution {
public:
    int maxArea(vector<int>& height) { int w,h; int maxArea =0; int area;
    int lp=0;int rp = height.size()-1;
        while(lp<rp){
            w=rp-lp;
            h=min(height[rp],height[lp]); area=w*h;
            maxArea=max(maxArea,area);
            if(height[lp]>height[rp]){
                rp--;
            } else{
                lp++;
            }
        } return maxArea;
    }
};