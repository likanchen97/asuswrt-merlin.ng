ifneq ($(findstring _$(strip $(BRCM_CHIP))_,_63138_63148_),)
BSPOBJS += bcm63xx_impl1_rom_boot.o

LDLIBS += -L $(BOARD_ARCH_SRC) -lmemsysinitlib

BSPOBJS +=               \
	bcm63xx_impl1_ddr_cinit.o \
	bcm63xx_impl1_ddr_mcb.o
endif

ifneq ($(findstring _$(strip $(BRCM_CHIP))_,_47189_),)
BSPOBJS += bcm63xx_impl1_rom_boot.o \
	   bcm63xx_impl3_ddr_init.o
endif

ifneq ($(findstring _$(strip $(BRCM_CHIP))_,_68360_),)
BSPOBJS += bcm63xx_impl2_rom_boot.o
endif

ifneq ($(findstring _$(strip $(BRCM_CHIP))_,_4908_6858_),)
BSPOBJS += bcm63xx_impl2_rom_boot.o

ifeq ($(strip $(IKOS_SMPL_DDRINIT)),1)
BSPOBJS += bcm63xx_impl2_ddr_init.o
else
ifeq ($(strip $(BRCM_CHIP)),4908)
LDLIBS += -L $(BOARD_ARCH_SRC) -lmemsysinitlib_impl2
endif
ifeq ($(strip $(BRCM_CHIP)),6858)
LDLIBS += -L $(BOARD_ARCH_SRC) -lmemsysinitlib_impl2_6858
endif
BSPOBJS +=               \
	bcm63xx_impl2_ddr_cinit.o \
	bcm63xx_impl2_ddr_mcb.o
endif
endif

ifeq ($(strip $(BLD_DDR_DIAGS)),1)
ifeq ($(strip $(BRCM_CHIP)),4908)
#due to sram size limit, only one sub diag library can be linked at time(16bit and 32bit). 
#also make sure to change BTRM_IMAGE_SIZE_ALLOCATION to 128 in the profile
#-l4908_32b_writeeye_cde_diag -l4908_32b_writestress_cde_diag -l4908_32b_readeye_cde_diag -l4908_32b_readstress_cde_diag -l4908_32b_ace_cde_diag -l4908_32b_acst_cde_diag
LDLIBS += -L $(BOARD_ARCH_SRC)/diags -l4908_16b_acst_cde_diag
endif
ifneq ($(findstring _$(strip $(BRCM_CHIP))_,_63138_63148_),)
LDLIBS += -L $(BOARD_ARCH_SRC)/diags -ldiags
endif
endif

