#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define NBGGMDGIIHP_BCHLOOCNJID_OFFSET UNITYSDK_OFFSET(0x7563E0)
#define NBGGMDGIIHP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NBGGMDGIIHP_EBPJCLKCKEG_OFFSET UNITYSDK_OFFSET(0x758780)
#define NBGGMDGIIHP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NBGGMDGIIHP_GKMJPGJDHKH_OFFSET UNITYSDK_OFFSET(0x7E24F0)
#define NBGGMDGIIHP_HNOFHFDLMNG_OFFSET UNITYSDK_OFFSET(0x766400)
#define NBGGMDGIIHP_LBEHGMBCBEF_OFFSET UNITYSDK_OFFSET(0x762B30)
#define NBGGMDGIIHP_NABKEIIAGGE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NBGGMDGIIHP_NPJHFCLGOEK_OFFSET UNITYSDK_OFFSET(0x758590)
#define NBGGMDGIIHP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1CFE66C0)
#define NBGGMDGIIHP_ONAGIENDLME_OFFSET UNITYSDK_OFFSET(0x756780)
#define NBGGMDGIIHP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NBGGMDGIIHP_TypeDefinitionIndex = 13792;

struct alignas(4) NBGGMDGIIHP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGGMDGIIHP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NBGGMDGIIHP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean ONAGIENDLME(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NBGGMDGIIHP_ONAGIENDLME_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 NABKEIIAGGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGGMDGIIHP_NABKEIIAGGE_OFFSET))(this);
	}

	::System::Boolean GKMJPGJDHKH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGGMDGIIHP_GKMJPGJDHKH_OFFSET))(this);
	}

	::System::Int32 EBPJCLKCKEG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGGMDGIIHP_EBPJCLKCKEG_OFFSET))(this);
	}

	/*
	static ::NBGGMDGIIHP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NBGGMDGIIHP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NBGGMDGIIHP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean HNOFHFDLMNG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGGMDGIIHP_HNOFHFDLMNG_OFFSET))(this);
	}

	::System::Int32 BCHLOOCNJID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGGMDGIIHP_BCHLOOCNJID_OFFSET))(this);
	}

	/*
	::NBGGMDGIIHP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NBGGMDGIIHP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NBGGMDGIIHP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean NPJHFCLGOEK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGGMDGIIHP_NPJHFCLGOEK_OFFSET))(this);
	}

	::System::Boolean LBEHGMBCBEF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGGMDGIIHP_LBEHGMBCBEF_OFFSET))(this);
	}
};
