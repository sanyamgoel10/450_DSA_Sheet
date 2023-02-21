// Move all negative numbers to beginning and positive to end with constant extra space

void move(vector<int>& nums){
    int n = nums.size();
    int l=0, r=n-1;
    while(l<r){
        if(nums[l]<0 && nums[r]<0){
            l++;
        }
        else if(nums[l]>=0 && nums[r]<0){
            swap(nums[l],nums[r]);
            l++;
            r--;
        }
        else if(nums[l]>0 && nums[r]>0){
            r--;
        }
        else{
            l++;
            r--;
        }
    }
}

int main() {
    vector<int> arr = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
    move(arr);
    for(auto x : arr){
        cout<<x<<" "; 
    }
    return 0;
}