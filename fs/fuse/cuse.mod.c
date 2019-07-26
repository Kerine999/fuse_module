#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x28950ef1, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x9a7ea54b, __VMLINUX_SYMBOL_STR(fuse_file_poll) },
	{ 0x8e07ec8e, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xa1012e43, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x450c190, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xf23b2e74, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x7e5df8e3, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x202e08c3, __VMLINUX_SYMBOL_STR(fuse_dev_operations) },
	{ 0x539f4780, __VMLINUX_SYMBOL_STR(fuse_put_request) },
	{ 0x7c994e4f, __VMLINUX_SYMBOL_STR(fuse_request_send_background) },
	{ 0x434693dd, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0xdabc5fd6, __VMLINUX_SYMBOL_STR(fuse_get_req_for_background) },
	{ 0x9e9c93b, __VMLINUX_SYMBOL_STR(fuse_conn_init) },
	{ 0x9790eb74, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x5f675a65, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x798d5ca6, __VMLINUX_SYMBOL_STR(cdev_alloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x890f0812, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xad4616a1, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0x77bc13a0, __VMLINUX_SYMBOL_STR(strim) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xf01ecd60, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xe7cc5932, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0xa281370e, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xb6230fe6, __VMLINUX_SYMBOL_STR(fuse_conn_kill) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe25c13b5, __VMLINUX_SYMBOL_STR(fuse_direct_io) },
	{ 0x2350bbe8, __VMLINUX_SYMBOL_STR(fuse_do_ioctl) },
	{ 0x922d2fa4, __VMLINUX_SYMBOL_STR(fuse_do_open) },
	{ 0xdbf2f1dc, __VMLINUX_SYMBOL_STR(fuse_conn_get) },
	{ 0x65d0e722, __VMLINUX_SYMBOL_STR(fuse_conn_put) },
	{ 0xbf8d003a, __VMLINUX_SYMBOL_STR(fuse_sync_release) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xf8e14ba2, __VMLINUX_SYMBOL_STR(fuse_dev_release) },
	{ 0x3fa89e8f, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x44f8da52, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x4519b3a0, __VMLINUX_SYMBOL_STR(fuse_abort_conn) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fuse";


MODULE_INFO(srcversion, "359F922832EF55D8640BEC2");
MODULE_INFO(rhelversion, "7.6");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif
