#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JPILLCBDLDK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FLLKFCEOLLC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FLLKFCEOLLC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80D220)
#define FLLKFCEOLLC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FLLKFCEOLLC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FLLKFCEOLLC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80D270)
#define FLLKFCEOLLC_PPCCPCODHEM_1_OFFSET UNITYSDK_OFFSET(0x1B4C7420)
#define FLLKFCEOLLC_PPCCPCODHEM_OFFSET UNITYSDK_OFFSET(0x1B4C73C0)
#define FLLKFCEOLLC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80D260)
#define FLLKFCEOLLC___INIT_OFFSET UNITYSDK_OFFSET(0x80D200)

inline static constexpr unsigned int FLLKFCEOLLC_TypeDefinitionIndex = 16611;

struct alignas(8) FLLKFCEOLLC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLLKFCEOLLC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FLLKFCEOLLC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::FLLKFCEOLLC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FLLKFCEOLLC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FLLKFCEOLLC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLLKFCEOLLC_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JPILLCBDLDK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JPILLCBDLDK&))((::PBYTE)hIl2Cpp + FLLKFCEOLLC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLLKFCEOLLC_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::FLLKFCEOLLC PPCCPCODHEM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FLLKFCEOLLC EIFONLCJOPG)
	{
		return ((::FLLKFCEOLLC(*)(::FlatBuffers::ByteBuffer*, ::FLLKFCEOLLC))((::PBYTE)hIl2Cpp + FLLKFCEOLLC_PPCCPCODHEM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::FLLKFCEOLLC PPCCPCODHEM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FLLKFCEOLLC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FLLKFCEOLLC_PPCCPCODHEM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JPILLCBDLDK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JPILLCBDLDK&, ::System::Int32&))((::PBYTE)hIl2Cpp + FLLKFCEOLLC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
