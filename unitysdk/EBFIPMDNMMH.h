#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Struct.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define EBFIPMDNMMH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EBFIPMDNMMH_CIKMMEFMLIE_OFFSET UNITYSDK_OFFSET(0x7626A0)
#define EBFIPMDNMMH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EBFIPMDNMMH_PFICLKAEIMC_OFFSET UNITYSDK_OFFSET(0x762670)
#define EBFIPMDNMMH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EBFIPMDNMMH_TypeDefinitionIndex = 12176;

struct alignas(4) EBFIPMDNMMH
{
	::FlatBuffers::Struct KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBFIPMDNMMH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBFIPMDNMMH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 PFICLKAEIMC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBFIPMDNMMH_PFICLKAEIMC_OFFSET))(this);
	}

	/*
	::EBFIPMDNMMH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EBFIPMDNMMH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBFIPMDNMMH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 CIKMMEFMLIE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBFIPMDNMMH_CIKMMEFMLIE_OFFSET))(this);
	}
};
