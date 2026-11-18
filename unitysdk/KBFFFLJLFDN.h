#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KBFFFLJLFDN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KBFFFLJLFDN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KBFFFLJLFDN_CJKKGHDDJIN_OFFSET UNITYSDK_OFFSET(0x754F10)
#define KBFFFLJLFDN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KBFFFLJLFDN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x152FD300)
#define KBFFFLJLFDN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KBFFFLJLFDN_TypeDefinitionIndex = 14002;

struct alignas(4) KBFFFLJLFDN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBFFFLJLFDN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KBFFFLJLFDN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KBFFFLJLFDN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KBFFFLJLFDN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KBFFFLJLFDN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::KBFFFLJLFDN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KBFFFLJLFDN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KBFFFLJLFDN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBFFFLJLFDN_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* CJKKGHDDJIN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBFFFLJLFDN_CJKKGHDDJIN_OFFSET))(this);
	}
};
