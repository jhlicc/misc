#include <string.h>

char *shift(char *s, size_t n)
{
	char *p, c;
	size_t ns = strlen(s);

	if (!s || n > ns)
		return NULL;
	if (!n || n == ns)
		return s;
	while (n--){
		p = s;
		c = *p;
		while (p != s + ns - 1){
			*p = *(p + 1);
			p++;
		}
		*p = c;
	}
	return s;
}

#include <stdio.h>
int main(void)
{
	const char *s = "ABCDEFGHIJK";
	size_t n = strlen(s);
	char a[n];

	strncpy(a, s, n);
	printf("%s\n", shift(a, 0));
	strncpy(a, s, n);
	printf("%s\n", shift(a, 1));
	strncpy(a, s, n);
	printf("%s\n", shift(a, 3));
	strncpy(a, s, n);
	printf("%s\n", shift(a, 5));
	strncpy(a, s, n);
	printf("%s\n", shift(a, 7));
	strncpy(a, s, n);
	printf("%s\n", shift(a, 9));
	strncpy(a, s, n);
	printf("%s\n", shift(a, 10));
	strncpy(a, s, n);
	printf("%s\n", shift(a, 11));
}
