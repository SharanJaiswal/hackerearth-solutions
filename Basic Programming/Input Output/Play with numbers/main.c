#include <stdio.h>

long n, q, r, l, array[1000000], *p;

int main()
{
	scanf("%d %d\n%d ", &n, &q, array);

	/* Build an array of sums */

	for (p = array + 1; p - array < n; p++)
	{
		scanf("%d ", p);

		*p += *(p - 1);
	}

	/* Calculate the answer for each query */

	for (; q > 0; q--)
	{
		scanf("\n%d %d", &l, &r);

		printf("%d\n", (array[r - 1] - array[l - 2]) / (r - l + 1)); /*how will it work for "l=1".Isn't l-2will be "-1", which is of course index out of bound error?
	}

	return 0;
}
