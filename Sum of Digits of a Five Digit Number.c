int main() {
	
    int n,r=0,s=0;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    while(n)
    {
r=n%10;
s=r+s;
n=n/10;
    }
    printf("%d",s);
    return 0;
}
