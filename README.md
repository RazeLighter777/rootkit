# Rootkit
Rootkit for offensive cyber tool capstone AY24. Based on ![this rootkit](https://github.com/reveng007/reveng_rtkit)

# Instructions
Make sure you are on linux with sudo privleges. Kernel headers must be installed in /usr/lib/.

You need gcc and make installed. Root is required to load the kernel modules.

0. Edit the options in options.h to your liking. Read REVENG_RTKIT_README.txt for more directions on usage. 

1. Run `make` to build the userspace and kernelspace components.

2. `cd kernel_src`

3. `insmod reveng_rtkit.ko`

4. `cd ../user_src`

5. `sudo ./client_usermode`

