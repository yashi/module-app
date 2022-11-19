#include <zephyr/kernel.h>
#include <libsample.h>

void main(void)
{
	printk("Hello libsample %s\n", LIBSAMPLE_VERSION);

	return;
}
