cmd_fs/fuse/fuse.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o fs/fuse/fuse.ko fs/fuse/fuse.o fs/fuse/fuse.mod.o
