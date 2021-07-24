#include <stdio.h>
#include <stdlib.h>
int main()
{
	unsigned long n, m, max = 0, sum = 0;
	scanf("%lu", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lu", &m);
		unsigned long *a = malloc(sizeof(unsigned long) * m);
		for (int j = 0; j < m; j++) {
			scanf("%lu", &a[j]);
			sum += a[j];
			if (a[j] > max) {
				max = a[j];
			}
		}
		sum -= max;
		if (max >= sum) {
			printf("NO\n");
		} else {
			printf("YES\n");
		}
		sum = 0;
		max = 0;
		free(a);
	}
	return 0;
}
