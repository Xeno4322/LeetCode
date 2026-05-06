class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int tlen = t.size();
        int slen = s.size();

        for (int j = 0; j < tlen; j++){
            if (i < slen && s[i] == t[j]) i++;
        }

        return i == slen;
    }
};