#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define GJLMEDJDLJM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GJLMEDJDLJM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GJLMEDJDLJM_BLLOPKJDOBE_OFFSET UNITYSDK_OFFSET(0x755D20)
#define GJLMEDJDLJM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GJLMEDJDLJM_PIPBPLEIPFK_OFFSET UNITYSDK_OFFSET(0x756B90)
#define GJLMEDJDLJM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GJLMEDJDLJM_TypeDefinitionIndex = 17062;

struct alignas(4) GJLMEDJDLJM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJLMEDJDLJM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GJLMEDJDLJM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::GJLMEDJDLJM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GJLMEDJDLJM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GJLMEDJDLJM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 BLLOPKJDOBE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJLMEDJDLJM_BLLOPKJDOBE_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJLMEDJDLJM_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 PIPBPLEIPFK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJLMEDJDLJM_PIPBPLEIPFK_OFFSET))(this);
	}
};
