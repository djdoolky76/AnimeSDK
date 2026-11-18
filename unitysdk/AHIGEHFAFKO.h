#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FHPMMKPHGJO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AHIGEHFAFKO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AHIGEHFAFKO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F1400)
#define AHIGEHFAFKO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AHIGEHFAFKO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AHIGEHFAFKO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F1440)
#define AHIGEHFAFKO_OPOGJCHDHPG_1_OFFSET UNITYSDK_OFFSET(0x19F0DB30)
#define AHIGEHFAFKO_OPOGJCHDHPG_OFFSET UNITYSDK_OFFSET(0x19F0D830)
#define AHIGEHFAFKO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F1450)
#define AHIGEHFAFKO___INIT_OFFSET UNITYSDK_OFFSET(0x7F13E0)

inline static constexpr unsigned int AHIGEHFAFKO_TypeDefinitionIndex = 16007;

struct alignas(8) AHIGEHFAFKO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHIGEHFAFKO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AHIGEHFAFKO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::AHIGEHFAFKO OPOGJCHDHPG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AHIGEHFAFKO EIFONLCJOPG)
	{
		return ((::AHIGEHFAFKO(*)(::FlatBuffers::ByteBuffer*, ::AHIGEHFAFKO))((::PBYTE)hIl2Cpp + AHIGEHFAFKO_OPOGJCHDHPG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FHPMMKPHGJO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FHPMMKPHGJO&))((::PBYTE)hIl2Cpp + AHIGEHFAFKO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::AHIGEHFAFKO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AHIGEHFAFKO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AHIGEHFAFKO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FHPMMKPHGJO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FHPMMKPHGJO&, ::System::Int32&))((::PBYTE)hIl2Cpp + AHIGEHFAFKO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHIGEHFAFKO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::AHIGEHFAFKO OPOGJCHDHPG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AHIGEHFAFKO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AHIGEHFAFKO_OPOGJCHDHPG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHIGEHFAFKO_GHKKNCCLPAN_OFFSET))(this);
	}
};
