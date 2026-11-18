#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GBHCKCLBLIG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PNJGDBOJBJO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PNJGDBOJBJO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x99B5E0)
#define PNJGDBOJBJO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PNJGDBOJBJO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PNJGDBOJBJO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x99B5D0)
#define PNJGDBOJBJO_OCIAHHGCKLJ_1_OFFSET UNITYSDK_OFFSET(0x1FC23D50)
#define PNJGDBOJBJO_OCIAHHGCKLJ_OFFSET UNITYSDK_OFFSET(0x1FC23CE0)
#define PNJGDBOJBJO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x99B620)
#define PNJGDBOJBJO___INIT_OFFSET UNITYSDK_OFFSET(0x99B5B0)

inline static constexpr unsigned int PNJGDBOJBJO_TypeDefinitionIndex = 15292;

struct alignas(8) PNJGDBOJBJO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJGDBOJBJO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNJGDBOJBJO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GBHCKCLBLIG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GBHCKCLBLIG&, ::System::Int32&))((::PBYTE)hIl2Cpp + PNJGDBOJBJO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::PNJGDBOJBJO OCIAHHGCKLJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PNJGDBOJBJO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNJGDBOJBJO_OCIAHHGCKLJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GBHCKCLBLIG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GBHCKCLBLIG&))((::PBYTE)hIl2Cpp + PNJGDBOJBJO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::PNJGDBOJBJO OCIAHHGCKLJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PNJGDBOJBJO EIFONLCJOPG)
	{
		return ((::PNJGDBOJBJO(*)(::FlatBuffers::ByteBuffer*, ::PNJGDBOJBJO))((::PBYTE)hIl2Cpp + PNJGDBOJBJO_OCIAHHGCKLJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::PNJGDBOJBJO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PNJGDBOJBJO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNJGDBOJBJO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJGDBOJBJO_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJGDBOJBJO_GHKKNCCLPAN_OFFSET))(this);
	}
};
