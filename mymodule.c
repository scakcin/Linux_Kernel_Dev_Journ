#include <linux/module.h>
#include <linux/init.h>

/* Meta Info */
MODULE_LICENSE("GPL");
MODULE_AUTHOR("NC");
MODULE_DESCRIPTION("BASIC KERNEL PROGRAM STRING");

/* The function to be passed onto module_init */
static int __init ModuleInit(void){
	printk("Raspberry Basic Kernel Prog. \n");
	return 0;
}

/* The function to be passed onto module_exit */
static void __exit ModuleExit(void){
		printk("Raspberry Basic Kernel prog. end \n");
}

/* This function will be called at the module insertion (insmod) time */
module_init(ModuleInit);

/* This function will be called at the module removal (rmmod) time */
module_exit(ModuleExit);
