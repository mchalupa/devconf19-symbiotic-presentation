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
	klee_make_symbolic(&a, sizeof(a), "a");
	klee_make_symbolic(&b, sizeof(b), "b");
	klee_make_symbolic(&c, sizeof(c), "c");

	foo(a,b,c);

	return 0;
}
