#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/GPJMHAAEIKO.h"
#include "unitysdk/NCJLKIIGPIC.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define IELJMPHBOEN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IELJMPHBOEN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IELJMPHBOEN_ELJJPCDMICI_OFFSET UNITYSDK_OFFSET(0x78A030)
#define IELJMPHBOEN_FCICGEALCFA_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define IELJMPHBOEN_GEBPCKCOGBK_OFFSET UNITYSDK_OFFSET(0x7FD230)
#define IELJMPHBOEN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IELJMPHBOEN_LDIENHMALPL_OFFSET UNITYSDK_OFFSET(0x757290)
#define IELJMPHBOEN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A5D86D0)
#define IELJMPHBOEN_OPCMIDJNPDH_OFFSET UNITYSDK_OFFSET(0x7FD280)
#define IELJMPHBOEN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IELJMPHBOEN_TypeDefinitionIndex = 14934;

struct alignas(4) IELJMPHBOEN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IELJMPHBOEN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IELJMPHBOEN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::GPJMHAAEIKO GEBPCKCOGBK()
	{
		return ((::GPJMHAAEIKO(*)(::PVOID))((::PBYTE)hIl2Cpp + IELJMPHBOEN_GEBPCKCOGBK_OFFSET))(this);
	}

	::System::String* LDIENHMALPL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IELJMPHBOEN_LDIENHMALPL_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IELJMPHBOEN_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* FCICGEALCFA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IELJMPHBOEN_FCICGEALCFA_OFFSET))(this);
	}

	/*
	::IELJMPHBOEN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IELJMPHBOEN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IELJMPHBOEN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::IELJMPHBOEN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IELJMPHBOEN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IELJMPHBOEN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::NCJLKIIGPIC OPCMIDJNPDH()
	{
		return ((::NCJLKIIGPIC(*)(::PVOID))((::PBYTE)hIl2Cpp + IELJMPHBOEN_OPCMIDJNPDH_OFFSET))(this);
	}

	::System::Single ELJJPCDMICI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IELJMPHBOEN_ELJJPCDMICI_OFFSET))(this);
	}
};
