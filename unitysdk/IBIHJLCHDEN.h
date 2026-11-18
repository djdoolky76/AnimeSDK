#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FKLDANAIJBA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IBIHJLCHDEN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IBIHJLCHDEN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8148F0)
#define IBIHJLCHDEN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IBIHJLCHDEN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IBIHJLCHDEN_LHBAHGBOGLP_1_OFFSET UNITYSDK_OFFSET(0x1B884BB0)
#define IBIHJLCHDEN_LHBAHGBOGLP_OFFSET UNITYSDK_OFFSET(0x1B85B770)
#define IBIHJLCHDEN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8148D0)
#define IBIHJLCHDEN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8148E0)
#define IBIHJLCHDEN___INIT_OFFSET UNITYSDK_OFFSET(0x8148B0)

inline static constexpr unsigned int IBIHJLCHDEN_TypeDefinitionIndex = 12284;

struct alignas(8) IBIHJLCHDEN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIHJLCHDEN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBIHJLCHDEN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::IBIHJLCHDEN LHBAHGBOGLP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IBIHJLCHDEN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBIHJLCHDEN_LHBAHGBOGLP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FKLDANAIJBA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FKLDANAIJBA&, ::System::Int32&))((::PBYTE)hIl2Cpp + IBIHJLCHDEN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FKLDANAIJBA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FKLDANAIJBA&))((::PBYTE)hIl2Cpp + IBIHJLCHDEN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIHJLCHDEN_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIHJLCHDEN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::IBIHJLCHDEN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IBIHJLCHDEN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBIHJLCHDEN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::IBIHJLCHDEN LHBAHGBOGLP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IBIHJLCHDEN EIFONLCJOPG)
	{
		return ((::IBIHJLCHDEN(*)(::FlatBuffers::ByteBuffer*, ::IBIHJLCHDEN))((::PBYTE)hIl2Cpp + IBIHJLCHDEN_LHBAHGBOGLP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
