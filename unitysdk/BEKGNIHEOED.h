#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CHFBJCFGMGO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BEKGNIHEOED_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BEKGNIHEOED_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D0430)
#define BEKGNIHEOED_CMENKHIICPP_1_OFFSET UNITYSDK_OFFSET(0x18776D80)
#define BEKGNIHEOED_CMENKHIICPP_OFFSET UNITYSDK_OFFSET(0x18776A60)
#define BEKGNIHEOED_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BEKGNIHEOED_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BEKGNIHEOED_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D0470)
#define BEKGNIHEOED_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D0480)
#define BEKGNIHEOED___INIT_OFFSET UNITYSDK_OFFSET(0x7D0410)

inline static constexpr unsigned int BEKGNIHEOED_TypeDefinitionIndex = 15737;

struct alignas(8) BEKGNIHEOED
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKGNIHEOED_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BEKGNIHEOED___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::BEKGNIHEOED CMENKHIICPP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BEKGNIHEOED EIFONLCJOPG)
	{
		return ((::BEKGNIHEOED(*)(::FlatBuffers::ByteBuffer*, ::BEKGNIHEOED))((::PBYTE)hIl2Cpp + BEKGNIHEOED_CMENKHIICPP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::BEKGNIHEOED BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BEKGNIHEOED(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BEKGNIHEOED_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKGNIHEOED_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CHFBJCFGMGO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CHFBJCFGMGO&))((::PBYTE)hIl2Cpp + BEKGNIHEOED_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 ENPOFLBHDPG, ::System::Int32 JGKNCPMELON, ::CHFBJCFGMGO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::CHFBJCFGMGO&, ::System::Int32&))((::PBYTE)hIl2Cpp + BEKGNIHEOED_LLGCOCLACNA_OFFSET))(this, ENPOFLBHDPG, JGKNCPMELON, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKGNIHEOED_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::BEKGNIHEOED CMENKHIICPP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BEKGNIHEOED(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BEKGNIHEOED_CMENKHIICPP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
