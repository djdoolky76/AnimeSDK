#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Struct.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define DGDELGEEGCE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DGDELGEEGCE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DGDELGEEGCE_GJGFPDAHKLF_OFFSET UNITYSDK_OFFSET(0x7626A0)
#define DGDELGEEGCE_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x762670)
#define DGDELGEEGCE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DGDELGEEGCE_TypeDefinitionIndex = 11041;

struct alignas(4) DGDELGEEGCE
{
	::FlatBuffers::Struct KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDELGEEGCE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DGDELGEEGCE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDELGEEGCE_NFKFHJBEPGD_OFFSET))(this);
	}

	/*
	::DGDELGEEGCE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DGDELGEEGCE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DGDELGEEGCE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GJGFPDAHKLF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDELGEEGCE_GJGFPDAHKLF_OFFSET))(this);
	}
};
