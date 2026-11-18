#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FMNBFBCJEOC_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FMNBFBCJEOC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FMNBFBCJEOC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FMNBFBCJEOC_IPJONOOFHFO_OFFSET UNITYSDK_OFFSET(0x754B50)
#define FMNBFBCJEOC_NPAFPHDAPMI_OFFSET UNITYSDK_OFFSET(0x754F10)
#define FMNBFBCJEOC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FMNBFBCJEOC_TypeDefinitionIndex = 15087;

struct alignas(4) FMNBFBCJEOC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMNBFBCJEOC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMNBFBCJEOC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMNBFBCJEOC_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 IPJONOOFHFO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMNBFBCJEOC_IPJONOOFHFO_OFFSET))(this);
	}

	::System::String* NPAFPHDAPMI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMNBFBCJEOC_NPAFPHDAPMI_OFFSET))(this);
	}

	/*
	::FMNBFBCJEOC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FMNBFBCJEOC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMNBFBCJEOC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
