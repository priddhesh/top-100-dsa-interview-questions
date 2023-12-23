class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	// tc - o(n) sc - o(n)
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    unordered_map<int,int>freq;
	    for(int i = 0;i<n;i++){
	        int remVal = x-arr[i];
	        if(freq.find(remVal)!=freq.end()) return true;
	        freq[arr[i]] = 1;
	    }
	    return false;
	}
};