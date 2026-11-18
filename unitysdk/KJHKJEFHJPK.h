#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KJHKJEFHJPK_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KJHKJEFHJPK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KJHKJEFHJPK_CDBFECJDJAE_OFFSET UNITYSDK_OFFSET(0x755D20)
#define KJHKJEFHJPK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KJHKJEFHJPK_IBJOKOCBFKK_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define KJHKJEFHJPK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KJHKJEFHJPK_TypeDefinitionIndex = 14765;

struct alignas(4) KJHKJEFHJPK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHKJEFHJPK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KJHKJEFHJPK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* IBJOKOCBFKK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHKJEFHJPK_IBJOKOCBFKK_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHKJEFHJPK_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::KJHKJEFHJPK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KJHKJEFHJPK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KJHKJEFHJPK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 CDBFECJDJAE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHKJEFHJPK_CDBFECJDJAE_OFFSET))(this);
	}
};
