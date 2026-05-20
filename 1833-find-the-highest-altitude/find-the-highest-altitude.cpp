class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int current = 0;
        int maxA = 0;

        for (int i : gain){
            current += i;
            maxA = max(maxA, current);
        }

        return maxA;
    }
};