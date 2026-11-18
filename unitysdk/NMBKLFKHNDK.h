#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NMBKLFKHNDK_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NMBKLFKHNDK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NMBKLFKHNDK_DFFCHENIDPI_OFFSET UNITYSDK_OFFSET(0x754920)
#define NMBKLFKHNDK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NMBKLFKHNDK_HPFFFMHAPPH_OFFSET UNITYSDK_OFFSET(0x754F10)
#define NMBKLFKHNDK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NMBKLFKHNDK_TypeDefinitionIndex = 15428;

struct alignas(4) NMBKLFKHNDK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMBKLFKHNDK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NMBKLFKHNDK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 DFFCHENIDPI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMBKLFKHNDK_DFFCHENIDPI_OFFSET))(this);
	}

	/*
	::NMBKLFKHNDK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NMBKLFKHNDK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NMBKLFKHNDK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMBKLFKHNDK_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* HPFFFMHAPPH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMBKLFKHNDK_HPFFFMHAPPH_OFFSET))(this);
	}
};
