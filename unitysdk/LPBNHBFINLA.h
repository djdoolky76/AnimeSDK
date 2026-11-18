#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define LPBNHBFINLA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LPBNHBFINLA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LPBNHBFINLA_HDDENLNIPMA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LPBNHBFINLA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LPBNHBFINLA_TypeDefinitionIndex = 17304;

struct alignas(4) LPBNHBFINLA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPBNHBFINLA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LPBNHBFINLA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HDDENLNIPMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPBNHBFINLA_HDDENLNIPMA_OFFSET))(this);
	}

	/*
	::LPBNHBFINLA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LPBNHBFINLA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LPBNHBFINLA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
