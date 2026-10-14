class Solution {
public:
    double myPow(double x, int n) {
        //if(n==0) return 1.0;
   // if(x==0) return 0.0;
    //if(x==1) return 1.0;

    long biForm = n;
    if(n<0)
    {
        x=1/x;
        biForm = -biForm;
    }
    double ans = 1;
    while(biForm>0)
    {
        if(biForm % 2 == 1)
        {
            ans*=x;
        }
        x*=x;
        biForm /=2;
    }
    return ans;
    }
};