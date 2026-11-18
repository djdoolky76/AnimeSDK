#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IGBEOBJDCJM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AHGIPBMDBOO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AHGIPBMDBOO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E9B30)
#define AHGIPBMDBOO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AHGIPBMDBOO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AHGIPBMDBOO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E9B70)
#define AHGIPBMDBOO_OEFBLCIJBAG_1_OFFSET UNITYSDK_OFFSET(0x19ABB160)
#define AHGIPBMDBOO_OEFBLCIJBAG_OFFSET UNITYSDK_OFFSET(0x19ABB0F0)
#define AHGIPBMDBOO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E9B20)
#define AHGIPBMDBOO___INIT_OFFSET UNITYSDK_OFFSET(0x7E9B00)

inline static constexpr unsigned int AHGIPBMDBOO_TypeDefinitionIndex = 17214;

struct alignas(8) AHGIPBMDBOO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHGIPBMDBOO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AHGIPBMDBOO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::AHGIPBMDBOO OEFBLCIJBAG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AHGIPBMDBOO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AHGIPBMDBOO_OEFBLCIJBAG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHGIPBMDBOO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::AHGIPBMDBOO OEFBLCIJBAG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AHGIPBMDBOO EIFONLCJOPG)
	{
		return ((::AHGIPBMDBOO(*)(::FlatBuffers::ByteBuffer*, ::AHGIPBMDBOO))((::PBYTE)hIl2Cpp + AHGIPBMDBOO_OEFBLCIJBAG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IGBEOBJDCJM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IGBEOBJDCJM&))((::PBYTE)hIl2Cpp + AHGIPBMDBOO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHGIPBMDBOO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::AHGIPBMDBOO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AHGIPBMDBOO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AHGIPBMDBOO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IGBEOBJDCJM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IGBEOBJDCJM&, ::System::Int32&))((::PBYTE)hIl2Cpp + AHGIPBMDBOO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
