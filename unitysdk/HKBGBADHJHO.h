#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OBMIJJINNDC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HKBGBADHJHO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HKBGBADHJHO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D4C70)
#define HKBGBADHJHO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HKBGBADHJHO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HKBGBADHJHO_IDHDOKOAEDF_1_OFFSET UNITYSDK_OFFSET(0x18BB0730)
#define HKBGBADHJHO_IDHDOKOAEDF_OFFSET UNITYSDK_OFFSET(0x18BB0490)
#define HKBGBADHJHO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D4C60)
#define HKBGBADHJHO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D4C50)
#define HKBGBADHJHO___INIT_OFFSET UNITYSDK_OFFSET(0x7D4C30)

inline static constexpr unsigned int HKBGBADHJHO_TypeDefinitionIndex = 16619;

struct alignas(8) HKBGBADHJHO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKBGBADHJHO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKBGBADHJHO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKBGBADHJHO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::HKBGBADHJHO IDHDOKOAEDF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HKBGBADHJHO EIFONLCJOPG)
	{
		return ((::HKBGBADHJHO(*)(::FlatBuffers::ByteBuffer*, ::HKBGBADHJHO))((::PBYTE)hIl2Cpp + HKBGBADHJHO_IDHDOKOAEDF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKBGBADHJHO_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OBMIJJINNDC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OBMIJJINNDC&, ::System::Int32&))((::PBYTE)hIl2Cpp + HKBGBADHJHO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::HKBGBADHJHO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HKBGBADHJHO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKBGBADHJHO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OBMIJJINNDC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OBMIJJINNDC&))((::PBYTE)hIl2Cpp + HKBGBADHJHO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::HKBGBADHJHO IDHDOKOAEDF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HKBGBADHJHO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKBGBADHJHO_IDHDOKOAEDF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
