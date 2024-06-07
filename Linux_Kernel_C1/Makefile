obj-m += mymodule.o
#obj-m specifies object files which are built as loadable kernel modules

# Changed the working directory of Makefile stored in lib/module... to module we have created and build the module
all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
	
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
	
