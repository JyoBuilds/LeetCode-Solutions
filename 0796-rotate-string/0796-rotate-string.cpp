class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()){
            return false;
        }
        string final=s+s;
        return final.find(goal)!=string::npos;
    }
};