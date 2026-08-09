#include <iostream>
#include <vector>
//leetCode question number 169
using namespace std;
int main(){ vector<int>nums={1,2,3,3,4,5,5,5,5};
  int freq=0; int ans=0;
        for(int i=0;i<nums.size();i++){
        if(freq==0){
            ans=nums[i];
        }
        if(ans==nums[i]){
            freq++;
        } else{
            freq--;
        }

        } cout<<ans;
    
return 0;
}
