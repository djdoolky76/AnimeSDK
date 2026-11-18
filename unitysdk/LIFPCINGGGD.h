#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HBHJPJNKEFB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LIFPCINGGGD_AKCNPBAIHBI_1_OFFSET UNITYSDK_OFFSET(0x19569180)
#define LIFPCINGGGD_AKCNPBAIHBI_OFFSET UNITYSDK_OFFSET(0x195690E0)
#define LIFPCINGGGD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LIFPCINGGGD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E5410)
#define LIFPCINGGGD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LIFPCINGGGD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LIFPCINGGGD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E5400)
#define LIFPCINGGGD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E53F0)
#define LIFPCINGGGD___INIT_OFFSET UNITYSDK_OFFSET(0x7E53D0)

inline static constexpr unsigned int LIFPCINGGGD_TypeDefinitionIndex = 11634;

struct alignas(8) LIFPCINGGGD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFPCINGGGD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LIFPCINGGGD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFPCINGGGD_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFPCINGGGD_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HBHJPJNKEFB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HBHJPJNKEFB&, ::System::Int32&))((::PBYTE)hIl2Cpp + LIFPCINGGGD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::LIFPCINGGGD AKCNPBAIHBI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LIFPCINGGGD EIFONLCJOPG)
	{
		return ((::LIFPCINGGGD(*)(::FlatBuffers::ByteBuffer*, ::LIFPCINGGGD))((::PBYTE)hIl2Cpp + LIFPCINGGGD_AKCNPBAIHBI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::LIFPCINGGGD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LIFPCINGGGD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LIFPCINGGGD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HBHJPJNKEFB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HBHJPJNKEFB&))((::PBYTE)hIl2Cpp + LIFPCINGGGD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::LIFPCINGGGD AKCNPBAIHBI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LIFPCINGGGD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LIFPCINGGGD_AKCNPBAIHBI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
