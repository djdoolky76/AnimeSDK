#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LPOCFHBPIOJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KJHIIKAFIOM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KJHIIKAFIOM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D6EF0)
#define KJHIIKAFIOM_DAMKBMGKJML_1_OFFSET UNITYSDK_OFFSET(0x18DE9A80)
#define KJHIIKAFIOM_DAMKBMGKJML_OFFSET UNITYSDK_OFFSET(0x18DE9A10)
#define KJHIIKAFIOM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KJHIIKAFIOM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KJHIIKAFIOM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D6F40)
#define KJHIIKAFIOM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D6F30)
#define KJHIIKAFIOM___INIT_OFFSET UNITYSDK_OFFSET(0x7D6ED0)

inline static constexpr unsigned int KJHIIKAFIOM_TypeDefinitionIndex = 9267;

struct alignas(8) KJHIIKAFIOM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHIIKAFIOM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KJHIIKAFIOM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::KJHIIKAFIOM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KJHIIKAFIOM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KJHIIKAFIOM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::KJHIIKAFIOM DAMKBMGKJML(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KJHIIKAFIOM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KJHIIKAFIOM_DAMKBMGKJML_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::KJHIIKAFIOM DAMKBMGKJML_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KJHIIKAFIOM EIFONLCJOPG)
	{
		return ((::KJHIIKAFIOM(*)(::FlatBuffers::ByteBuffer*, ::KJHIIKAFIOM))((::PBYTE)hIl2Cpp + KJHIIKAFIOM_DAMKBMGKJML_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHIIKAFIOM_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHIIKAFIOM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LPOCFHBPIOJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LPOCFHBPIOJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + KJHIIKAFIOM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LPOCFHBPIOJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LPOCFHBPIOJ&))((::PBYTE)hIl2Cpp + KJHIIKAFIOM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
