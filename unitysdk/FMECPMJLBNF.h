#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FMECPMJLBNF_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x755E40)
#define FMECPMJLBNF_BENFLKBGKOD_OFFSET UNITYSDK_OFFSET(0x7583A0)
#define FMECPMJLBNF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FMECPMJLBNF_CIOKPIGOKJL_OFFSET UNITYSDK_OFFSET(0x754B50)
#define FMECPMJLBNF_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FMECPMJLBNF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FMECPMJLBNF_LCNAPELFGBG_OFFSET UNITYSDK_OFFSET(0x755C70)
#define FMECPMJLBNF_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x755190)
#define FMECPMJLBNF_MDFGBBMLAKD_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define FMECPMJLBNF_NOBIBKKKMII_OFFSET UNITYSDK_OFFSET(0x755890)
#define FMECPMJLBNF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B9C7B20)
#define FMECPMJLBNF_PAGJNNEFPHC_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define FMECPMJLBNF_PDKKODHPOLD_OFFSET UNITYSDK_OFFSET(0x758780)
#define FMECPMJLBNF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FMECPMJLBNF_TypeDefinitionIndex = 11619;

struct alignas(4) FMECPMJLBNF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMECPMJLBNF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMECPMJLBNF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LCNAPELFGBG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMECPMJLBNF_LCNAPELFGBG_OFFSET))(this);
	}

	::System::Int32 PDKKODHPOLD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMECPMJLBNF_PDKKODHPOLD_OFFSET))(this);
	}

	/*
	::FMECPMJLBNF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FMECPMJLBNF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMECPMJLBNF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 CIOKPIGOKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMECPMJLBNF_CIOKPIGOKJL_OFFSET))(this);
	}

	::System::Int32 NOBIBKKKMII()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMECPMJLBNF_NOBIBKKKMII_OFFSET))(this);
	}

	::System::Int32 PAGJNNEFPHC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMECPMJLBNF_PAGJNNEFPHC_OFFSET))(this);
	}

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMECPMJLBNF_DNKLBHKEDEM_OFFSET))(this);
	}

	::System::Int32 MDFGBBMLAKD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMECPMJLBNF_MDFGBBMLAKD_OFFSET))(this);
	}

	/*
	static ::FMECPMJLBNF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FMECPMJLBNF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FMECPMJLBNF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* BENFLKBGKOD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMECPMJLBNF_BENFLKBGKOD_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMECPMJLBNF_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMECPMJLBNF_LNOBBAIGKJL_OFFSET))(this);
	}
};
