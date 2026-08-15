 
 
//This is question number 50. 
 
 
 double myPow(double x, int n) {
        long long binform=n; double ans=1;

        if(binform<0){
         binform=-binform;
         x=1/x;
        }
        while(binform>0){
       if(binform%2==1){
        ans=ans*x;}
        x=x*x;
        binform=binform/2;
       } return ans;
        }