#include <stdio.h>

int calc_1_test(int x)
{
	if (x<=0)
		return 0;
	int y, ans;
	scanf("%d", &y);
	ans = y>0?y*y:0;
	ans += calc_1_test(x-1);
	return ans;
}

void calc_n_test(int n)
{
	if (n<=0)
		return;
	int x;
	scanf("%d", &x);
	printf("%d\n", calc_1_test(x));
	calc_n_test(n-1);
}

int main()
{
	int n;
	scanf("%d", &n);
	calc_n_test(n);
	return 0;
}

