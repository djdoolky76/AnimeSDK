#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define HJODHHBGFAN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HJODHHBGFAN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HJODHHBGFAN_DGPDNAONAJD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define HJODHHBGFAN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HJODHHBGFAN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HJODHHBGFAN_TypeDefinitionIndex = 14030;

struct alignas(4) HJODHHBGFAN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJODHHBGFAN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HJODHHBGFAN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::HJODHHBGFAN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HJODHHBGFAN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HJODHHBGFAN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJODHHBGFAN_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 DGPDNAONAJD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJODHHBGFAN_DGPDNAONAJD_OFFSET))(this);
	}
};
