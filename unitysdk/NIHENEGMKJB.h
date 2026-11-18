#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NIHENEGMKJB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NIHENEGMKJB_CDKFDFLAAKE_OFFSET UNITYSDK_OFFSET(0x754B50)
#define NIHENEGMKJB_CEGOBIIJJFP_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NIHENEGMKJB_CJCPHBFKFMI_OFFSET UNITYSDK_OFFSET(0x755A00)
#define NIHENEGMKJB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NIHENEGMKJB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NIHENEGMKJB_TypeDefinitionIndex = 16438;

struct alignas(4) NIHENEGMKJB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHENEGMKJB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NIHENEGMKJB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 CEGOBIIJJFP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHENEGMKJB_CEGOBIIJJFP_OFFSET))(this);
	}

	::System::Int32 CDKFDFLAAKE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHENEGMKJB_CDKFDFLAAKE_OFFSET))(this);
	}

	/*
	::NIHENEGMKJB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NIHENEGMKJB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NIHENEGMKJB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* CJCPHBFKFMI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHENEGMKJB_CJCPHBFKFMI_OFFSET))(this);
	}
};
