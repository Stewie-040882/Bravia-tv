/* $Id: //DTV/MP_BR/DTV_X_IDTV1501_002288_8_001_800_002/apollo/linux_core/kernel/linux-3.10/arch/cris/include/uapi/asm/posix_types.h#1 $ */

/* We cheat a bit and use our C-coded bitops functions from asm/bitops.h */
/* I guess we should write these in assembler because they are used often. */

#ifndef __ARCH_CRIS_POSIX_TYPES_H
#define __ARCH_CRIS_POSIX_TYPES_H

/*
 * This file is generally used by user-level software, so you need to
 * be a little careful about namespace pollution etc.  Also, we cannot
 * assume GCC is being used.
 */

typedef unsigned short	__kernel_mode_t;
#define __kernel_mode_t __kernel_mode_t

typedef unsigned short  __kernel_ipc_pid_t;
#define __kernel_ipc_pid_t __kernel_ipc_pid_t

typedef unsigned short	__kernel_uid_t;
typedef unsigned short	__kernel_gid_t;
#define __kernel_uid_t __kernel_uid_t

typedef unsigned short	__kernel_old_dev_t;
#define __kernel_old_dev_t __kernel_old_dev_t

#include <asm-generic/posix_types.h>

#endif /* __ARCH_CRIS_POSIX_TYPES_H */