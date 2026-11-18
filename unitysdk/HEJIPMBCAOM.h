#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BECPPCLMMCD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HEJIPMBCAOM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HEJIPMBCAOM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DED10)
#define HEJIPMBCAOM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HEJIPMBCAOM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HEJIPMBCAOM_IJKCLJHEOPD_1_OFFSET UNITYSDK_OFFSET(0x19340CF0)
#define HEJIPMBCAOM_IJKCLJHEOPD_OFFSET UNITYSDK_OFFSET(0x19340BF0)
#define HEJIPMBCAOM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7DED50)
#define HEJIPMBCAOM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DED60)
#define HEJIPMBCAOM___INIT_OFFSET UNITYSDK_OFFSET(0x7DECF0)

inline static constexpr unsigned int HEJIPMBCAOM_TypeDefinitionIndex = 13343;

struct alignas(8) HEJIPMBCAOM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEJIPMBCAOM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HEJIPMBCAOM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HEJIPMBCAOM IJKCLJHEOPD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HEJIPMBCAOM EIFONLCJOPG)
	{
		return ((::HEJIPMBCAOM(*)(::FlatBuffers::ByteBuffer*, ::HEJIPMBCAOM))((::PBYTE)hIl2Cpp + HEJIPMBCAOM_IJKCLJHEOPD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::HEJIPMBCAOM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HEJIPMBCAOM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HEJIPMBCAOM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEJIPMBCAOM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::HEJIPMBCAOM IJKCLJHEOPD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HEJIPMBCAOM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HEJIPMBCAOM_IJKCLJHEOPD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BECPPCLMMCD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BECPPCLMMCD&))((::PBYTE)hIl2Cpp + HEJIPMBCAOM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BECPPCLMMCD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BECPPCLMMCD&, ::System::Int32&))((::PBYTE)hIl2Cpp + HEJIPMBCAOM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEJIPMBCAOM_PPOMNIFACOL_OFFSET))(this);
	}
};
