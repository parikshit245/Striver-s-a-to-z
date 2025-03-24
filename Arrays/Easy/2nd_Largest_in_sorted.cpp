
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int largest = arr[0];
        int sLargest = -1;
        
        for(int i=0; i<arr.size(); i++){
            if(arr[i]>largest){
                sLargest = largest;
                largest = arr[i];
            }
            else if(arr[i]<largest && sLargest<arr[i]){
                sLargest = arr[i];
            }
          
        }
        return sLargest;
    }
};
