#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NCLKKNMEJNO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KDGGDILKJEH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KDGGDILKJEH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80B110)
#define KDGGDILKJEH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KDGGDILKJEH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KDGGDILKJEH_KEDEAGFKLCJ_1_OFFSET UNITYSDK_OFFSET(0x1B144AB0)
#define KDGGDILKJEH_KEDEAGFKLCJ_OFFSET UNITYSDK_OFFSET(0x1B144A50)
#define KDGGDILKJEH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80B150)
#define KDGGDILKJEH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80B160)
#define KDGGDILKJEH___INIT_OFFSET UNITYSDK_OFFSET(0x80B0F0)

inline static constexpr unsigned int KDGGDILKJEH_TypeDefinitionIndex = 14857;

struct alignas(8) KDGGDILKJEH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGGDILKJEH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDGGDILKJEH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::KDGGDILKJEH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KDGGDILKJEH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDGGDILKJEH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NCLKKNMEJNO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NCLKKNMEJNO&, ::System::Int32&))((::PBYTE)hIl2Cpp + KDGGDILKJEH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGGDILKJEH_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::KDGGDILKJEH KEDEAGFKLCJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KDGGDILKJEH EIFONLCJOPG)
	{
		return ((::KDGGDILKJEH(*)(::FlatBuffers::ByteBuffer*, ::KDGGDILKJEH))((::PBYTE)hIl2Cpp + KDGGDILKJEH_KEDEAGFKLCJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::KDGGDILKJEH KEDEAGFKLCJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KDGGDILKJEH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDGGDILKJEH_KEDEAGFKLCJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGGDILKJEH_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NCLKKNMEJNO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NCLKKNMEJNO&))((::PBYTE)hIl2Cpp + KDGGDILKJEH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
