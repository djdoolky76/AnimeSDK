#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JJICEEOIKHN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IBGGKBCCOOO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IBGGKBCCOOO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80A640)
#define IBGGKBCCOOO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IBGGKBCCOOO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IBGGKBCCOOO_HCDBOELKJHC_1_OFFSET UNITYSDK_OFFSET(0x1B0FFEB0)
#define IBGGKBCCOOO_HCDBOELKJHC_OFFSET UNITYSDK_OFFSET(0x1B128F80)
#define IBGGKBCCOOO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80A690)
#define IBGGKBCCOOO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80A680)
#define IBGGKBCCOOO___INIT_OFFSET UNITYSDK_OFFSET(0x80A620)

inline static constexpr unsigned int IBGGKBCCOOO_TypeDefinitionIndex = 17413;

struct alignas(8) IBGGKBCCOOO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBGGKBCCOOO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBGGKBCCOOO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JJICEEOIKHN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JJICEEOIKHN&))((::PBYTE)hIl2Cpp + IBGGKBCCOOO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::IBGGKBCCOOO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IBGGKBCCOOO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBGGKBCCOOO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBGGKBCCOOO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::IBGGKBCCOOO HCDBOELKJHC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IBGGKBCCOOO EIFONLCJOPG)
	{
		return ((::IBGGKBCCOOO(*)(::FlatBuffers::ByteBuffer*, ::IBGGKBCCOOO))((::PBYTE)hIl2Cpp + IBGGKBCCOOO_HCDBOELKJHC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::IBGGKBCCOOO HCDBOELKJHC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IBGGKBCCOOO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBGGKBCCOOO_HCDBOELKJHC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBGGKBCCOOO_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JJICEEOIKHN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JJICEEOIKHN&, ::System::Int32&))((::PBYTE)hIl2Cpp + IBGGKBCCOOO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
