#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KBIIOGBABAE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PFKENDMHOGC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PFKENDMHOGC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8ABD80)
#define PFKENDMHOGC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PFKENDMHOGC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PFKENDMHOGC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8ABDD0)
#define PFKENDMHOGC_MEFNDMJBPEJ_1_OFFSET UNITYSDK_OFFSET(0x1D003320)
#define PFKENDMHOGC_MEFNDMJBPEJ_OFFSET UNITYSDK_OFFSET(0x1D0030C0)
#define PFKENDMHOGC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8ABDC0)
#define PFKENDMHOGC___INIT_OFFSET UNITYSDK_OFFSET(0x8ABD60)

inline static constexpr unsigned int PFKENDMHOGC_TypeDefinitionIndex = 13266;

struct alignas(8) PFKENDMHOGC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKENDMHOGC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFKENDMHOGC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KBIIOGBABAE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KBIIOGBABAE&))((::PBYTE)hIl2Cpp + PFKENDMHOGC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::PFKENDMHOGC MEFNDMJBPEJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PFKENDMHOGC EIFONLCJOPG)
	{
		return ((::PFKENDMHOGC(*)(::FlatBuffers::ByteBuffer*, ::PFKENDMHOGC))((::PBYTE)hIl2Cpp + PFKENDMHOGC_MEFNDMJBPEJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::PFKENDMHOGC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PFKENDMHOGC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFKENDMHOGC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKENDMHOGC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KBIIOGBABAE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KBIIOGBABAE&, ::System::Int32&))((::PBYTE)hIl2Cpp + PFKENDMHOGC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKENDMHOGC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::PFKENDMHOGC MEFNDMJBPEJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PFKENDMHOGC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFKENDMHOGC_MEFNDMJBPEJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
