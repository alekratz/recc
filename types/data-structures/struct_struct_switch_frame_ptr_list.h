#ifndef __TYPES_DATA_STRUCTURES_struct_struct_switch_frame_ptr_list_H__
#define __TYPES_DATA_STRUCTURES_struct_struct_switch_frame_ptr_list_H__
/*
	Copyright 2015 Robert Elder Software Inc.  All rights reserved.

	This software is not currently available under any license, and unauthorized use
	or copying is not permitted.

	This software will likely be available under a common open source license in the
	near future.  Licensing is currently pending feedback from a lawyer.  If you have
	an opinion on this subject you can send it to recc [at] robertelder.org.

	This program comes with ABSOLUTELY NO WARRANTY.  In no event shall Robert Elder
	Software Inc. be liable for incidental or consequential damages in connection with
	use of this software.
*/

#ifndef __BINARY_EXPONENTIAL_BUFFER__H__DEFINED__
#include "../../data-structures/binary_exponential_buffer.h"
#endif
#ifndef __TYPES_CODE_GENERATOR_struct_switch_frame_H__
#include "../../types/code_generator/struct_switch_frame.h"
#endif

struct struct_switch_frame_ptr_list{
	struct binary_exponential_buffer buffer;
};

#endif