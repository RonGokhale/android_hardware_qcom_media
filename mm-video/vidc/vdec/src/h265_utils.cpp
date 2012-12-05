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

/*========================================================================

                      O p e n M M
         V i d e o   U t i l i t i e s

*//** @file VideoUtils.cpp
  This module contains utilities and helper routines.

@par EXTERNALIZED FUNCTIONS

@par INITIALIZATION AND SEQUENCING REQUIREMENTS
  (none)

*//*====================================================================== */

/* =======================================================================

                     INCLUDE FILES FOR MODULE

========================================================================== */
#include "h265_utils.h"
#include "omx_vdec.h"
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <sys/time.h>
#ifdef _ANDROID_
#include <cutils/properties.h>
#endif

/* =======================================================================

                DEFINITIONS AND DECLARATIONS FOR MODULE

This section contains definitions for constants, macros, types, variables
and other items needed by this module.

========================================================================== */

H265_Utils::H265_Utils()
{
  initialize_frame_checking_environment();
}

H265_Utils::~H265_Utils()
{
}

/***********************************************************************/
/*
FUNCTION:
  H265_Utils::initialize_frame_checking_environment

DESCRIPTION:
  Extract RBSP data from a NAL

INPUT/OUTPUT PARAMETERS:
  None

RETURN VALUE:
  boolean

SIDE EFFECTS:
  None.
*/
/***********************************************************************/
void H265_Utils::initialize_frame_checking_environment()
{
  m_forceToStichNextNAL = false;
  m_au_data = false;
  nalu_type = 0;
}

/*===========================================================================
FUNCTION:
  H265_Utils::iSNewFrame

DESCRIPTION:
  Returns true if NAL parsing successfull otherwise false.

INPUT/OUTPUT PARAMETERS:
  <In>
    buffer : buffer containing start code or nal length + NAL units
    buffer_length : the length of the NAL buffer
    start_code : If true, start code is detected,
                 otherwise size nal length is detected
    size_of_nal_length_field: size of nal length field
  <out>
    isNewFrame: true if the NAL belongs to a differenet frame
                false if the NAL belongs to a current frame

RETURN VALUE:
  boolean  true, if nal parsing is successful
           false, if the nal parsing has errors

SIDE EFFECTS:
  None.
===========================================================================*/
bool H265_Utils::isNewFrame(OMX_BUFFERHEADERTYPE *p_buf_hdr,
                            OMX_IN OMX_U32 size_of_nal_length_field,
                            OMX_OUT OMX_BOOL &isNewFrame)
{
    return true;
}


