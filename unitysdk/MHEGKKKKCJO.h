#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HDIJCHLHLOM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MHEGKKKKCJO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MHEGKKKKCJO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x820210)
#define MHEGKKKKCJO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MHEGKKKKCJO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MHEGKKKKCJO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8201F0)
#define MHEGKKKKCJO_MAMEPKJNCJJ_1_OFFSET UNITYSDK_OFFSET(0x1C17AF70)
#define MHEGKKKKCJO_MAMEPKJNCJJ_OFFSET UNITYSDK_OFFSET(0x1C17AF00)
#define MHEGKKKKCJO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x820200)
#define MHEGKKKKCJO___INIT_OFFSET UNITYSDK_OFFSET(0x8201D0)

inline static constexpr unsigned int MHEGKKKKCJO_TypeDefinitionIndex = 16749;

struct alignas(8) MHEGKKKKCJO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHEGKKKKCJO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MHEGKKKKCJO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHEGKKKKCJO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MHEGKKKKCJO MAMEPKJNCJJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MHEGKKKKCJO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MHEGKKKKCJO_MAMEPKJNCJJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HDIJCHLHLOM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HDIJCHLHLOM&, ::System::Int32&))((::PBYTE)hIl2Cpp + MHEGKKKKCJO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHEGKKKKCJO_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HDIJCHLHLOM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HDIJCHLHLOM&))((::PBYTE)hIl2Cpp + MHEGKKKKCJO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::MHEGKKKKCJO MAMEPKJNCJJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MHEGKKKKCJO EIFONLCJOPG)
	{
		return ((::MHEGKKKKCJO(*)(::FlatBuffers::ByteBuffer*, ::MHEGKKKKCJO))((::PBYTE)hIl2Cpp + MHEGKKKKCJO_MAMEPKJNCJJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::MHEGKKKKCJO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MHEGKKKKCJO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MHEGKKKKCJO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
