#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KPKDNBPJMNG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PHNDHHIPCLH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PHNDHHIPCLH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x9382A0)
#define PHNDHHIPCLH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PHNDHHIPCLH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PHNDHHIPCLH_JMMAEGJPIJA_1_OFFSET UNITYSDK_OFFSET(0x1EE02650)
#define PHNDHHIPCLH_JMMAEGJPIJA_OFFSET UNITYSDK_OFFSET(0x1EE025E0)
#define PHNDHHIPCLH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x938290)
#define PHNDHHIPCLH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x938280)
#define PHNDHHIPCLH___INIT_OFFSET UNITYSDK_OFFSET(0x938260)

inline static constexpr unsigned int PHNDHHIPCLH_TypeDefinitionIndex = 15870;

struct alignas(8) PHNDHHIPCLH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHNDHHIPCLH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PHNDHHIPCLH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHNDHHIPCLH_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHNDHHIPCLH_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KPKDNBPJMNG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KPKDNBPJMNG&))((::PBYTE)hIl2Cpp + PHNDHHIPCLH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KPKDNBPJMNG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KPKDNBPJMNG&, ::System::Int32&))((::PBYTE)hIl2Cpp + PHNDHHIPCLH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::PHNDHHIPCLH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PHNDHHIPCLH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PHNDHHIPCLH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PHNDHHIPCLH JMMAEGJPIJA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PHNDHHIPCLH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PHNDHHIPCLH_JMMAEGJPIJA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::PHNDHHIPCLH JMMAEGJPIJA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PHNDHHIPCLH EIFONLCJOPG)
	{
		return ((::PHNDHHIPCLH(*)(::FlatBuffers::ByteBuffer*, ::PHNDHHIPCLH))((::PBYTE)hIl2Cpp + PHNDHHIPCLH_JMMAEGJPIJA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
