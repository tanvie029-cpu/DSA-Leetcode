class Solution {
public:
     long long calculateHours(vector<int>& piles, int speed){
            long long totalHours=0;

            for(int i=0; i<piles.size();i++ ){
                totalHours += (1LL * piles[i]+speed-1)/speed;
            }
            return totalHours;
        }

    int minEatingSpeed(vector<int>& piles, int h) {
        int left=1;
        int right=*max_element(piles.begin() , piles.end());
        int answer=right;

        while(left<=right){   
        int mid=left+(right-left)/2;    

        long long totalHours=calculateHours(piles,mid);

        if(totalHours<=h){
            answer=mid;
            right=mid-1;
        }
        else left=mid+1;
        }
        return answer;
    }
};