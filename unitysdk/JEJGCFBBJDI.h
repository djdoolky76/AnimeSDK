#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JEJGCFBBJDI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JEJGCFBBJDI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JEJGCFBBJDI_KAABCLGOGDF_OFFSET UNITYSDK_OFFSET(0x754F10)
#define JEJGCFBBJDI_KDGGGNKFLOE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JEJGCFBBJDI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BAF5EB0)
#define JEJGCFBBJDI_OBGJBIOENLN_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define JEJGCFBBJDI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JEJGCFBBJDI_TypeDefinitionIndex = 14300;

struct alignas(4) JEJGCFBBJDI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEJGCFBBJDI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JEJGCFBBJDI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 KDGGGNKFLOE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEJGCFBBJDI_KDGGGNKFLOE_OFFSET))(this);
	}

	::System::String* OBGJBIOENLN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEJGCFBBJDI_OBGJBIOENLN_OFFSET))(this);
	}

	/*
	static ::JEJGCFBBJDI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JEJGCFBBJDI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JEJGCFBBJDI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* KAABCLGOGDF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEJGCFBBJDI_KAABCLGOGDF_OFFSET))(this);
	}

	/*
	::JEJGCFBBJDI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JEJGCFBBJDI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JEJGCFBBJDI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
