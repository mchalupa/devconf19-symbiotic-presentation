#include <assert.h>

void error(void)
{
	assert(0);
}

int foo(int a, int b, int c)
{
    if (a > 0) {
        c = 2;
        if (b < 0) {
            c = b;
        }
    } else {
        c = -2;
    }
    if (a + b + c <= 0)
        error();
}

int main(void)
{
	int a, b, c;

	foo(a,b,c);

	return 0;
}
