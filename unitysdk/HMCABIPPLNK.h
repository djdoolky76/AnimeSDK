#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JLHGDEHENID.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HMCABIPPLNK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HMCABIPPLNK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80DDC0)
#define HMCABIPPLNK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HMCABIPPLNK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HMCABIPPLNK_KJDHMHCAOHK_1_OFFSET UNITYSDK_OFFSET(0x1B4E6C70)
#define HMCABIPPLNK_KJDHMHCAOHK_OFFSET UNITYSDK_OFFSET(0x1B4E6C00)
#define HMCABIPPLNK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80DE00)
#define HMCABIPPLNK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80DDB0)
#define HMCABIPPLNK___INIT_OFFSET UNITYSDK_OFFSET(0x80DD90)

inline static constexpr unsigned int HMCABIPPLNK_TypeDefinitionIndex = 12897;

struct alignas(8) HMCABIPPLNK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMCABIPPLNK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HMCABIPPLNK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMCABIPPLNK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::HMCABIPPLNK KJDHMHCAOHK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HMCABIPPLNK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HMCABIPPLNK_KJDHMHCAOHK_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::HMCABIPPLNK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HMCABIPPLNK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HMCABIPPLNK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JLHGDEHENID& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JLHGDEHENID&, ::System::Int32&))((::PBYTE)hIl2Cpp + HMCABIPPLNK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::HMCABIPPLNK KJDHMHCAOHK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HMCABIPPLNK EIFONLCJOPG)
	{
		return ((::HMCABIPPLNK(*)(::FlatBuffers::ByteBuffer*, ::HMCABIPPLNK))((::PBYTE)hIl2Cpp + HMCABIPPLNK_KJDHMHCAOHK_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JLHGDEHENID& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JLHGDEHENID&))((::PBYTE)hIl2Cpp + HMCABIPPLNK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMCABIPPLNK_GHKKNCCLPAN_OFFSET))(this);
	}
};
