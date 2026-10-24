class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num <= 1){
            return false;
        }
        int sum = 0;
        for (int i = 1 ; i*i <= num ; i++){
            if (num % i == 0){
                sum = sum + i;
                if (i != num / i && num / i != num){
                    sum = sum + (num/i);
                }

            }

        }
        if (sum == num)
        return true;
        else
        return false;
    }
};