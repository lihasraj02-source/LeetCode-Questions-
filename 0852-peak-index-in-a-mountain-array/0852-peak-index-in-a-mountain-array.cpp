class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st=1; int ed=arr.size()-2;
        while(st<=ed){
         int md=st+((ed-st)/2);
         if(arr[md-1]<arr[md]&&arr[md]>arr[md+1]){
            return md;
         }
         else if(arr[md-1]<arr[md]&&arr[md]<arr[md+1]){
            st=md+1;
         }
         else if(arr[md-1]>arr[md]&&arr[md]>arr[md+1]){
            ed=md-1;
         }


        } return -1;
    }
};