#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GONGDKAFMKK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HFCKILENBFF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HFCKILENBFF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8143F0)
#define HFCKILENBFF_FJMEACHGKJD_1_OFFSET UNITYSDK_OFFSET(0x1B877340)
#define HFCKILENBFF_FJMEACHGKJD_OFFSET UNITYSDK_OFFSET(0x1B8772A0)
#define HFCKILENBFF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HFCKILENBFF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HFCKILENBFF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x814430)
#define HFCKILENBFF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8143E0)
#define HFCKILENBFF___INIT_OFFSET UNITYSDK_OFFSET(0x8143C0)

inline static constexpr unsigned int HFCKILENBFF_TypeDefinitionIndex = 14801;

struct alignas(8) HFCKILENBFF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCKILENBFF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HFCKILENBFF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCKILENBFF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::HFCKILENBFF FJMEACHGKJD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HFCKILENBFF EIFONLCJOPG)
	{
		return ((::HFCKILENBFF(*)(::FlatBuffers::ByteBuffer*, ::HFCKILENBFF))((::PBYTE)hIl2Cpp + HFCKILENBFF_FJMEACHGKJD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::HFCKILENBFF FJMEACHGKJD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HFCKILENBFF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HFCKILENBFF_FJMEACHGKJD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GONGDKAFMKK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GONGDKAFMKK&))((::PBYTE)hIl2Cpp + HFCKILENBFF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::HFCKILENBFF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HFCKILENBFF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HFCKILENBFF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCKILENBFF_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 JNBKGLBPGHP, ::System::Int32 NOKAJLKHOFC, ::GONGDKAFMKK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::GONGDKAFMKK&, ::System::Int32&))((::PBYTE)hIl2Cpp + HFCKILENBFF_LLGCOCLACNA_OFFSET))(this, JNBKGLBPGHP, NOKAJLKHOFC, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
