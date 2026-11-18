#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EHLKHFANIHN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EHLKHFANIHN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EHLKHFANIHN_BONLNNDFPDH_OFFSET UNITYSDK_OFFSET(0x755C70)
#define EHLKHFANIHN_DCEPPPHBCLD_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define EHLKHFANIHN_FIECAGGDBBN_OFFSET UNITYSDK_OFFSET(0x754920)
#define EHLKHFANIHN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EHLKHFANIHN_LOKOKGNJEAH_OFFSET UNITYSDK_OFFSET(0x7D0840)
#define EHLKHFANIHN_NIOGMJFDLBP_OFFSET UNITYSDK_OFFSET(0x78A030)
#define EHLKHFANIHN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1ADD1F60)
#define EHLKHFANIHN_OEECJGBDJLI_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define EHLKHFANIHN_ONGEODIDNCH_OFFSET UNITYSDK_OFFSET(0x754970)
#define EHLKHFANIHN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EHLKHFANIHN_TypeDefinitionIndex = 16491;

struct alignas(4) EHLKHFANIHN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLKHFANIHN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EHLKHFANIHN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ONGEODIDNCH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLKHFANIHN_ONGEODIDNCH_OFFSET))(this);
	}

	::System::Single NIOGMJFDLBP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLKHFANIHN_NIOGMJFDLBP_OFFSET))(this);
	}

	::System::Boolean LOKOKGNJEAH(::System::Int32 HPMEONKHFGG, ::System::Single& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + EHLKHFANIHN_LOKOKGNJEAH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::EHLKHFANIHN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 JGKNCPMELON, ::System::Int32 MCFFIHENHKJ, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EHLKHFANIHN(*)(::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EHLKHFANIHN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, JGKNCPMELON, MCFFIHENHKJ, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLKHFANIHN_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::EHLKHFANIHN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EHLKHFANIHN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EHLKHFANIHN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 BONLNNDFPDH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLKHFANIHN_BONLNNDFPDH_OFFSET))(this);
	}

	::System::Int32 OEECJGBDJLI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLKHFANIHN_OEECJGBDJLI_OFFSET))(this);
	}

	::System::Int32 FIECAGGDBBN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLKHFANIHN_FIECAGGDBBN_OFFSET))(this);
	}

	::System::String* DCEPPPHBCLD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLKHFANIHN_DCEPPPHBCLD_OFFSET))(this);
	}
};
