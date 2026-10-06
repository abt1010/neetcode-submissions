class Solution {
public:
    bool isPalindrome(string s) {        
        string a = "";
        for(char  c : s) {
            if(isalnum(c)) {
                a += tolower(c);
            }
        }
        return a == string(a.rbegin(),a.rend());
    }
};
