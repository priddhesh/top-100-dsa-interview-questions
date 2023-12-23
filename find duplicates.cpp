class Solution{
  public:
    //tc - o(n) sc - o(n)
    vector<int> duplicates(long long arr[], int n) {
        // code here
        if (n == 1) return { arr[0] };
        vector<int> duplicateValues;
        unordered_map<long long, int> freq,taken;
        for (int i = 0; i < n; i++) {
            if (freq[arr[i]] >= 1 && taken[arr[i]]!=1) {
                duplicateValues.push_back(arr[i]);
                taken[arr[i]] = 1;
            }
            freq[arr[i]]++;
        }
        sort(duplicateValues.begin(),duplicateValues.end());
        return duplicateValues.size() > 0 ? duplicateValues : vector<int>{ -1 };
    }
};