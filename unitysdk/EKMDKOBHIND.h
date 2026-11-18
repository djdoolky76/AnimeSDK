#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EKMDKOBHIND_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EKMDKOBHIND_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EKMDKOBHIND_GAPCNGIABLO_OFFSET UNITYSDK_OFFSET(0x754B50)
#define EKMDKOBHIND_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EKMDKOBHIND_NGKOPBCHFOP_OFFSET UNITYSDK_OFFSET(0x754F10)
#define EKMDKOBHIND_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19F4B570)
#define EKMDKOBHIND___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EKMDKOBHIND_TypeDefinitionIndex = 11457;

struct alignas(4) EKMDKOBHIND
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKMDKOBHIND_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EKMDKOBHIND___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::EKMDKOBHIND OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EKMDKOBHIND(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EKMDKOBHIND_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::EKMDKOBHIND BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EKMDKOBHIND(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EKMDKOBHIND_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GAPCNGIABLO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKMDKOBHIND_GAPCNGIABLO_OFFSET))(this);
	}

	::System::String* NGKOPBCHFOP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKMDKOBHIND_NGKOPBCHFOP_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKMDKOBHIND_ACOEONABOJL_OFFSET))(this);
	}
};
