#include <zephyr/kernel.h>
#include <libsample.h>

int main(void)
{
	printk("Hello libsample %s\n", LIBSAMPLE_VERSION);

	return 0;
}
