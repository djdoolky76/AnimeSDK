#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HCLPCKLILLC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HCLPCKLILLC_GBDHPMDIJDK_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define HCLPCKLILLC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HCLPCKLILLC_MFPMIFLLCAJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HCLPCKLILLC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x16656E20)
#define HCLPCKLILLC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HCLPCKLILLC_TypeDefinitionIndex = 14669;

struct alignas(4) HCLPCKLILLC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPCKLILLC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCLPCKLILLC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 MFPMIFLLCAJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPCKLILLC_MFPMIFLLCAJ_OFFSET))(this);
	}

	/*
	static ::HCLPCKLILLC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HCLPCKLILLC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HCLPCKLILLC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::HCLPCKLILLC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HCLPCKLILLC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCLPCKLILLC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* GBDHPMDIJDK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPCKLILLC_GBDHPMDIJDK_OFFSET))(this);
	}
};
