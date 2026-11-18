#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PHCLFOFFJAN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DFAEEJDDLII_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DFAEEJDDLII_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FA140)
#define DFAEEJDDLII_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DFAEEJDDLII_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DFAEEJDDLII_KBJMCLIPKNA_1_OFFSET UNITYSDK_OFFSET(0x1A551E40)
#define DFAEEJDDLII_KBJMCLIPKNA_OFFSET UNITYSDK_OFFSET(0x1A551DD0)
#define DFAEEJDDLII_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FA190)
#define DFAEEJDDLII_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FA180)
#define DFAEEJDDLII___INIT_OFFSET UNITYSDK_OFFSET(0x7FA120)

inline static constexpr unsigned int DFAEEJDDLII_TypeDefinitionIndex = 9735;

struct alignas(8) DFAEEJDDLII
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFAEEJDDLII_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFAEEJDDLII___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFAEEJDDLII_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::DFAEEJDDLII BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DFAEEJDDLII(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFAEEJDDLII_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::DFAEEJDDLII KBJMCLIPKNA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DFAEEJDDLII(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFAEEJDDLII_KBJMCLIPKNA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::DFAEEJDDLII KBJMCLIPKNA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DFAEEJDDLII EIFONLCJOPG)
	{
		return ((::DFAEEJDDLII(*)(::FlatBuffers::ByteBuffer*, ::DFAEEJDDLII))((::PBYTE)hIl2Cpp + DFAEEJDDLII_KBJMCLIPKNA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PHCLFOFFJAN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PHCLFOFFJAN&))((::PBYTE)hIl2Cpp + DFAEEJDDLII_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFAEEJDDLII_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PHCLFOFFJAN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PHCLFOFFJAN&, ::System::Int32&))((::PBYTE)hIl2Cpp + DFAEEJDDLII_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
