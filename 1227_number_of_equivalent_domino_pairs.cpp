class Solution {
public:
    // using constant space
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        vector<int> vec(100);
        int res = 0;
        for (auto& d : dominoes) {
            if (d[0] > d[1]) {
                swap(d[0], d[1]);
            }
            int num = d[0] * 10 + d[1]; // by adding const value we can get the
                                        // value ex 1*10+2 = 12

            res += vec[num];
            vec[num]++; // incresing freq of num in vec
        }
        return res;
    }
};