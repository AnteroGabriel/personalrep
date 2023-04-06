/**
 * This function is generated by RT-LAB during model compilation (at 'generation' step).
 * This function copies data from src to dst, ignoring pointers.
 * Note that only PWork are supposed to be pointers within a DWork structure
 * and that sub-structures are copied in one operation since they do not contain pointers.
 */
int OpalSnapshot_Copy_DWork(void * src, void * dst) {
   D_Work * pSrc = (D_Work*)src;
   D_Work * pDst = (D_Work*)dst;
   int size = 0, eltSize = 0;

   eltSize = sizeof(pSrc->UnitDelay_DSTATE);
   memcpy(&pDst->UnitDelay_DSTATE, &pSrc->UnitDelay_DSTATE, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Delay_DSTATE);
   memcpy(&pDst->Delay_DSTATE, &pSrc->Delay_DSTATE, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Integrator_DSTATE);
   memcpy(&pDst->Integrator_DSTATE, &pSrc->Integrator_DSTATE, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->MOV_segment9);
   memcpy(&pDst->MOV_segment9, &pSrc->MOV_segment9, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->MOV_segment9_l);
   memcpy(&pDst->MOV_segment9_l, &pSrc->MOV_segment9_l, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->MOV_segment9_c);
   memcpy(&pDst->MOV_segment9_c, &pSrc->MOV_segment9_c, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->MOV_segment9_j);
   memcpy(&pDst->MOV_segment9_j, &pSrc->MOV_segment9_j, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->MOV_segment9_k);
   memcpy(&pDst->MOV_segment9_k, &pSrc->MOV_segment9_k, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->MOV_segment9_f);
   memcpy(&pDst->MOV_segment9_f, &pSrc->MOV_segment9_f, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->MOV_segment9_i);
   memcpy(&pDst->MOV_segment9_i, &pSrc->MOV_segment9_i, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->MOV_segment9_kr);
   memcpy(&pDst->MOV_segment9_kr, &pSrc->MOV_segment9_kr, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->MOV_segment9_e);
   memcpy(&pDst->MOV_segment9_e, &pSrc->MOV_segment9_e, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->MOV_segment9_f0);
   memcpy(&pDst->MOV_segment9_f0, &pSrc->MOV_segment9_f0, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Integrator_DSTATE_a);
   memcpy(&pDst->Integrator_DSTATE_a, &pSrc->Integrator_DSTATE_a, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Delay_DSTATE_b);
   memcpy(&pDst->Delay_DSTATE_b, &pSrc->Delay_DSTATE_b, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Delay1_DSTATE);
   memcpy(&pDst->Delay1_DSTATE, &pSrc->Delay1_DSTATE, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Delay2_DSTATE);
   memcpy(&pDst->Delay2_DSTATE, &pSrc->Delay2_DSTATE, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Delay_DSTATE_f);
   memcpy(&pDst->Delay_DSTATE_f, &pSrc->Delay_DSTATE_f, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Delay1_DSTATE_a);
   memcpy(&pDst->Delay1_DSTATE_a, &pSrc->Delay1_DSTATE_a, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Delay4_DSTATE);
   memcpy(&pDst->Delay4_DSTATE, &pSrc->Delay4_DSTATE, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Delay5_DSTATE);
   memcpy(&pDst->Delay5_DSTATE, &pSrc->Delay5_DSTATE, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Delay6_DSTATE);
   memcpy(&pDst->Delay6_DSTATE, &pSrc->Delay6_DSTATE, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Delay7_DSTATE);
   memcpy(&pDst->Delay7_DSTATE, &pSrc->Delay7_DSTATE, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Delay8_DSTATE);
   memcpy(&pDst->Delay8_DSTATE, &pSrc->Delay8_DSTATE, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->UnitDelay_DSTATE_g);
   memcpy(&pDst->UnitDelay_DSTATE_g, &pSrc->UnitDelay_DSTATE_g, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Delay_DSTATE_h);
   memcpy(&pDst->Delay_DSTATE_h, &pSrc->Delay_DSTATE_h, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->MOV_segment9_c0);
   memcpy(&pDst->MOV_segment9_c0, &pSrc->MOV_segment9_c0, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->MOV_segment9_o);
   memcpy(&pDst->MOV_segment9_o, &pSrc->MOV_segment9_o, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->MOV_segment9_m);
   memcpy(&pDst->MOV_segment9_m, &pSrc->MOV_segment9_m, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->MOV_segment9_n);
   memcpy(&pDst->MOV_segment9_n, &pSrc->MOV_segment9_n, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->MOV_segment9_ea);
   memcpy(&pDst->MOV_segment9_ea, &pSrc->MOV_segment9_ea, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->MOV_segment9_mt);
   memcpy(&pDst->MOV_segment9_mt, &pSrc->MOV_segment9_mt, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->MOV_segment9_i0);
   memcpy(&pDst->MOV_segment9_i0, &pSrc->MOV_segment9_i0, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->MOV_segment9_jx);
   memcpy(&pDst->MOV_segment9_jx, &pSrc->MOV_segment9_jx, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->MOV_segment9_d);
   memcpy(&pDst->MOV_segment9_d, &pSrc->MOV_segment9_d, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->MOV_segment9_lz);
   memcpy(&pDst->MOV_segment9_lz, &pSrc->MOV_segment9_lz, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Delay_DSTATE_c);
   memcpy(&pDst->Delay_DSTATE_c, &pSrc->Delay_DSTATE_c, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Delay_DSTATE_o);
   memcpy(&pDst->Delay_DSTATE_o, &pSrc->Delay_DSTATE_o, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->DiscreteTimeIntegrator_DSTATE);
   memcpy(&pDst->DiscreteTimeIntegrator_DSTATE, &pSrc->DiscreteTimeIntegrator_DSTATE, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->DiscreteTimeIntegrator1_DSTATE);
   memcpy(&pDst->DiscreteTimeIntegrator1_DSTATE, &pSrc->DiscreteTimeIntegrator1_DSTATE, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Delay2_DSTATE_p);
   memcpy(&pDst->Delay2_DSTATE_p, &pSrc->Delay2_DSTATE_p, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Delay_DSTATE_c3);
   memcpy(&pDst->Delay_DSTATE_c3, &pSrc->Delay_DSTATE_c3, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->DiscreteTimeIntegrator_DSTATE_i);
   memcpy(&pDst->DiscreteTimeIntegrator_DSTATE_i, &pSrc->DiscreteTimeIntegrator_DSTATE_i, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->DiscreteTimeIntegrator1_DSTAT_l);
   memcpy(&pDst->DiscreteTimeIntegrator1_DSTAT_l, &pSrc->DiscreteTimeIntegrator1_DSTAT_l, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Delay_DSTATE_p);
   memcpy(&pDst->Delay_DSTATE_p, &pSrc->Delay_DSTATE_p, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Integrator_DSTATE_f);
   memcpy(&pDst->Integrator_DSTATE_f, &pSrc->Integrator_DSTATE_f, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Integrator_DSTATE_h);
   memcpy(&pDst->Integrator_DSTATE_h, &pSrc->Integrator_DSTATE_h, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->UnitDelay1_DSTATE);
   memcpy(&pDst->UnitDelay1_DSTATE, &pSrc->UnitDelay1_DSTATE, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->UnitDelay2_DSTATE);
   memcpy(&pDst->UnitDelay2_DSTATE, &pSrc->UnitDelay2_DSTATE, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Delay_DSTATE_l);
   memcpy(&pDst->Delay_DSTATE_l, &pSrc->Delay_DSTATE_l, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Integrator_DSTATE_fa);
   memcpy(&pDst->Integrator_DSTATE_fa, &pSrc->Integrator_DSTATE_fa, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->UnitDelay1_DSTATE_j);
   memcpy(&pDst->UnitDelay1_DSTATE_j, &pSrc->UnitDelay1_DSTATE_j, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->UnitDelay2_DSTATE_p);
   memcpy(&pDst->UnitDelay2_DSTATE_p, &pSrc->UnitDelay2_DSTATE_p, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Delay_DSTATE_g);
   memcpy(&pDst->Delay_DSTATE_g, &pSrc->Delay_DSTATE_g, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Integrator_DSTATE_j);
   memcpy(&pDst->Integrator_DSTATE_j, &pSrc->Integrator_DSTATE_j, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->UnitDelay1_DSTATE_e);
   memcpy(&pDst->UnitDelay1_DSTATE_e, &pSrc->UnitDelay1_DSTATE_e, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->UnitDelay2_DSTATE_c);
   memcpy(&pDst->UnitDelay2_DSTATE_c, &pSrc->UnitDelay2_DSTATE_c, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Delay_DSTATE_cx);
   memcpy(&pDst->Delay_DSTATE_cx, &pSrc->Delay_DSTATE_cx, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Integrator_DSTATE_jv);
   memcpy(&pDst->Integrator_DSTATE_jv, &pSrc->Integrator_DSTATE_jv, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->UnitDelay1_DSTATE_d);
   memcpy(&pDst->UnitDelay1_DSTATE_d, &pSrc->UnitDelay1_DSTATE_d, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->UnitDelay2_DSTATE_k);
   memcpy(&pDst->UnitDelay2_DSTATE_k, &pSrc->UnitDelay2_DSTATE_k, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Delay_DSTATE_a);
   memcpy(&pDst->Delay_DSTATE_a, &pSrc->Delay_DSTATE_a, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Integrator_DSTATE_g);
   memcpy(&pDst->Integrator_DSTATE_g, &pSrc->Integrator_DSTATE_g, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->UnitDelay1_DSTATE_i);
   memcpy(&pDst->UnitDelay1_DSTATE_i, &pSrc->UnitDelay1_DSTATE_i, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->UnitDelay2_DSTATE_pc);
   memcpy(&pDst->UnitDelay2_DSTATE_pc, &pSrc->UnitDelay2_DSTATE_pc, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Delay_DSTATE_ol);
   memcpy(&pDst->Delay_DSTATE_ol, &pSrc->Delay_DSTATE_ol, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Integrator_DSTATE_l);
   memcpy(&pDst->Integrator_DSTATE_l, &pSrc->Integrator_DSTATE_l, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->UnitDelay1_DSTATE_k);
   memcpy(&pDst->UnitDelay1_DSTATE_k, &pSrc->UnitDelay1_DSTATE_k, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->UnitDelay2_DSTATE_d);
   memcpy(&pDst->UnitDelay2_DSTATE_d, &pSrc->UnitDelay2_DSTATE_d, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Delay_DSTATE_m);
   memcpy(&pDst->Delay_DSTATE_m, &pSrc->Delay_DSTATE_m, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->SFunction_PreviousInput);
   memcpy(&pDst->SFunction_PreviousInput, &pSrc->SFunction_PreviousInput, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->lastSin);
   memcpy(&pDst->lastSin, &pSrc->lastSin, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->lastCos);
   memcpy(&pDst->lastCos, &pSrc->lastCos, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->lastSin_f);
   memcpy(&pDst->lastSin_f, &pSrc->lastSin_f, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->lastCos_m);
   memcpy(&pDst->lastCos_m, &pSrc->lastCos_m, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->lastSin_k);
   memcpy(&pDst->lastSin_k, &pSrc->lastSin_k, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->lastCos_i);
   memcpy(&pDst->lastCos_i, &pSrc->lastCos_i, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->RTEConversion1_RWORK);
   memcpy(&pDst->RTEConversion1_RWORK, &pSrc->RTEConversion1_RWORK, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->RTEConversion1_RWORK_c);
   memcpy(&pDst->RTEConversion1_RWORK_c, &pSrc->RTEConversion1_RWORK_c, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->TransportDelay_RWORK);
   memcpy(&pDst->TransportDelay_RWORK, &pSrc->TransportDelay_RWORK, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->TransportDelay_RWORK_d);
   memcpy(&pDst->TransportDelay_RWORK_d, &pSrc->TransportDelay_RWORK_d, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->TransportDelay_RWORK_a);
   memcpy(&pDst->TransportDelay_RWORK_a, &pSrc->TransportDelay_RWORK_a, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->TransportDelay_RWORK_f);
   memcpy(&pDst->TransportDelay_RWORK_f, &pSrc->TransportDelay_RWORK_f, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->TransportDelay_RWORK_j);
   memcpy(&pDst->TransportDelay_RWORK_j, &pSrc->TransportDelay_RWORK_j, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->TransportDelay_RWORK_p);
   memcpy(&pDst->TransportDelay_RWORK_p, &pSrc->TransportDelay_RWORK_p, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->systemEnable);
   memcpy(&pDst->systemEnable, &pSrc->systemEnable, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->systemEnable_n);
   memcpy(&pDst->systemEnable_n, &pSrc->systemEnable_n, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->systemEnable_j);
   memcpy(&pDst->systemEnable_j, &pSrc->systemEnable_j, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->clockTickCounter);
   memcpy(&pDst->clockTickCounter, &pSrc->clockTickCounter, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->CircBufIdx);
   memcpy(&pDst->CircBufIdx, &pSrc->CircBufIdx, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->CircBufIdx_d);
   memcpy(&pDst->CircBufIdx_d, &pSrc->CircBufIdx_d, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->CircBufIdx_a);
   memcpy(&pDst->CircBufIdx_a, &pSrc->CircBufIdx_a, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->CircBufIdx_o);
   memcpy(&pDst->CircBufIdx_o, &pSrc->CircBufIdx_o, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->CircBufIdx_g);
   memcpy(&pDst->CircBufIdx_g, &pSrc->CircBufIdx_g, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Integrator1_IWORK);
   memcpy(&pDst->Integrator1_IWORK, &pSrc->Integrator1_IWORK, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->SFunction_IWORK);
   memcpy(&pDst->SFunction_IWORK, &pSrc->SFunction_IWORK, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Integrator2_IWORK);
   memcpy(&pDst->Integrator2_IWORK, &pSrc->Integrator2_IWORK, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->TransportDelay_IWORK);
   memcpy(&pDst->TransportDelay_IWORK, &pSrc->TransportDelay_IWORK, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->TransportDelay_IWORK_j);
   memcpy(&pDst->TransportDelay_IWORK_j, &pSrc->TransportDelay_IWORK_j, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->TransportDelay_IWORK_b);
   memcpy(&pDst->TransportDelay_IWORK_b, &pSrc->TransportDelay_IWORK_b, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->TransportDelay_IWORK_k);
   memcpy(&pDst->TransportDelay_IWORK_k, &pSrc->TransportDelay_IWORK_k, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->TransportDelay_IWORK_l);
   memcpy(&pDst->TransportDelay_IWORK_l, &pSrc->TransportDelay_IWORK_l, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->TransportDelay_IWORK_a);
   memcpy(&pDst->TransportDelay_IWORK_a, &pSrc->TransportDelay_IWORK_a, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Integrator_SYSTEM_ENABLE);
   memcpy(&pDst->Integrator_SYSTEM_ENABLE, &pSrc->Integrator_SYSTEM_ENABLE, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Integrator_SYSTEM_ENABLE_p);
   memcpy(&pDst->Integrator_SYSTEM_ENABLE_p, &pSrc->Integrator_SYSTEM_ENABLE_p, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Integrator_SYSTEM_ENABLE_i);
   memcpy(&pDst->Integrator_SYSTEM_ENABLE_i, &pSrc->Integrator_SYSTEM_ENABLE_i, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Integrator_SYSTEM_ENABLE_h);
   memcpy(&pDst->Integrator_SYSTEM_ENABLE_h, &pSrc->Integrator_SYSTEM_ENABLE_h, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Integrator_SYSTEM_ENABLE_iy);
   memcpy(&pDst->Integrator_SYSTEM_ENABLE_iy, &pSrc->Integrator_SYSTEM_ENABLE_iy, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Integrator_SYSTEM_ENABLE_a);
   memcpy(&pDst->Integrator_SYSTEM_ENABLE_a, &pSrc->Integrator_SYSTEM_ENABLE_a, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Initial_FirstOutputTime);
   memcpy(&pDst->Initial_FirstOutputTime, &pSrc->Initial_FirstOutputTime, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Initial_FirstOutputTime_i);
   memcpy(&pDst->Initial_FirstOutputTime_i, &pSrc->Initial_FirstOutputTime_i, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Initial_FirstOutputTime_ic);
   memcpy(&pDst->Initial_FirstOutputTime_ic, &pSrc->Initial_FirstOutputTime_ic, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Tail_f);
   memcpy(&pDst->Tail_f, &pSrc->Tail_f, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Tail);
   memcpy(&pDst->Tail, &pSrc->Tail, eltSize);
   size += eltSize;

   return size;
}

/**
 * This function is generated by RT-LAB during model compilation (at 'generation' step).
 * This function copies data from a raw buffer (src) 
 * to an RT_MODEL structure(dst), ignoring pointers.
 * Note that sub-structures are copied in one operation since they cannot contain pointers.
 */
int OpalSnapshot_Copy_TimingData(void * src, void * dst) {
   RT_MODEL	tmpBuffer;
   RT_MODEL * pSrc = &tmpBuffer;
   RT_MODEL * pDst = (RT_MODEL *)dst;
   int TimingSize = sizeof(tmpBuffer.Timing);
   int size = 0, eltSize = 0;

   memcpy(&tmpBuffer.Timing, src, TimingSize);

   eltSize = sizeof(pSrc->Timing.clockTick0);
   memcpy(&pDst->Timing.clockTick0, &pSrc->Timing.clockTick0, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Timing.clockTick1);
   memcpy(&pDst->Timing.clockTick1, &pSrc->Timing.clockTick1, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Timing.clockTickH0);
   memcpy(&pDst->Timing.clockTickH0, &pSrc->Timing.clockTickH0, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Timing.clockTickH1);
   memcpy(&pDst->Timing.clockTickH1, &pSrc->Timing.clockTickH1, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Timing.tFinal);
   memcpy(&pDst->Timing.tFinal, &pSrc->Timing.tFinal, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Timing.firstInitCondFlag);
   memcpy(&pDst->Timing.firstInitCondFlag, &pSrc->Timing.firstInitCondFlag, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Timing.offsetTimesArray);
   memcpy(&pDst->Timing.offsetTimesArray, &pSrc->Timing.offsetTimesArray, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Timing.perTaskSampleHitsArray);
   memcpy(&pDst->Timing.perTaskSampleHitsArray, &pSrc->Timing.perTaskSampleHitsArray, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Timing.sampleHitArray);
   memcpy(&pDst->Timing.sampleHitArray, &pSrc->Timing.sampleHitArray, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Timing.sampleTimesArray);
   memcpy(&pDst->Timing.sampleTimesArray, &pSrc->Timing.sampleTimesArray, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Timing.sampleTimeTaskIDArray);
   memcpy(&pDst->Timing.sampleTimeTaskIDArray, &pSrc->Timing.sampleTimeTaskIDArray, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Timing.simTimeStep);
   memcpy(&pDst->Timing.simTimeStep, &pSrc->Timing.simTimeStep, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Timing.tStart);
   memcpy(&pDst->Timing.tStart, &pSrc->Timing.tStart, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Timing.stepSize);
   memcpy(&pDst->Timing.stepSize, &pSrc->Timing.stepSize, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Timing.stepSize0);
   memcpy(&pDst->Timing.stepSize0, &pSrc->Timing.stepSize0, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Timing.stepSize1);
   memcpy(&pDst->Timing.stepSize1, &pSrc->Timing.stepSize1, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Timing.stopRequestedFlag);
   memcpy(&pDst->Timing.stopRequestedFlag, &pSrc->Timing.stopRequestedFlag, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Timing.tArray);
   memcpy(&pDst->Timing.tArray, &pSrc->Timing.tArray, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->Timing.timeOfLastOutput);
   memcpy(&pDst->Timing.timeOfLastOutput, &pSrc->Timing.timeOfLastOutput, eltSize);
   size += eltSize;

   return size;
}

/**
 * This function is generated by RT-LAB during model compilation (at 'generation' step).
 * This function copies data from a raw buffer (src) 
 * to an RT_MODEL structure(dst), ignoring pointers.
 * Note that ingData must not be copied since it contains pointers.
 */
int OpalSnapshot_Copy_ModelData(void * src, void * dst) {
   RT_MODEL	tmpBuffer;
   RT_MODEL * pSrc = &tmpBuffer;
   RT_MODEL * pDst = (RT_MODEL *)dst;
   int ModelDataSize = sizeof(tmpBuffer.ModelData);
   int size = 0, eltSize = 0;

   memcpy(&tmpBuffer.ModelData, src, ModelDataSize);

   eltSize = sizeof(pSrc->ModelData.CTOutputIncnstWithState);
   memcpy(&pDst->ModelData.CTOutputIncnstWithState, &pSrc->ModelData.CTOutputIncnstWithState, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->ModelData.derivCacheNeedsReset);
   memcpy(&pDst->ModelData.derivCacheNeedsReset, &pSrc->ModelData.derivCacheNeedsReset, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->ModelData.odeF);
   memcpy(&pDst->ModelData.odeF, &pSrc->ModelData.odeF, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->ModelData.odeY);
   memcpy(&pDst->ModelData.odeY, &pSrc->ModelData.odeY, eltSize);
   size += eltSize;

   eltSize = sizeof(pSrc->ModelData.zCCacheNeedsReset);
   memcpy(&pDst->ModelData.zCCacheNeedsReset, &pSrc->ModelData.zCCacheNeedsReset, eltSize);
   size += eltSize;

   return size;
}

