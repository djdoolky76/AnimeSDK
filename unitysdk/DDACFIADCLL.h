#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LGCKGNOPJAF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DDACFIADCLL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DDACFIADCLL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FA060)
#define DDACFIADCLL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DDACFIADCLL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DDACFIADCLL_ILGEIDNHKLE_1_OFFSET UNITYSDK_OFFSET(0x1A54E740)
#define DDACFIADCLL_ILGEIDNHKLE_OFFSET UNITYSDK_OFFSET(0x1A54E6D0)
#define DDACFIADCLL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FA050)
#define DDACFIADCLL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FA040)
#define DDACFIADCLL___INIT_OFFSET UNITYSDK_OFFSET(0x7FA020)

inline static constexpr unsigned int DDACFIADCLL_TypeDefinitionIndex = 12068;

struct alignas(8) DDACFIADCLL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDACFIADCLL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DDACFIADCLL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDACFIADCLL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::DDACFIADCLL ILGEIDNHKLE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DDACFIADCLL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DDACFIADCLL_ILGEIDNHKLE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDACFIADCLL_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LGCKGNOPJAF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LGCKGNOPJAF&))((::PBYTE)hIl2Cpp + DDACFIADCLL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LGCKGNOPJAF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LGCKGNOPJAF&, ::System::Int32&))((::PBYTE)hIl2Cpp + DDACFIADCLL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::DDACFIADCLL ILGEIDNHKLE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DDACFIADCLL EIFONLCJOPG)
	{
		return ((::DDACFIADCLL(*)(::FlatBuffers::ByteBuffer*, ::DDACFIADCLL))((::PBYTE)hIl2Cpp + DDACFIADCLL_ILGEIDNHKLE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::DDACFIADCLL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DDACFIADCLL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DDACFIADCLL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
