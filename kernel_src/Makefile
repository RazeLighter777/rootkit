obj-m += reveng_rtkit.o
KERNEL=$(shell uname -r)
KERNEL_ROOT=/lib/modules/$(KERNEL)/build

modules:
	@$(MAKE) -C $(KERNEL_ROOT) M=$(shell pwd) modules

clean:
	@$(MAKE) -C $(KERNEL_ROOT) M=$(shell pwd) clean

