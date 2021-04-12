#ifndef __iop_sw_spu_defs_h
#define __iop_sw_spu_defs_h

/*
 * This file is autogenerated from
 *   file:           ../../inst/io_proc/rtl/guinness/iop_sw_spu.r
 *     id:           <not found>
 *     last modfied: Mon Apr 11 16:10:19 2005
 *
 *   by /n/asic/design/tools/rdesc/src/rdes2c --outfile iop_sw_spu_defs.h ../../inst/io_proc/rtl/guinness/iop_sw_spu.r
 *      id: $Id: //DTV/MP_BR/DTV_X_IDTV1501_002288_8_001_800_002/apollo/linux_core/kernel/linux-3.10/arch/cris/include/arch-v32/arch/hwregs/iop/iop_sw_spu_defs.h#1 $
 * Any changes here will be lost.
 *
 * -*- buffer-read-only: t -*-
 */
/* Main access macros */
#ifndef REG_RD
#define REG_RD( scope, inst, reg ) \
  REG_READ( reg_##scope##_##reg, \
            (inst) + REG_RD_ADDR_##scope##_##reg )
#endif

#ifndef REG_WR
#define REG_WR( scope, inst, reg, val ) \
  REG_WRITE( reg_##scope##_##reg, \
             (inst) + REG_WR_ADDR_##scope##_##reg, (val) )
#endif

#ifndef REG_RD_VECT
#define REG_RD_VECT( scope, inst, reg, index ) \
  REG_READ( reg_##scope##_##reg, \
            (inst) + REG_RD_ADDR_##scope##_##reg + \
	    (index) * STRIDE_##scope##_##reg )
#endif

#ifndef REG_WR_VECT
#define REG_WR_VECT( scope, inst, reg, index, val ) \
  REG_WRITE( reg_##scope##_##reg, \
             (inst) + REG_WR_ADDR_##scope##_##reg + \
	     (index) * STRIDE_##scope##_##reg, (val) )
#endif

#ifndef REG_RD_INT
#define REG_RD_INT( scope, inst, reg ) \
  REG_READ( int, (inst) + REG_RD_ADDR_##scope##_##reg )
#endif

#ifndef REG_WR_INT
#define REG_WR_INT( scope, inst, reg, val ) \
  REG_WRITE( int, (inst) + REG_WR_ADDR_##scope##_##reg, (val) )
#endif

#ifndef REG_RD_INT_VECT
#define REG_RD_INT_VECT( scope, inst, reg, index ) \
  REG_READ( int, (inst) + REG_RD_ADDR_##scope##_##reg + \
	    (index) * STRIDE_##scope##_##reg )
#endif

#ifndef REG_WR_INT_VECT
#define REG_WR_INT_VECT( scope, inst, reg, index, val ) \
  REG_WRITE( int, (inst) + REG_WR_ADDR_##scope##_##reg + \
	     (index) * STRIDE_##scope##_##reg, (val) )
#endif

#ifndef REG_TYPE_CONV
#define REG_TYPE_CONV( type, orgtype, val ) \
  ( { union { orgtype o; type n; } r; r.o = val; r.n; } )
#endif

#ifndef reg_page_size
#define reg_page_size 8192
#endif

#ifndef REG_ADDR
#define REG_ADDR( scope, inst, reg ) \
  ( (inst) + REG_RD_ADDR_##scope##_##reg )
#endif

#ifndef REG_ADDR_VECT
#define REG_ADDR_VECT( scope, inst, reg, index ) \
  ( (inst) + REG_RD_ADDR_##scope##_##reg + \
    (index) * STRIDE_##scope##_##reg )
#endif

/* C-code for register scope iop_sw_spu */

/* Register rw_mc_ctrl, scope iop_sw_spu, type rw */
typedef struct {
  unsigned int keep_owner  : 1;
  unsigned int cmd         : 2;
  unsigned int size        : 3;
  unsigned int wr_spu0_mem : 1;
  unsigned int wr_spu1_mem : 1;
  unsigned int dummy1      : 24;
} reg_iop_sw_spu_rw_mc_ctrl;
#define REG_RD_ADDR_iop_sw_spu_rw_mc_ctrl 0
#define REG_WR_ADDR_iop_sw_spu_rw_mc_ctrl 0

/* Register rw_mc_data, scope iop_sw_spu, type rw */
typedef struct {
  unsigned int val : 32;
} reg_iop_sw_spu_rw_mc_data;
#define REG_RD_ADDR_iop_sw_spu_rw_mc_data 4
#define REG_WR_ADDR_iop_sw_spu_rw_mc_data 4

/* Register rw_mc_addr, scope iop_sw_spu, type rw */
typedef unsigned int reg_iop_sw_spu_rw_mc_addr;
#define REG_RD_ADDR_iop_sw_spu_rw_mc_addr 8
#define REG_WR_ADDR_iop_sw_spu_rw_mc_addr 8

/* Register rs_mc_data, scope iop_sw_spu, type rs */
typedef unsigned int reg_iop_sw_spu_rs_mc_data;
#define REG_RD_ADDR_iop_sw_spu_rs_mc_data 12

/* Register r_mc_data, scope iop_sw_spu, type r */
typedef unsigned int reg_iop_sw_spu_r_mc_data;
#define REG_RD_ADDR_iop_sw_spu_r_mc_data 16

/* Register r_mc_stat, scope iop_sw_spu, type r */
typedef struct {
  unsigned int busy_cpu      : 1;
  unsigned int busy_mpu      : 1;
  unsigned int busy_spu0     : 1;
  unsigned int busy_spu1     : 1;
  unsigned int owned_by_cpu  : 1;
  unsigned int owned_by_mpu  : 1;
  unsigned int owned_by_spu0 : 1;
  unsigned int owned_by_spu1 : 1;
  unsigned int dummy1        : 24;
} reg_iop_sw_spu_r_mc_stat;
#define REG_RD_ADDR_iop_sw_spu_r_mc_stat 20

/* Register rw_bus0_clr_mask, scope iop_sw_spu, type rw */
typedef struct {
  unsigned int byte0 : 8;
  unsigned int byte1 : 8;
  unsigned int byte2 : 8;
  unsigned int byte3 : 8;
} reg_iop_sw_spu_rw_bus0_clr_mask;
#define REG_RD_ADDR_iop_sw_spu_rw_bus0_clr_mask 24
#define REG_WR_ADDR_iop_sw_spu_rw_bus0_clr_mask 24

/* Register rw_bus0_set_mask, scope iop_sw_spu, type rw */
typedef struct {
  unsigned int byte0 : 8;
  unsigned int byte1 : 8;
  unsigned int byte2 : 8;
  unsigned int byte3 : 8;
} reg_iop_sw_spu_rw_bus0_set_mask;
#define REG_RD_ADDR_iop_sw_spu_rw_bus0_set_mask 28
#define REG_WR_ADDR_iop_sw_spu_rw_bus0_set_mask 28

/* Register rw_bus0_oe_clr_mask, scope iop_sw_spu, type rw */
typedef struct {
  unsigned int byte0 : 1;
  unsigned int byte1 : 1;
  unsigned int byte2 : 1;
  unsigned int byte3 : 1;
  unsigned int dummy1 : 28;
} reg_iop_sw_spu_rw_bus0_oe_clr_mask;
#define REG_RD_ADDR_iop_sw_spu_rw_bus0_oe_clr_mask 32
#define REG_WR_ADDR_iop_sw_spu_rw_bus0_oe_clr_mask 32

/* Register rw_bus0_oe_set_mask, scope iop_sw_spu, type rw */
typedef struct {
  unsigned int byte0 : 1;
  unsigned int byte1 : 1;
  unsigned int byte2 : 1;
  unsigned int byte3 : 1;
  unsigned int dummy1 : 28;
} reg_iop_sw_spu_rw_bus0_oe_set_mask;
#define REG_RD_ADDR_iop_sw_spu_rw_bus0_oe_set_mask 36
#define REG_WR_ADDR_iop_sw_spu_rw_bus0_oe_set_mask 36

/* Register r_bus0_in, scope iop_sw_spu, type r */
typedef unsigned int reg_iop_sw_spu_r_bus0_in;
#define REG_RD_ADDR_iop_sw_spu_r_bus0_in 40

/* Register rw_bus1_clr_mask, scope iop_sw_spu, type rw */
typedef struct {
  unsigned int byte0 : 8;
  unsigned int byte1 : 8;
  unsigned int byte2 : 8;
  unsigned int byte3 : 8;
} reg_iop_sw_spu_rw_bus1_clr_mask;
#define REG_RD_ADDR_iop_sw_spu_rw_bus1_clr_mask 44
#define REG_WR_ADDR_iop_sw_spu_rw_bus1_clr_mask 44

/* Register rw_bus1_set_mask, scope iop_sw_spu, type rw */
typedef struct {
  unsigned int byte0 : 8;
  unsigned int byte1 : 8;
  unsigned int byte2 : 8;
  unsigned int byte3 : 8;
} reg_iop_sw_spu_rw_bus1_set_mask;
#define REG_RD_ADDR_iop_sw_spu_rw_bus1_set_mask 48
#define REG_WR_ADDR_iop_sw_spu_rw_bus1_set_mask 48

/* Register rw_bus1_oe_clr_mask, scope iop_sw_spu, type rw */
typedef struct {
  unsigned int byte0 : 1;
  unsigned int byte1 : 1;
  unsigned int byte2 : 1;
  unsigned int byte3 : 1;
  unsigned int dummy1 : 28;
} reg_iop_sw_spu_rw_bus1_oe_clr_mask;
#define REG_RD_ADDR_iop_sw_spu_rw_bus1_oe_clr_mask 52
#define REG_WR_ADDR_iop_sw_spu_rw_bus1_oe_clr_mask 52

/* Register rw_bus1_oe_set_mask, scope iop_sw_spu, type rw */
typedef struct {
  unsigned int byte0 : 1;
  unsigned int byte1 : 1;
  unsigned int byte2 : 1;
  unsigned int byte3 : 1;
  unsigned int dummy1 : 28;
} reg_iop_sw_spu_rw_bus1_oe_set_mask;
#define REG_RD_ADDR_iop_sw_spu_rw_bus1_oe_set_mask 56
#define REG_WR_ADDR_iop_sw_spu_rw_bus1_oe_set_mask 56

/* Register r_bus1_in, scope iop_sw_spu, type r */
typedef unsigned int reg_iop_sw_spu_r_bus1_in;
#define REG_RD_ADDR_iop_sw_spu_r_bus1_in 60

/* Register rw_gio_clr_mask, scope iop_sw_spu, type rw */
typedef struct {
  unsigned int val : 32;
} reg_iop_sw_spu_rw_gio_clr_mask;
#define REG_RD_ADDR_iop_sw_spu_rw_gio_clr_mask 64
#define REG_WR_ADDR_iop_sw_spu_rw_gio_clr_mask 64

/* Register rw_gio_set_mask, scope iop_sw_spu, type rw */
typedef struct {
  unsigned int val : 32;
} reg_iop_sw_spu_rw_gio_set_mask;
#define REG_RD_ADDR_iop_sw_spu_rw_gio_set_mask 68
#define REG_WR_ADDR_iop_sw_spu_rw_gio_set_mask 68

/* Register rw_gio_oe_clr_mask, scope iop_sw_spu, type rw */
typedef struct {
  unsigned int val : 32;
} reg_iop_sw_spu_rw_gio_oe_clr_mask;
#define REG_RD_ADDR_iop_sw_spu_rw_gio_oe_clr_mask 72
#define REG_WR_ADDR_iop_sw_spu_rw_gio_oe_clr_mask 72

/* Register rw_gio_oe_set_mask, scope iop_sw_spu, type rw */
typedef struct {
  unsigned int val : 32;
} reg_iop_sw_spu_rw_gio_oe_set_mask;
#define REG_RD_ADDR_iop_sw_spu_rw_gio_oe_set_mask 76
#define REG_WR_ADDR_iop_sw_spu_rw_gio_oe_set_mask 76

/* Register r_gio_in, scope iop_sw_spu, type r */
typedef unsigned int reg_iop_sw_spu_r_gio_in;
#define REG_RD_ADDR_iop_sw_spu_r_gio_in 80

/* Register rw_bus0_clr_mask_lo, scope iop_sw_spu, type rw */
typedef struct {
  unsigned int byte0 : 8;
  unsigned int byte1 : 8;
  unsigned int dummy1 : 16;
} reg_iop_sw_spu_rw_bus0_clr_mask_lo;
#define REG_RD_ADDR_iop_sw_spu_rw_bus0_clr_mask_lo 84
#define REG_WR_ADDR_iop_sw_spu_rw_bus0_clr_mask_lo 84

/* Register rw_bus0_clr_mask_hi, scope iop_sw_spu, type rw */
typedef struct {
  unsigned int byte2 : 8;
  unsigned int byte3 : 8;
  unsigned int dummy1 : 16;
} reg_iop_sw_spu_rw_bus0_clr_mask_hi;
#define REG_RD_ADDR_iop_sw_spu_rw_bus0_clr_mask_hi 88
#define REG_WR_ADDR_iop_sw_spu_rw_bus0_clr_mask_hi 88

/* Register rw_bus0_set_mask_lo, scope iop_sw_spu, type rw */
typedef struct {
  unsigned int byte0 : 8;
  unsigned int byte1 : 8;
  unsigned int dummy1 : 16;
} reg_iop_sw_spu_rw_bus0_set_mask_lo;
#define REG_RD_ADDR_iop_sw_spu_rw_bus0_set_mask_lo 92
#define REG_WR_ADDR_iop_sw_spu_rw_bus0_set_mask_lo 92

/* Register rw_bus0_set_mask_hi, scope iop_sw_spu, type rw */
typedef struct {
  unsigned int byte2 : 8;
  unsigned int byte3 : 8;
  unsigned int dummy1 : 16;
} reg_iop_sw_spu_rw_bus0_set_mask_hi;
#define REG_RD_ADDR_iop_sw_spu_rw_bus0_set_mask_hi 96
#define REG_WR_ADDR_iop_sw_spu_rw_bus0_set_mask_hi 96

/* Register rw_bus1_clr_mask_lo, scope iop_sw_spu, type rw */
typedef struct {
  unsigned int byte0 : 8;
  unsigned int byte1 : 8;
  unsigned int dummy1 : 16;
} reg_iop_sw_spu_rw_bus1_clr_mask_lo;
#define REG_RD_ADDR_iop_sw_spu_rw_bus1_clr_mask_lo 100
#define REG_WR_ADDR_iop_sw_spu_rw_bus1_clr_mask_lo 100

/* Register rw_bus1_clr_mask_hi, scope iop_sw_spu, type rw */
typedef struct {
  unsigned int byte2 : 8;
  unsigned int byte3 : 8;
  unsigned int dummy1 : 16;
} reg_iop_sw_spu_rw_bus1_clr_mask_hi;
#define REG_RD_ADDR_iop_sw_spu_rw_bus1_clr_mask_hi 104
#define REG_WR_ADDR_iop_sw_spu_rw_bus1_clr_mask_hi 104

/* Register rw_bus1_set_mask_lo, scope iop_sw_spu, type rw */
typedef struct {
  unsigned int byte0 : 8;
  unsigned int byte1 : 8;
  unsigned int dummy1 : 16;
} reg_iop_sw_spu_rw_bus1_set_mask_lo;
#define REG_RD_ADDR_iop_sw_spu_rw_bus1_set_mask_lo 108
#define REG_WR_ADDR_iop_sw_spu_rw_bus1_set_mask_lo 108

/* Register rw_bus1_set_mask_hi, scope iop_sw_spu, type rw */
typedef struct {
  unsigned int byte2 : 8;
  unsigned int byte3 : 8;
  unsigned int dummy1 : 16;
} reg_iop_sw_spu_rw_bus1_set_mask_hi;
#define REG_RD_ADDR_iop_sw_spu_rw_bus1_set_mask_hi 112
#define REG_WR_ADDR_iop_sw_spu_rw_bus1_set_mask_hi 112

/* Register rw_gio_clr_mask_lo, scope iop_sw_spu, type rw */
typedef struct {
  unsigned int val : 16;
  unsigned int dummy1 : 16;
} reg_iop_sw_spu_rw_gio_clr_mask_lo;
#define REG_RD_ADDR_iop_sw_spu_rw_gio_clr_mask_lo 116
#define REG_WR_ADDR_iop_sw_spu_rw_gio_clr_mask_lo 116

/* Register rw_gio_clr_mask_hi, scope iop_sw_spu, type rw */
typedef struct {
  unsigned int val : 16;
  unsigned int dummy1 : 16;
} reg_iop_sw_spu_rw_gio_clr_mask_hi;
#define REG_RD_ADDR_iop_sw_spu_rw_gio_clr_mask_hi 120
#define REG_WR_ADDR_iop_sw_spu_rw_gio_clr_mask_hi 120

/* Register rw_gio_set_mask_lo, scope iop_sw_spu, type rw */
typedef struct {
  unsigned int val : 16;
  unsigned int dummy1 : 16;
} reg_iop_sw_spu_rw_gio_set_mask_lo;
#define REG_RD_ADDR_iop_sw_spu_rw_gio_set_mask_lo 124
#define REG_WR_ADDR_iop_sw_spu_rw_gio_set_mask_lo 124

/* Register rw_gio_set_mask_hi, scope iop_sw_spu, type rw */
typedef struct {
  unsigned int val : 16;
  unsigned int dummy1 : 16;
} reg_iop_sw_spu_rw_gio_set_mask_hi;
#define REG_RD_ADDR_iop_sw_spu_rw_gio_set_mask_hi 128
#define REG_WR_ADDR_iop_sw_spu_rw_gio_set_mask_hi 128

/* Register rw_gio_oe_clr_mask_lo, scope iop_sw_spu, type rw */
typedef struct {
  unsigned int val : 16;
  unsigned int dummy1 : 16;
} reg_iop_sw_spu_rw_gio_oe_clr_mask_lo;
#define REG_RD_ADDR_iop_sw_spu_rw_gio_oe_clr_mask_lo 132
#define REG_WR_ADDR_iop_sw_spu_rw_gio_oe_clr_mask_lo 132

/* Register rw_gio_oe_clr_mask_hi, scope iop_sw_spu, type rw */
typedef struct {
  unsigned int val : 16;
  unsigned int dummy1 : 16;
} reg_iop_sw_spu_rw_gio_oe_clr_mask_hi;
#define REG_RD_ADDR_iop_sw_spu_rw_gio_oe_clr_mask_hi 136
#define REG_WR_ADDR_iop_sw_spu_rw_gio_oe_clr_mask_hi 136

/* Register rw_gio_oe_set_mask_lo, scope iop_sw_spu, type rw */
typedef struct {
  unsigned int val : 16;
  unsigned int dummy1 : 16;
} reg_iop_sw_spu_rw_gio_oe_set_mask_lo;
#define REG_RD_ADDR_iop_sw_spu_rw_gio_oe_set_mask_lo 140
#define REG_WR_ADDR_iop_sw_spu_rw_gio_oe_set_mask_lo 140

/* Register rw_gio_oe_set_mask_hi, scope iop_sw_spu, type rw */
typedef struct {
  unsigned int val : 16;
  unsigned int dummy1 : 16;
} reg_iop_sw_spu_rw_gio_oe_set_mask_hi;
#define REG_RD_ADDR_iop_sw_spu_rw_gio_oe_set_mask_hi 144
#define REG_WR_ADDR_iop_sw_spu_rw_gio_oe_set_mask_hi 144

/* Register rw_cpu_intr, scope iop_sw_spu, type rw */
typedef struct {
  unsigned int intr0  : 1;
  unsigned int intr1  : 1;
  unsigned int intr2  : 1;
  unsigned int intr3  : 1;
  unsigned int intr4  : 1;
  unsigned int intr5  : 1;
  unsigned int intr6  : 1;
  unsigned int intr7  : 1;
  unsigned int intr8  : 1;
  unsigned int intr9  : 1;
  unsigned int intr10 : 1;
  unsigned int intr11 : 1;
  unsigned int intr12 : 1;
  unsigned int intr13 : 1;
  unsigned int intr14 : 1;
  unsigned int intr15 : 1;
  unsigned int dummy1 : 16;
} reg_iop_sw_spu_rw_cpu_intr;
#define REG_RD_ADDR_iop_sw_spu_rw_cpu_intr 148
#define REG_WR_ADDR_iop_sw_spu_rw_cpu_intr 148

/* Register r_cpu_intr, scope iop_sw_spu, type r */
typedef struct {
  unsigned int intr0  : 1;
  unsigned int intr1  : 1;
  unsigned int intr2  : 1;
  unsigned int intr3  : 1;
  unsigned int intr4  : 1;
  unsigned int intr5  : 1;
  unsigned int intr6  : 1;
  unsigned int intr7  : 1;
  unsigned int intr8  : 1;
  unsigned int intr9  : 1;
  unsigned int intr10 : 1;
  unsigned int intr11 : 1;
  unsigned int intr12 : 1;
  unsigned int intr13 : 1;
  unsigned int intr14 : 1;
  unsigned int intr15 : 1;
  unsigned int dummy1 : 16;
} reg_iop_sw_spu_r_cpu_intr;
#define REG_RD_ADDR_iop_sw_spu_r_cpu_intr 152

/* Register r_hw_intr, scope iop_sw_spu, type r */
typedef struct {
  unsigned int trigger_grp0    : 1;
  unsigned int trigger_grp1    : 1;
  unsigned int trigger_grp2    : 1;
  unsigned int trigger_grp3    : 1;
  unsigned int trigger_grp4    : 1;
  unsigned int trigger_grp5    : 1;
  unsigned int trigger_grp6    : 1;
  unsigned int trigger_grp7    : 1;
  unsigned int timer_grp0      : 1;
  unsigned int timer_grp1      : 1;
  unsigned int timer_grp2      : 1;
  unsigned int timer_grp3      : 1;
  unsigned int fifo_out0       : 1;
  unsigned int fifo_out0_extra : 1;
  unsigned int fifo_in0        : 1;
  unsigned int fifo_in0_extra  : 1;
  unsigned int fifo_out1       : 1;
  unsigned int fifo_out1_extra : 1;
  unsigned int fifo_in1        : 1;
  unsigned int fifo_in1_extra  : 1;
  unsigned int dmc_out0        : 1;
  unsigned int dmc_in0         : 1;
  unsigned int dmc_out1        : 1;
  unsigned int dmc_in1         : 1;
  unsigned int dummy1          : 8;
} reg_iop_sw_spu_r_hw_intr;
#define REG_RD_ADDR_iop_sw_spu_r_hw_intr 156

/* Register rw_mpu_intr, scope iop_sw_spu, type rw */
typedef struct {
  unsigned int intr0  : 1;
  unsigned int intr1  : 1;
  unsigned int intr2  : 1;
  unsigned int intr3  : 1;
  unsigned int intr4  : 1;
  unsigned int intr5  : 1;
  unsigned int intr6  : 1;
  unsigned int intr7  : 1;
  unsigned int intr8  : 1;
  unsigned int intr9  : 1;
  unsigned int intr10 : 1;
  unsigned int intr11 : 1;
  unsigned int intr12 : 1;
  unsigned int intr13 : 1;
  unsigned int intr14 : 1;
  unsigned int intr15 : 1;
  unsigned int dummy1 : 16;
} reg_iop_sw_spu_rw_mpu_intr;
#define REG_RD_ADDR_iop_sw_spu_rw_mpu_intr 160
#define REG_WR_ADDR_iop_sw_spu_rw_mpu_intr 160

/* Register r_mpu_intr, scope iop_sw_spu, type r */
typedef struct {
  unsigned int intr0            : 1;
  unsigned int intr1            : 1;
  unsigned int intr2            : 1;
  unsigned int intr3            : 1;
  unsigned int intr4            : 1;
  unsigned int intr5            : 1;
  unsigned int intr6            : 1;
  unsigned int intr7            : 1;
  unsigned int intr8            : 1;
  unsigned int intr9            : 1;
  unsigned int intr10           : 1;
  unsigned int intr11           : 1;
  unsigned int intr12           : 1;
  unsigned int intr13           : 1;
  unsigned int intr14           : 1;
  unsigned int intr15           : 1;
  unsigned int other_spu_intr0  : 1;
  unsigned int other_spu_intr1  : 1;
  unsigned int other_spu_intr2  : 1;
  unsigned int other_spu_intr3  : 1;
  unsigned int other_spu_intr4  : 1;
  unsigned int other_spu_intr5  : 1;
  unsigned int other_spu_intr6  : 1;
  unsigned int other_spu_intr7  : 1;
  unsigned int other_spu_intr8  : 1;
  unsigned int other_spu_intr9  : 1;
  unsigned int other_spu_intr10 : 1;
  unsigned int other_spu_intr11 : 1;
  unsigned int other_spu_intr12 : 1;
  unsigned int other_spu_intr13 : 1;
  unsigned int other_spu_intr14 : 1;
  unsigned int other_spu_intr15 : 1;
} reg_iop_sw_spu_r_mpu_intr;
#define REG_RD_ADDR_iop_sw_spu_r_mpu_intr 164


/* Constants */
enum {
  regk_iop_sw_spu_copy                     = 0x00000000,
  regk_iop_sw_spu_no                       = 0x00000000,
  regk_iop_sw_spu_nop                      = 0x00000000,
  regk_iop_sw_spu_rd                       = 0x00000002,
  regk_iop_sw_spu_reg_copy                 = 0x00000001,
  regk_iop_sw_spu_rw_bus0_clr_mask_default = 0x00000000,
  regk_iop_sw_spu_rw_bus0_oe_clr_mask_default = 0x00000000,
  regk_iop_sw_spu_rw_bus0_oe_set_mask_default = 0x00000000,
  regk_iop_sw_spu_rw_bus0_set_mask_default = 0x00000000,
  regk_iop_sw_spu_rw_bus1_clr_mask_default = 0x00000000,
  regk_iop_sw_spu_rw_bus1_oe_clr_mask_default = 0x00000000,
  regk_iop_sw_spu_rw_bus1_oe_set_mask_default = 0x00000000,
  regk_iop_sw_spu_rw_bus1_set_mask_default = 0x00000000,
  regk_iop_sw_spu_rw_gio_clr_mask_default  = 0x00000000,
  regk_iop_sw_spu_rw_gio_oe_clr_mask_default = 0x00000000,
  regk_iop_sw_spu_rw_gio_oe_set_mask_default = 0x00000000,
  regk_iop_sw_spu_rw_gio_set_mask_default  = 0x00000000,
  regk_iop_sw_spu_set                      = 0x00000001,
  regk_iop_sw_spu_wr                       = 0x00000003,
  regk_iop_sw_spu_yes                      = 0x00000001
};
#endif /* __iop_sw_spu_defs_h */
