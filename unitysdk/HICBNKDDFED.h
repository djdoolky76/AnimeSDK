#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LPMFOADIELK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HICBNKDDFED_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HICBNKDDFED_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x779F20)
#define HICBNKDDFED_EACDLOOMLKO_1_OFFSET UNITYSDK_OFFSET(0x160F6790)
#define HICBNKDDFED_EACDLOOMLKO_OFFSET UNITYSDK_OFFSET(0x160F66F0)
#define HICBNKDDFED_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HICBNKDDFED_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HICBNKDDFED_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x779F60)
#define HICBNKDDFED_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x779F10)
#define HICBNKDDFED___INIT_OFFSET UNITYSDK_OFFSET(0x779EF0)

inline static constexpr unsigned int HICBNKDDFED_TypeDefinitionIndex = 16647;

struct alignas(8) HICBNKDDFED
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HICBNKDDFED_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HICBNKDDFED___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HICBNKDDFED_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::HICBNKDDFED EACDLOOMLKO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HICBNKDDFED EIFONLCJOPG)
	{
		return ((::HICBNKDDFED(*)(::FlatBuffers::ByteBuffer*, ::HICBNKDDFED))((::PBYTE)hIl2Cpp + HICBNKDDFED_EACDLOOMLKO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::HICBNKDDFED BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HICBNKDDFED(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HICBNKDDFED_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HICBNKDDFED EACDLOOMLKO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HICBNKDDFED(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HICBNKDDFED_EACDLOOMLKO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HICBNKDDFED_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LPMFOADIELK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LPMFOADIELK&))((::PBYTE)hIl2Cpp + HICBNKDDFED_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LPMFOADIELK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LPMFOADIELK&, ::System::Int32&))((::PBYTE)hIl2Cpp + HICBNKDDFED_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
