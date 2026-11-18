#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BABCDECFOPP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EBOMOLHKEFI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EBOMOLHKEFI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FA5E0)
#define EBOMOLHKEFI_CCLKALLLGDA_1_OFFSET UNITYSDK_OFFSET(0x1A55D680)
#define EBOMOLHKEFI_CCLKALLLGDA_OFFSET UNITYSDK_OFFSET(0x1A55D610)
#define EBOMOLHKEFI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EBOMOLHKEFI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EBOMOLHKEFI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FA620)
#define EBOMOLHKEFI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FA630)
#define EBOMOLHKEFI___INIT_OFFSET UNITYSDK_OFFSET(0x7FA5C0)

inline static constexpr unsigned int EBOMOLHKEFI_TypeDefinitionIndex = 15266;

struct alignas(8) EBOMOLHKEFI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBOMOLHKEFI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBOMOLHKEFI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BABCDECFOPP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BABCDECFOPP&))((::PBYTE)hIl2Cpp + EBOMOLHKEFI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::EBOMOLHKEFI CCLKALLLGDA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EBOMOLHKEFI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBOMOLHKEFI_CCLKALLLGDA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::EBOMOLHKEFI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EBOMOLHKEFI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBOMOLHKEFI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBOMOLHKEFI_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BABCDECFOPP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BABCDECFOPP&, ::System::Int32&))((::PBYTE)hIl2Cpp + EBOMOLHKEFI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::EBOMOLHKEFI CCLKALLLGDA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EBOMOLHKEFI EIFONLCJOPG)
	{
		return ((::EBOMOLHKEFI(*)(::FlatBuffers::ByteBuffer*, ::EBOMOLHKEFI))((::PBYTE)hIl2Cpp + EBOMOLHKEFI_CCLKALLLGDA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBOMOLHKEFI_PPOMNIFACOL_OFFSET))(this);
	}
};
