#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Struct.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define CEOHBHNOIAO_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x7626A0)
#define CEOHBHNOIAO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CEOHBHNOIAO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CEOHBHNOIAO_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x762670)
#define CEOHBHNOIAO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CEOHBHNOIAO_TypeDefinitionIndex = 13055;

struct alignas(4) CEOHBHNOIAO
{
	::FlatBuffers::Struct KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOHBHNOIAO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CEOHBHNOIAO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOHBHNOIAO_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOHBHNOIAO_HKELPCLHLEC_OFFSET))(this);
	}

	/*
	::CEOHBHNOIAO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CEOHBHNOIAO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CEOHBHNOIAO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
