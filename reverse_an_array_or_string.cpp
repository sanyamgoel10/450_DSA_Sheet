// Write a program to reverse an array or string

void reverseArray1(vector<int>& arr, int l, int r){
    while(l<r){
        swap(arr[l], arr[r]);
        l++;
        r--;
    }
}

void reverseArray2(vector<int>& arr, int n){
    for(int i=0;i<arr.size()/2;i++){
        swap(arr[i], arr[n-i-1]);
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
    
    reverseArray1(arr, 0, n-1);
    
    cout<<endl;
    cout<<"Resultant array: ";
    for(auto x : arr){
        cout<<x<<" ";
    }
    
    reverseArray2(arr, n);
    return 0;
}