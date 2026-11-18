#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OBMJICILCHE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define APMCNGOJPLL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define APMCNGOJPLL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x816360)
#define APMCNGOJPLL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define APMCNGOJPLL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define APMCNGOJPLL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8163A0)
#define APMCNGOJPLL_OGPJMNLFLIM_1_OFFSET UNITYSDK_OFFSET(0x1B98A5E0)
#define APMCNGOJPLL_OGPJMNLFLIM_OFFSET UNITYSDK_OFFSET(0x1B98A540)
#define APMCNGOJPLL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x816350)
#define APMCNGOJPLL___INIT_OFFSET UNITYSDK_OFFSET(0x816330)

inline static constexpr unsigned int APMCNGOJPLL_TypeDefinitionIndex = 11545;

struct alignas(8) APMCNGOJPLL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + APMCNGOJPLL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + APMCNGOJPLL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OBMJICILCHE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OBMJICILCHE&))((::PBYTE)hIl2Cpp + APMCNGOJPLL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + APMCNGOJPLL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::APMCNGOJPLL OGPJMNLFLIM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::APMCNGOJPLL EIFONLCJOPG)
	{
		return ((::APMCNGOJPLL(*)(::FlatBuffers::ByteBuffer*, ::APMCNGOJPLL))((::PBYTE)hIl2Cpp + APMCNGOJPLL_OGPJMNLFLIM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::APMCNGOJPLL OGPJMNLFLIM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::APMCNGOJPLL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + APMCNGOJPLL_OGPJMNLFLIM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APMCNGOJPLL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::APMCNGOJPLL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::APMCNGOJPLL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + APMCNGOJPLL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OBMJICILCHE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OBMJICILCHE&, ::System::Int32&))((::PBYTE)hIl2Cpp + APMCNGOJPLL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
