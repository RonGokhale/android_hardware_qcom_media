/*--------------------------------------------------------------------------
Copyright (c) 2012, The Linux Foundation. All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    * Neither the name of The Linux Foundation nor
      the names of its contributors may be used to endorse or promote
      products derived from this software without specific prior written
      permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NON-INFRINGEMENT ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
--------------------------------------------------------------------------*/


#ifndef H265_UTILS_H
#define H265_UTILS_H

/*========================================================================

                                 O p e n M M
         U t i l i t i e s   a n d   H e l p e r   R o u t i n e s

*//** @file H265_Utils.h
This module contains H264 video decoder utilities and helper routines.

*//*====================================================================== */

/* =======================================================================

                     INCLUDE FILES FOR MODULE

========================================================================== */
#include <stdio.h>
#include "Map.h"
#include "qtypes.h"
#include "OMX_Core.h"
#include "OMX_QCOMExtns.h"


class H265_Utils
{
public:
    H265_Utils();
    ~H265_Utils();
	

    void initialize_frame_checking_environment();
    bool isNewFrame(OMX_BUFFERHEADERTYPE *p_buf_hdr,
                    OMX_IN OMX_U32 size_of_nal_length_field,
                    OMX_OUT OMX_BOOL &isNewFrame);
    uint32 nalu_type;

private:
	
    bool              m_forceToStichNextNAL;
	bool              m_au_data;
};

#endif /* H265_UTILS_H */
