#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OLJNEALFFCI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CKDLMOPNNJC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CKDLMOPNNJC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x762320)
#define CKDLMOPNNJC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CKDLMOPNNJC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CKDLMOPNNJC_IHOIELBHLME_1_OFFSET UNITYSDK_OFFSET(0x15742D00)
#define CKDLMOPNNJC_IHOIELBHLME_OFFSET UNITYSDK_OFFSET(0x15742C90)
#define CKDLMOPNNJC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x762300)
#define CKDLMOPNNJC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x762310)
#define CKDLMOPNNJC___INIT_OFFSET UNITYSDK_OFFSET(0x7622E0)

inline static constexpr unsigned int CKDLMOPNNJC_TypeDefinitionIndex = 10495;

struct alignas(8) CKDLMOPNNJC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKDLMOPNNJC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CKDLMOPNNJC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::CKDLMOPNNJC IHOIELBHLME(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CKDLMOPNNJC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CKDLMOPNNJC_IHOIELBHLME_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OLJNEALFFCI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OLJNEALFFCI&, ::System::Int32&))((::PBYTE)hIl2Cpp + CKDLMOPNNJC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKDLMOPNNJC_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::CKDLMOPNNJC IHOIELBHLME_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CKDLMOPNNJC EIFONLCJOPG)
	{
		return ((::CKDLMOPNNJC(*)(::FlatBuffers::ByteBuffer*, ::CKDLMOPNNJC))((::PBYTE)hIl2Cpp + CKDLMOPNNJC_IHOIELBHLME_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::CKDLMOPNNJC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CKDLMOPNNJC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CKDLMOPNNJC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OLJNEALFFCI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OLJNEALFFCI&))((::PBYTE)hIl2Cpp + CKDLMOPNNJC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKDLMOPNNJC_GHKKNCCLPAN_OFFSET))(this);
	}
};
