long long int threeSumClosest(vector<int>& arr , int target) {
    long long int ans = INT_MAX;
    sort(arr.begin() , arr.end());
    for(int i = 0 ; i < (int)arr.size() - 2 ; i++){
        int start = i + 1 , end = (int)(arr.size() - 1); 
        while(end > start){
            int sum = arr[i] + arr[start] + arr[end];
            if(sum == target)return target;
            else if(sum > target)end--;
            else start++;
            if(abs(sum - target) < abs(ans - target)) ans = sum;
        }
    }
    return ans;
}
