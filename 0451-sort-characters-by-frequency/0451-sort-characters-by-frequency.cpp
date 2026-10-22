
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;

        // Count each character
        for (char c : s) {
            freq[c]++;
        }

        // Store characters
        vector<char> ans;
        for (auto p : freq) {
            ans.push_back(p.first);
        }

        // Sort by frequency in descending order
        sort(ans.begin(), ans.end(), [&](char a, char b) {
            return freq[a] > freq[b];
        });

        // Build the answer
        string result = "";
        for (char c : ans) {
            result += string(freq[c], c);
        }

        return result;
    }
};
