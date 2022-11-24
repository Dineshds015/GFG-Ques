vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            ans.push_back(i);
            break;
        }
    }
    for(int j=n-1;j>=0;j--)
    {
        if(arr[j]==x)
        {
            ans.push_back(j);
            break;
        }
    }
    if(ans.empty())
    {
        ans.push_back(-1);
        ans.push_back(-1);
    }
    return ans;
    
    
}
