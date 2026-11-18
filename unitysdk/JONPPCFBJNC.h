#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OHGKGHBKGCK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JONPPCFBJNC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JONPPCFBJNC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x815340)
#define JONPPCFBJNC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JONPPCFBJNC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JONPPCFBJNC_IAJIEPEKJLL_1_OFFSET UNITYSDK_OFFSET(0x1B89F5F0)
#define JONPPCFBJNC_IAJIEPEKJLL_OFFSET UNITYSDK_OFFSET(0x1B89F580)
#define JONPPCFBJNC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x815320)
#define JONPPCFBJNC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x815330)
#define JONPPCFBJNC___INIT_OFFSET UNITYSDK_OFFSET(0x815300)

inline static constexpr unsigned int JONPPCFBJNC_TypeDefinitionIndex = 12164;

struct alignas(8) JONPPCFBJNC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JONPPCFBJNC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JONPPCFBJNC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OHGKGHBKGCK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OHGKGHBKGCK&, ::System::Int32&))((::PBYTE)hIl2Cpp + JONPPCFBJNC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::JONPPCFBJNC IAJIEPEKJLL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JONPPCFBJNC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JONPPCFBJNC_IAJIEPEKJLL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OHGKGHBKGCK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OHGKGHBKGCK&))((::PBYTE)hIl2Cpp + JONPPCFBJNC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JONPPCFBJNC_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::JONPPCFBJNC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JONPPCFBJNC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JONPPCFBJNC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JONPPCFBJNC IAJIEPEKJLL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JONPPCFBJNC EIFONLCJOPG)
	{
		return ((::JONPPCFBJNC(*)(::FlatBuffers::ByteBuffer*, ::JONPPCFBJNC))((::PBYTE)hIl2Cpp + JONPPCFBJNC_IAJIEPEKJLL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JONPPCFBJNC_GHKKNCCLPAN_OFFSET))(this);
	}
};
