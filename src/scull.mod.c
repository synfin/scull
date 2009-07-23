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
	{ 0x73064479, "struct_module" },
	{ 0x5a12892e, "kobject_put" },
	{ 0x8540657f, "cdev_del" },
	{ 0x37afe3a2, "per_cpu__current_task" },
	{ 0x2c9b319a, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf04864df, "cdev_init" },
	{ 0xb279da12, "pv_lock_ops" },
	{ 0xa5423cc4, "param_get_int" },
	{ 0xd8e484f0, "register_chrdev_region" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x8eb58c6e, "__wake_up_sync" },
	{ 0xf5546ae9, "no_llseek" },
	{ 0x973873ab, "_spin_lock" },
	{ 0x45d11c43, "down_interruptible" },
	{ 0x69f26828, "kobject_set_name" },
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0xcb32da10, "param_set_int" },
	{ 0x99abb57a, "tty_devnum" },
	{ 0xba452787, "nonseekable_open" },
	{ 0xb72397d5, "printk" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0x58d3c2c3, "fasync_helper" },
	{ 0x748caf40, "down" },
	{ 0x827155d1, "cdev_add" },
	{ 0x7dceceac, "capable" },
	{ 0x972574c8, "kmem_cache_alloc" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x4292364c, "schedule" },
	{ 0x64cd5d16, "init_waitqueue_head" },
	{ 0x642e54ac, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x33d92f9a, "prepare_to_wait" },
	{ 0x3f1899f1, "up" },
	{ 0x24204103, "kill_fasync" },
	{ 0x9ccb2622, "finish_wait" },
	{ 0xd6c963c, "copy_from_user" },
	{ 0x29537c9e, "alloc_chrdev_region" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BF480FB94B983F58DD55D43");
