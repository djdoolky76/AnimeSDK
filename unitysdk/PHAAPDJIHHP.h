#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PNGJCJNECEP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PHAAPDJIHHP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PHAAPDJIHHP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A6FD0)
#define PHAAPDJIHHP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PHAAPDJIHHP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PHAAPDJIHHP_KONMHNPMAIK_1_OFFSET UNITYSDK_OFFSET(0x1737B810)
#define PHAAPDJIHHP_KONMHNPMAIK_OFFSET UNITYSDK_OFFSET(0x1737B7A0)
#define PHAAPDJIHHP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A7020)
#define PHAAPDJIHHP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A7010)
#define PHAAPDJIHHP___INIT_OFFSET UNITYSDK_OFFSET(0x7A6FB0)

inline static constexpr unsigned int PHAAPDJIHHP_TypeDefinitionIndex = 15785;

struct alignas(8) PHAAPDJIHHP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHAAPDJIHHP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PHAAPDJIHHP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::PHAAPDJIHHP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PHAAPDJIHHP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PHAAPDJIHHP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PHAAPDJIHHP KONMHNPMAIK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PHAAPDJIHHP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PHAAPDJIHHP_KONMHNPMAIK_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::PHAAPDJIHHP KONMHNPMAIK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PHAAPDJIHHP EIFONLCJOPG)
	{
		return ((::PHAAPDJIHHP(*)(::FlatBuffers::ByteBuffer*, ::PHAAPDJIHHP))((::PBYTE)hIl2Cpp + PHAAPDJIHHP_KONMHNPMAIK_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHAAPDJIHHP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 JGKNCPMELON, ::System::Int32 NPKGPFOHELJ, ::PNGJCJNECEP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::PNGJCJNECEP&, ::System::Int32&))((::PBYTE)hIl2Cpp + PHAAPDJIHHP_LLGCOCLACNA_OFFSET))(this, JGKNCPMELON, NPKGPFOHELJ, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PNGJCJNECEP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PNGJCJNECEP&))((::PBYTE)hIl2Cpp + PHAAPDJIHHP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHAAPDJIHHP_GHKKNCCLPAN_OFFSET))(this);
	}
};
