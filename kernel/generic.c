#include "generic.h"

int generic_main(void) {
#define PREF "[KERNEL]: "
    printk_dup(PREF "Hello from generic_main()");

    while (1) {}
    
    return 0;
#undef PREF
}