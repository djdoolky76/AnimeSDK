#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IGMCABDJHLM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IJMJPDFCCOO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IJMJPDFCCOO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80E380)
#define IJMJPDFCCOO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IJMJPDFCCOO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IJMJPDFCCOO_KOELCALGHBK_1_OFFSET UNITYSDK_OFFSET(0x1B4EE1D0)
#define IJMJPDFCCOO_KOELCALGHBK_OFFSET UNITYSDK_OFFSET(0x1B4EE110)
#define IJMJPDFCCOO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80E3C0)
#define IJMJPDFCCOO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80E3D0)
#define IJMJPDFCCOO___INIT_OFFSET UNITYSDK_OFFSET(0x80E360)

inline static constexpr unsigned int IJMJPDFCCOO_TypeDefinitionIndex = 17508;

struct alignas(8) IJMJPDFCCOO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJMJPDFCCOO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IJMJPDFCCOO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IGMCABDJHLM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IGMCABDJHLM&))((::PBYTE)hIl2Cpp + IJMJPDFCCOO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::IJMJPDFCCOO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IJMJPDFCCOO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IJMJPDFCCOO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::IJMJPDFCCOO KOELCALGHBK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IJMJPDFCCOO EIFONLCJOPG)
	{
		return ((::IJMJPDFCCOO(*)(::FlatBuffers::ByteBuffer*, ::IJMJPDFCCOO))((::PBYTE)hIl2Cpp + IJMJPDFCCOO_KOELCALGHBK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJMJPDFCCOO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::IJMJPDFCCOO KOELCALGHBK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IJMJPDFCCOO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IJMJPDFCCOO_KOELCALGHBK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IGMCABDJHLM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IGMCABDJHLM&, ::System::Int32&))((::PBYTE)hIl2Cpp + IJMJPDFCCOO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJMJPDFCCOO_PPOMNIFACOL_OFFSET))(this);
	}
};
