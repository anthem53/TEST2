include ../Makefile.kernel

res:
	make clean
	make

t:
	make res
	pintos -v -k -T 5 --qemu  -- -q  run priority-donate-nest
