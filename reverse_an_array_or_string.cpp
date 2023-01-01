// Write a program to reverse an array or string

void revereseArray(vector<int>& arr, int l, int r){
    while(l<r){
        swap(arr[l], arr[r]);
        l++;
        r--;
    }
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int n = arr.size();
    cout<<"Original array: ";
    for(auto x : arr){
        cout<<x<<" ";
    }
    
    revereseArray(arr, 0, n-1);
    
    cout<<endl;
    cout<<"Resultant array: ";
    for(auto x : arr){
        cout<<x<<" ";
    }
     
    return 0;
}