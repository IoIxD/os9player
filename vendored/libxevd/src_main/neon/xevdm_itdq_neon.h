/* Copyright (c) 2020, Samsung Electronics Co., Ltd.
   All Rights Reserved. */
/*
    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions are met:

    - Redistributions of source code must retain the above copyright notice,
    this list of conditions and the following disclaimer.

    - Redistributions in binary form must reproduce the above copyright notice,
    this list of conditions and the following disclaimer in the documentation
    and/or other materials provided with the distribution.

    - Neither the name of the copyright owner, nor the names of its contributors
    may be used to endorse or promote products derived from this software
    without specific prior written permission.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
    AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
    IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
    ARE DISCLAIMED.IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
    LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
    CONSEQUENTIAL DAMAGES(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
    SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
    INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
    CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
    POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef _XEVDM_ITDQ_NEON_H_
#define _XEVDM_ITDQ_NEON_H_

#include "xevdm_itdq.h"

#if ARM_NEON
extern XEVD_ITX xevdm_tbl_itx_neon[MAX_TR_LOG2];
void xevdm_itx_pb4b_neon (void * src, void * dst, int shift, int line);
void xevdm_itx_pb8b_neon (void * src, void * dst, int shift, int line);
void xevdm_itx_pb16b_neon(void * src, void * dst, int shift, int line);
void xevdm_itx_pb32b_neon(void * src, void * dst, int shift, int line);
void xevdm_itx_pb64b_neon(void * src, void * dst, int shift, int line);

extern INV_TRANS *xevdm_itrans_map_tbl_neon[16][5];
#endif /* ARM_NEON */

#endif /*_XEVDM_ITDQ_NEON_H_*/
