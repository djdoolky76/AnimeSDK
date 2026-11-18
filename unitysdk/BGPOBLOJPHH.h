#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BGPOBLOJPHH_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BGPOBLOJPHH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BGPOBLOJPHH_ECPLBPIBPHL_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define BGPOBLOJPHH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BGPOBLOJPHH_IKIOLCNCHBP_OFFSET UNITYSDK_OFFSET(0x761500)
#define BGPOBLOJPHH_KDEAOMCJOOM_OFFSET UNITYSDK_OFFSET(0x754C20)
#define BGPOBLOJPHH_LLDAMBKLDNI_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define BGPOBLOJPHH_LPGHADHNOLD_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define BGPOBLOJPHH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x157295A0)
#define BGPOBLOJPHH_OKGHEJMOJFI_OFFSET UNITYSDK_OFFSET(0x758780)
#define BGPOBLOJPHH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BGPOBLOJPHH_TypeDefinitionIndex = 12975;

struct alignas(4) BGPOBLOJPHH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGPOBLOJPHH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BGPOBLOJPHH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::BGPOBLOJPHH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BGPOBLOJPHH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BGPOBLOJPHH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 KDEAOMCJOOM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGPOBLOJPHH_KDEAOMCJOOM_OFFSET))(this);
	}

	/*
	::BGPOBLOJPHH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BGPOBLOJPHH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BGPOBLOJPHH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ECPLBPIBPHL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGPOBLOJPHH_ECPLBPIBPHL_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGPOBLOJPHH_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean LPGHADHNOLD(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + BGPOBLOJPHH_LPGHADHNOLD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* LLDAMBKLDNI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGPOBLOJPHH_LLDAMBKLDNI_OFFSET))(this);
	}

	::System::Int32 OKGHEJMOJFI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGPOBLOJPHH_OKGHEJMOJFI_OFFSET))(this);
	}

	::System::Boolean IKIOLCNCHBP(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + BGPOBLOJPHH_IKIOLCNCHBP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
