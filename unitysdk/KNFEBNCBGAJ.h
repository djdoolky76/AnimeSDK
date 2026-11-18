#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FHCEFNNMDKK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KNFEBNCBGAJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KNFEBNCBGAJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A9010)
#define KNFEBNCBGAJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KNFEBNCBGAJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KNFEBNCBGAJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A9060)
#define KNFEBNCBGAJ_MPLMKEHLLHB_1_OFFSET UNITYSDK_OFFSET(0x1749AC10)
#define KNFEBNCBGAJ_MPLMKEHLLHB_OFFSET UNITYSDK_OFFSET(0x1749ABA0)
#define KNFEBNCBGAJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A9050)
#define KNFEBNCBGAJ___INIT_OFFSET UNITYSDK_OFFSET(0x7A8FF0)

inline static constexpr unsigned int KNFEBNCBGAJ_TypeDefinitionIndex = 17735;

struct alignas(8) KNFEBNCBGAJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNFEBNCBGAJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KNFEBNCBGAJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KNFEBNCBGAJ MPLMKEHLLHB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KNFEBNCBGAJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KNFEBNCBGAJ_MPLMKEHLLHB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNFEBNCBGAJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::KNFEBNCBGAJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KNFEBNCBGAJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KNFEBNCBGAJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::KNFEBNCBGAJ MPLMKEHLLHB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KNFEBNCBGAJ EIFONLCJOPG)
	{
		return ((::KNFEBNCBGAJ(*)(::FlatBuffers::ByteBuffer*, ::KNFEBNCBGAJ))((::PBYTE)hIl2Cpp + KNFEBNCBGAJ_MPLMKEHLLHB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNFEBNCBGAJ_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 AJDICOALDFO, ::System::Int32 PACGBHEJLKI, ::FHCEFNNMDKK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::FHCEFNNMDKK&, ::System::Int32&))((::PBYTE)hIl2Cpp + KNFEBNCBGAJ_LLGCOCLACNA_OFFSET))(this, AJDICOALDFO, PACGBHEJLKI, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FHCEFNNMDKK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FHCEFNNMDKK&))((::PBYTE)hIl2Cpp + KNFEBNCBGAJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
