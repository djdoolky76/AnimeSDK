#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AGGGPBIOOIG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MEBAPDKJBAI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MEBAPDKJBAI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EF650)
#define MEBAPDKJBAI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MEBAPDKJBAI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MEBAPDKJBAI_KOHCINNEMMP_1_OFFSET UNITYSDK_OFFSET(0x19DB0930)
#define MEBAPDKJBAI_KOHCINNEMMP_OFFSET UNITYSDK_OFFSET(0x19DB08C0)
#define MEBAPDKJBAI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EF640)
#define MEBAPDKJBAI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EF630)
#define MEBAPDKJBAI___INIT_OFFSET UNITYSDK_OFFSET(0x7EF610)

inline static constexpr unsigned int MEBAPDKJBAI_TypeDefinitionIndex = 10748;

struct alignas(8) MEBAPDKJBAI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEBAPDKJBAI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MEBAPDKJBAI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEBAPDKJBAI_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AGGGPBIOOIG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AGGGPBIOOIG&))((::PBYTE)hIl2Cpp + MEBAPDKJBAI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::AGGGPBIOOIG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AGGGPBIOOIG&, ::System::Int32&))((::PBYTE)hIl2Cpp + MEBAPDKJBAI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::MEBAPDKJBAI KOHCINNEMMP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MEBAPDKJBAI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MEBAPDKJBAI_KOHCINNEMMP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::MEBAPDKJBAI KOHCINNEMMP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MEBAPDKJBAI EIFONLCJOPG)
	{
		return ((::MEBAPDKJBAI(*)(::FlatBuffers::ByteBuffer*, ::MEBAPDKJBAI))((::PBYTE)hIl2Cpp + MEBAPDKJBAI_KOHCINNEMMP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEBAPDKJBAI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::MEBAPDKJBAI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MEBAPDKJBAI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MEBAPDKJBAI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
