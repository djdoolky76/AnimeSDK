#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DKNMNJKHIIE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NGLDJCOLDAH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NGLDJCOLDAH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D80F0)
#define NGLDJCOLDAH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NGLDJCOLDAH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NGLDJCOLDAH_HBBCCOAJHBP_1_OFFSET UNITYSDK_OFFSET(0x18E1DF90)
#define NGLDJCOLDAH_HBBCCOAJHBP_OFFSET UNITYSDK_OFFSET(0x18E1DEF0)
#define NGLDJCOLDAH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D80D0)
#define NGLDJCOLDAH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D80E0)
#define NGLDJCOLDAH___INIT_OFFSET UNITYSDK_OFFSET(0x7D80B0)

inline static constexpr unsigned int NGLDJCOLDAH_TypeDefinitionIndex = 11534;

struct alignas(8) NGLDJCOLDAH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLDJCOLDAH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NGLDJCOLDAH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DKNMNJKHIIE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DKNMNJKHIIE&, ::System::Int32&))((::PBYTE)hIl2Cpp + NGLDJCOLDAH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLDJCOLDAH_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLDJCOLDAH_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DKNMNJKHIIE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DKNMNJKHIIE&))((::PBYTE)hIl2Cpp + NGLDJCOLDAH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::NGLDJCOLDAH HBBCCOAJHBP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NGLDJCOLDAH EIFONLCJOPG)
	{
		return ((::NGLDJCOLDAH(*)(::FlatBuffers::ByteBuffer*, ::NGLDJCOLDAH))((::PBYTE)hIl2Cpp + NGLDJCOLDAH_HBBCCOAJHBP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::NGLDJCOLDAH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NGLDJCOLDAH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NGLDJCOLDAH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::NGLDJCOLDAH HBBCCOAJHBP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NGLDJCOLDAH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NGLDJCOLDAH_HBBCCOAJHBP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
