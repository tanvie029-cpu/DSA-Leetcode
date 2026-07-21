class Solution {
public:
    bool isPerfectSquare(int num) {
         if(num==0 || num==1) return true;

         int left=2;
         int right=num;

         while(left<=right){
            int mid=left+(right-left)/2;
            long long square=1LL*mid*mid;

            if(square==num) return true;
            else if(square>num) right=mid-1;
            else left=mid+1;
         }
         return false;
    }
};