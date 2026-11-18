#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define PMPFOMALOMD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PMPFOMALOMD_FJPGCNGHHCC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PMPFOMALOMD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PMPFOMALOMD_GLCPLJOLBKP_OFFSET UNITYSDK_OFFSET(0x754B50)
#define PMPFOMALOMD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PMPFOMALOMD_TypeDefinitionIndex = 12992;

struct alignas(4) PMPFOMALOMD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPFOMALOMD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PMPFOMALOMD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::PMPFOMALOMD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PMPFOMALOMD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PMPFOMALOMD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 FJPGCNGHHCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPFOMALOMD_FJPGCNGHHCC_OFFSET))(this);
	}

	::System::Int32 GLCPLJOLBKP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPFOMALOMD_GLCPLJOLBKP_OFFSET))(this);
	}
};
