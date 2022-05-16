class Solution {
public:
   vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>> ans;
    unordered_map<string, vector<string>> m;
    for(int i = 0; i < strs.size(); i++)
    {
        string s = strs[i];
        sort(s.begin(),s.end());
        m[s].push_back(strs[i]);
    }
    unordered_map<string, vector<string>> :: iterator it;
    for(it = m.begin(); it != m.end(); it++)
    {
        ans.push_back(it->second);
    }
    return ans;
};
};
