#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define JIDIJONEKIN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JIDIJONEKIN_CAGHGJPOMNL_OFFSET UNITYSDK_OFFSET(0x754B50)
#define JIDIJONEKIN_FNOHFKFAIHN_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define JIDIJONEKIN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JIDIJONEKIN_NDJBLIFNDCB_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define JIDIJONEKIN_NEGADKCPNKD_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JIDIJONEKIN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A5039C0)
#define JIDIJONEKIN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JIDIJONEKIN_TypeDefinitionIndex = 10769;

struct alignas(4) JIDIJONEKIN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIDIJONEKIN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JIDIJONEKIN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JIDIJONEKIN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JIDIJONEKIN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JIDIJONEKIN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 NEGADKCPNKD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIDIJONEKIN_NEGADKCPNKD_OFFSET))(this);
	}

	::System::Int32 CAGHGJPOMNL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIDIJONEKIN_CAGHGJPOMNL_OFFSET))(this);
	}

	/*
	::JIDIJONEKIN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JIDIJONEKIN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JIDIJONEKIN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NDJBLIFNDCB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIDIJONEKIN_NDJBLIFNDCB_OFFSET))(this);
	}

	::System::Boolean FNOHFKFAIHN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JIDIJONEKIN_FNOHFKFAIHN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
