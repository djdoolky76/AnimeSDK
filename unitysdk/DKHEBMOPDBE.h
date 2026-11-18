#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BAJGIAOEOJH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DKHEBMOPDBE_ALFKJJNPHGE_1_OFFSET UNITYSDK_OFFSET(0x17784C60)
#define DKHEBMOPDBE_ALFKJJNPHGE_OFFSET UNITYSDK_OFFSET(0x17784BF0)
#define DKHEBMOPDBE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DKHEBMOPDBE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7ADBA0)
#define DKHEBMOPDBE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DKHEBMOPDBE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DKHEBMOPDBE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7ADB80)
#define DKHEBMOPDBE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7ADB90)
#define DKHEBMOPDBE___INIT_OFFSET UNITYSDK_OFFSET(0x7ADB60)

inline static constexpr unsigned int DKHEBMOPDBE_TypeDefinitionIndex = 12794;

struct alignas(8) DKHEBMOPDBE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHEBMOPDBE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DKHEBMOPDBE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::DKHEBMOPDBE ALFKJJNPHGE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DKHEBMOPDBE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DKHEBMOPDBE_ALFKJJNPHGE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BAJGIAOEOJH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BAJGIAOEOJH&, ::System::Int32&))((::PBYTE)hIl2Cpp + DKHEBMOPDBE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHEBMOPDBE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHEBMOPDBE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::DKHEBMOPDBE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DKHEBMOPDBE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DKHEBMOPDBE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::DKHEBMOPDBE ALFKJJNPHGE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DKHEBMOPDBE EIFONLCJOPG)
	{
		return ((::DKHEBMOPDBE(*)(::FlatBuffers::ByteBuffer*, ::DKHEBMOPDBE))((::PBYTE)hIl2Cpp + DKHEBMOPDBE_ALFKJJNPHGE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BAJGIAOEOJH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BAJGIAOEOJH&))((::PBYTE)hIl2Cpp + DKHEBMOPDBE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
