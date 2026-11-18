#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HCNIKHKNBHM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HCNIKHKNBHM_BONLNNDFPDH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HCNIKHKNBHM_EENLNNFKBOP_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define HCNIKHKNBHM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HCNIKHKNBHM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HCNIKHKNBHM_TypeDefinitionIndex = 14778;

struct alignas(4) HCNIKHKNBHM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNIKHKNBHM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCNIKHKNBHM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::HCNIKHKNBHM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HCNIKHKNBHM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCNIKHKNBHM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* EENLNNFKBOP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNIKHKNBHM_EENLNNFKBOP_OFFSET))(this);
	}

	::System::Int32 BONLNNDFPDH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNIKHKNBHM_BONLNNDFPDH_OFFSET))(this);
	}
};
