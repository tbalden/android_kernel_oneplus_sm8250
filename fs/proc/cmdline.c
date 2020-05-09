// SPDX-License-Identifier: GPL-2.0
#include <linux/fs.h>
#include <linux/init.h>
#include <linux/proc_fs.h>
#include <linux/seq_file.h>

#if 1
#include <linux/slab.h>
#include <linux/spinlock.h>

static bool done = false;

static DEFINE_SPINLOCK(show_lock);
static bool magisk = true;

extern bool is_magisk(void);
extern bool is_magisk_sync(void);
extern void init_custom_fs(void);

#endif

static int cmdline_proc_show(struct seq_file *m, void *v)
{
#if 1
	spin_lock(&show_lock);
	if (done) {
	} else {
		magisk = is_magisk();
		done = true;
	}
	spin_unlock(&show_lock);
#endif
	seq_puts(m, saved_command_line);
	seq_putc(m, '\n');
	return 0;
}

static int __init proc_cmdline_init(void)
{
#if 1
	init_custom_fs();
#endif
	proc_create_single("cmdline", 0, NULL, cmdline_proc_show);
	return 0;
}
fs_initcall(proc_cmdline_init);
