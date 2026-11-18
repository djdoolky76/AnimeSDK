#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define IMJFNCAMMFB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IMJFNCAMMFB_FFBPHOEEKHI_OFFSET UNITYSDK_OFFSET(0x756B90)
#define IMJFNCAMMFB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IMJFNCAMMFB_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define IMJFNCAMMFB_NMEAODJGLFK_OFFSET UNITYSDK_OFFSET(0x755D20)
#define IMJFNCAMMFB_NNKHCJHBKEO_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IMJFNCAMMFB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B88E4C0)
#define IMJFNCAMMFB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IMJFNCAMMFB_TypeDefinitionIndex = 14199;

struct alignas(4) IMJFNCAMMFB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJFNCAMMFB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IMJFNCAMMFB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::IMJFNCAMMFB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IMJFNCAMMFB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IMJFNCAMMFB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJFNCAMMFB_IFDIOIOCGDP_OFFSET))(this);
	}

	/*
	::IMJFNCAMMFB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IMJFNCAMMFB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IMJFNCAMMFB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NMEAODJGLFK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJFNCAMMFB_NMEAODJGLFK_OFFSET))(this);
	}

	::System::Int32 FFBPHOEEKHI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJFNCAMMFB_FFBPHOEEKHI_OFFSET))(this);
	}

	::System::Int32 NNKHCJHBKEO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJFNCAMMFB_NNKHCJHBKEO_OFFSET))(this);
	}
};
