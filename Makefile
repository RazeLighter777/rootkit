KERNEL_SRC_DIR=./kernel_src
USERSPACE_SRC_DIR=./user_src
kernel_module:
	$(MAKE) -C $(KERNEL_SRC_DIR) M=$(PWD) modules
userspace:
	$(MAKE) -C $(USERSPACE_SRC_DIR)
all: kernel_module userspace
clean:
	$(MAKE) -C $(KERNEL_SRC_DIR) M=$(PWD) clean
	$(MAKE) -C $(USERSPACE_SRC_DIR) clean
