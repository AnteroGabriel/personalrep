
set MATLAB=C:\Program Files\MATLAB\R2020b

make -f three_phase_circuit__1_sm_master.mk  EXT_MODE=0 EXTMODE_STATIC_ALLOC=0 TMW_EXTMODE_TESTING=0 EXTMODE_STATIC_ALLOC_SIZE=1000000 EXTMODE_TRANSPORT=0 INCLUDE_MDL_TERMINATE_FCN=1 OPTS="-DTID01EQ=0"
