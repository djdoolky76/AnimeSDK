#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OHMJJNECAEE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KOBFGHCLLPH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KOBFGHCLLPH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FDE70)
#define KOBFGHCLLPH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KOBFGHCLLPH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KOBFGHCLLPH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FDEB0)
#define KOBFGHCLLPH_PDCNJGPCOJB_1_OFFSET UNITYSDK_OFFSET(0x1A5FCD40)
#define KOBFGHCLLPH_PDCNJGPCOJB_OFFSET UNITYSDK_OFFSET(0x1A5FCB20)
#define KOBFGHCLLPH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FDEC0)
#define KOBFGHCLLPH___INIT_OFFSET UNITYSDK_OFFSET(0x7FDE50)

inline static constexpr unsigned int KOBFGHCLLPH_TypeDefinitionIndex = 17340;

struct alignas(8) KOBFGHCLLPH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBFGHCLLPH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KOBFGHCLLPH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OHMJJNECAEE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OHMJJNECAEE&))((::PBYTE)hIl2Cpp + KOBFGHCLLPH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::KOBFGHCLLPH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KOBFGHCLLPH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KOBFGHCLLPH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::KOBFGHCLLPH PDCNJGPCOJB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KOBFGHCLLPH EIFONLCJOPG)
	{
		return ((::KOBFGHCLLPH(*)(::FlatBuffers::ByteBuffer*, ::KOBFGHCLLPH))((::PBYTE)hIl2Cpp + KOBFGHCLLPH_PDCNJGPCOJB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OHMJJNECAEE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OHMJJNECAEE&, ::System::Int32&))((::PBYTE)hIl2Cpp + KOBFGHCLLPH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBFGHCLLPH_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBFGHCLLPH_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::KOBFGHCLLPH PDCNJGPCOJB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KOBFGHCLLPH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KOBFGHCLLPH_PDCNJGPCOJB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
