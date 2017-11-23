#include <stdio.h>
#include "klist.h"

#define __int_free(x)
KLIST_INIT(32, int, __int_free)

int main() {
	klist_t(32) *kl;
	int i, value = 0;

	kl = kl_init(32);
	for (i = 0; i < 10; i ++) {
		*kl_pushp(32, kl) = i + 1;
	}

	while (kl_size(kl) > 0) {
		kl_shift(32, kl, &value);
		printf("%d ", value);
	}
	printf("\n");

	kl_destroy(32, kl);
	return 0;
}
