#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JGONMKGECKB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JGONMKGECKB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JGONMKGECKB_BHMMKDGCLGB_OFFSET UNITYSDK_OFFSET(0x755D20)
#define JGONMKGECKB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JGONMKGECKB_MCNDAAJPINP_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define JGONMKGECKB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B4F7BA0)
#define JGONMKGECKB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JGONMKGECKB_TypeDefinitionIndex = 9653;

struct alignas(4) JGONMKGECKB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGONMKGECKB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JGONMKGECKB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::JGONMKGECKB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JGONMKGECKB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JGONMKGECKB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* MCNDAAJPINP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGONMKGECKB_MCNDAAJPINP_OFFSET))(this);
	}

	::System::Int32 BHMMKDGCLGB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGONMKGECKB_BHMMKDGCLGB_OFFSET))(this);
	}

	/*
	static ::JGONMKGECKB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JGONMKGECKB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JGONMKGECKB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGONMKGECKB_ACOEONABOJL_OFFSET))(this);
	}
};
