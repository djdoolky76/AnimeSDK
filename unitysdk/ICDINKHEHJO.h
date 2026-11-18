#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BHLCNOMPLID.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ICDINKHEHJO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ICDINKHEHJO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80F6D0)
#define ICDINKHEHJO_DCMHKGLPGGI_1_OFFSET UNITYSDK_OFFSET(0x1B620100)
#define ICDINKHEHJO_DCMHKGLPGGI_OFFSET UNITYSDK_OFFSET(0x1B620090)
#define ICDINKHEHJO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ICDINKHEHJO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ICDINKHEHJO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80F6C0)
#define ICDINKHEHJO___INIT_OFFSET UNITYSDK_OFFSET(0x80F6A0)

inline static constexpr unsigned int ICDINKHEHJO_TypeDefinitionIndex = 17155;

struct alignas(8) ICDINKHEHJO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDINKHEHJO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ICDINKHEHJO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::ICDINKHEHJO DCMHKGLPGGI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ICDINKHEHJO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ICDINKHEHJO_DCMHKGLPGGI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDINKHEHJO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::ICDINKHEHJO DCMHKGLPGGI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ICDINKHEHJO EIFONLCJOPG)
	{
		return ((::ICDINKHEHJO(*)(::FlatBuffers::ByteBuffer*, ::ICDINKHEHJO))((::PBYTE)hIl2Cpp + ICDINKHEHJO_DCMHKGLPGGI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::ICDINKHEHJO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ICDINKHEHJO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ICDINKHEHJO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BHLCNOMPLID& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BHLCNOMPLID&))((::PBYTE)hIl2Cpp + ICDINKHEHJO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDINKHEHJO_GHKKNCCLPAN_OFFSET))(this);
	}
};
