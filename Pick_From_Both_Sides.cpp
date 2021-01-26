int mini(int a, int b){
    return (a > b)? b:a;
}
int Solution::solve(vector<int> &A, int B) {
    int n = A.size() - B;
    int sum = 0,mainsum=0;
    for(int i=0;i<A.size();i++) mainsum+=A[i];

    int i=0,j=A.size()-B-1;
    
    for(int k=i;k<=j;k++) sum+=A[k];
    i++;
    j++;
    int min = sum;
    while(j<A.size()){
        sum = sum - A[i-1];
        sum = sum + A[j];
        min = mini(sum, min);
        i++;
        j++;
    }
    return (mainsum - min);
}
