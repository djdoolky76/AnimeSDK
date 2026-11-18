#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GIAAAJFOOOK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BEKHPCACIPD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BEKHPCACIPD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7642C0)
#define BEKHPCACIPD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BEKHPCACIPD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BEKHPCACIPD_HLMPOGBCLHD_1_OFFSET UNITYSDK_OFFSET(0x1577CC90)
#define BEKHPCACIPD_HLMPOGBCLHD_OFFSET UNITYSDK_OFFSET(0x1577CBF0)
#define BEKHPCACIPD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x764300)
#define BEKHPCACIPD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7642B0)
#define BEKHPCACIPD___INIT_OFFSET UNITYSDK_OFFSET(0x764290)

inline static constexpr unsigned int BEKHPCACIPD_TypeDefinitionIndex = 13620;

struct alignas(8) BEKHPCACIPD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKHPCACIPD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BEKHPCACIPD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GIAAAJFOOOK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GIAAAJFOOOK&))((::PBYTE)hIl2Cpp + BEKHPCACIPD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKHPCACIPD_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::BEKHPCACIPD HLMPOGBCLHD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BEKHPCACIPD EIFONLCJOPG)
	{
		return ((::BEKHPCACIPD(*)(::FlatBuffers::ByteBuffer*, ::BEKHPCACIPD))((::PBYTE)hIl2Cpp + BEKHPCACIPD_HLMPOGBCLHD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::BEKHPCACIPD HLMPOGBCLHD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BEKHPCACIPD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BEKHPCACIPD_HLMPOGBCLHD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::BEKHPCACIPD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BEKHPCACIPD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BEKHPCACIPD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GIAAAJFOOOK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GIAAAJFOOOK&, ::System::Int32&))((::PBYTE)hIl2Cpp + BEKHPCACIPD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKHPCACIPD_GHKKNCCLPAN_OFFSET))(this);
	}
};
