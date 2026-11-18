#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IMJFNCAMMFB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BACJNNDKNDE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BACJNNDKNDE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C1510)
#define BACJNNDKNDE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BACJNNDKNDE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BACJNNDKNDE_KCCJOCCHLIF_1_OFFSET UNITYSDK_OFFSET(0x17EEAA90)
#define BACJNNDKNDE_KCCJOCCHLIF_OFFSET UNITYSDK_OFFSET(0x17EEAA20)
#define BACJNNDKNDE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7C1550)
#define BACJNNDKNDE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C1560)
#define BACJNNDKNDE___INIT_OFFSET UNITYSDK_OFFSET(0x7C14F0)

inline static constexpr unsigned int BACJNNDKNDE_TypeDefinitionIndex = 12902;

struct alignas(8) BACJNNDKNDE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BACJNNDKNDE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BACJNNDKNDE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::BACJNNDKNDE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BACJNNDKNDE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BACJNNDKNDE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IMJFNCAMMFB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IMJFNCAMMFB&, ::System::Int32&))((::PBYTE)hIl2Cpp + BACJNNDKNDE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::BACJNNDKNDE KCCJOCCHLIF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BACJNNDKNDE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BACJNNDKNDE_KCCJOCCHLIF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IMJFNCAMMFB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IMJFNCAMMFB&))((::PBYTE)hIl2Cpp + BACJNNDKNDE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BACJNNDKNDE_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BACJNNDKNDE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::BACJNNDKNDE KCCJOCCHLIF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BACJNNDKNDE EIFONLCJOPG)
	{
		return ((::BACJNNDKNDE(*)(::FlatBuffers::ByteBuffer*, ::BACJNNDKNDE))((::PBYTE)hIl2Cpp + BACJNNDKNDE_KCCJOCCHLIF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
