#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MKIKENNLLLE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BFGDCCJPDPP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BFGDCCJPDPP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E2260)
#define BFGDCCJPDPP_CHEGGFJEOPA_1_OFFSET UNITYSDK_OFFSET(0x194F9790)
#define BFGDCCJPDPP_CHEGGFJEOPA_OFFSET UNITYSDK_OFFSET(0x194F94F0)
#define BFGDCCJPDPP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BFGDCCJPDPP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BFGDCCJPDPP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E2240)
#define BFGDCCJPDPP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E2250)
#define BFGDCCJPDPP___INIT_OFFSET UNITYSDK_OFFSET(0x7E2220)

inline static constexpr unsigned int BFGDCCJPDPP_TypeDefinitionIndex = 11028;

struct alignas(8) BFGDCCJPDPP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGDCCJPDPP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BFGDCCJPDPP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGDCCJPDPP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::BFGDCCJPDPP CHEGGFJEOPA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BFGDCCJPDPP EIFONLCJOPG)
	{
		return ((::BFGDCCJPDPP(*)(::FlatBuffers::ByteBuffer*, ::BFGDCCJPDPP))((::PBYTE)hIl2Cpp + BFGDCCJPDPP_CHEGGFJEOPA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MKIKENNLLLE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MKIKENNLLLE&, ::System::Int32&))((::PBYTE)hIl2Cpp + BFGDCCJPDPP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGDCCJPDPP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::BFGDCCJPDPP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BFGDCCJPDPP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BFGDCCJPDPP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MKIKENNLLLE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MKIKENNLLLE&))((::PBYTE)hIl2Cpp + BFGDCCJPDPP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::BFGDCCJPDPP CHEGGFJEOPA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BFGDCCJPDPP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BFGDCCJPDPP_CHEGGFJEOPA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
