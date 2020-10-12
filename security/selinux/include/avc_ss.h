/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Access vector cache interface for the security server.
 *
 * Author : Stephen Smalley, <sds@tycho.nsa.gov>
 */
#ifndef _SELINUX_AVC_SS_H_
#define _SELINUX_AVC_SS_H_

#include "flask.h"
#ifdef CONFIG_USERLAND_WORKER
#include "avc_ss_reset.h"
#endif

struct selinux_avc;
#ifndef CONFIG_USERLAND_WORKER
int avc_ss_reset(struct selinux_avc *avc, u32 seqno);
#endif

/* Class/perm mapping support */
struct security_class_mapping {
	const char *name;
	const char *perms[sizeof(u32) * 8 + 1];
};

extern struct security_class_mapping secclass_map[];

#endif /* _SELINUX_AVC_SS_H_ */

