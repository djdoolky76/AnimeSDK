#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IKIFEBNJGHN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HEKHOAKLLJO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HEKHOAKLLJO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DEDC0)
#define HEKHOAKLLJO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HEKHOAKLLJO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HEKHOAKLLJO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7DEE00)
#define HEKHOAKLLJO_NJOIFEADEEN_1_OFFSET UNITYSDK_OFFSET(0x19341520)
#define HEKHOAKLLJO_NJOIFEADEEN_OFFSET UNITYSDK_OFFSET(0x19341420)
#define HEKHOAKLLJO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DEDB0)
#define HEKHOAKLLJO___INIT_OFFSET UNITYSDK_OFFSET(0x7DED90)

inline static constexpr unsigned int HEKHOAKLLJO_TypeDefinitionIndex = 14718;

struct alignas(8) HEKHOAKLLJO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKHOAKLLJO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HEKHOAKLLJO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IKIFEBNJGHN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IKIFEBNJGHN&))((::PBYTE)hIl2Cpp + HEKHOAKLLJO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::HEKHOAKLLJO NJOIFEADEEN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HEKHOAKLLJO EIFONLCJOPG)
	{
		return ((::HEKHOAKLLJO(*)(::FlatBuffers::ByteBuffer*, ::HEKHOAKLLJO))((::PBYTE)hIl2Cpp + HEKHOAKLLJO_NJOIFEADEEN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKHOAKLLJO_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKHOAKLLJO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::HEKHOAKLLJO NJOIFEADEEN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HEKHOAKLLJO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HEKHOAKLLJO_NJOIFEADEEN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::HEKHOAKLLJO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HEKHOAKLLJO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HEKHOAKLLJO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IKIFEBNJGHN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IKIFEBNJGHN&, ::System::Int32&))((::PBYTE)hIl2Cpp + HEKHOAKLLJO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
