#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KEMILFLDJFP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BCONFMLEGCO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BCONFMLEGCO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x806EE0)
#define BCONFMLEGCO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BCONFMLEGCO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BCONFMLEGCO_HJIBMMIOFEM_1_OFFSET UNITYSDK_OFFSET(0x1ADAE850)
#define BCONFMLEGCO_HJIBMMIOFEM_OFFSET UNITYSDK_OFFSET(0x1ADAE7E0)
#define BCONFMLEGCO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x806F20)
#define BCONFMLEGCO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x806ED0)
#define BCONFMLEGCO___INIT_OFFSET UNITYSDK_OFFSET(0x806EB0)

inline static constexpr unsigned int BCONFMLEGCO_TypeDefinitionIndex = 14288;

struct alignas(8) BCONFMLEGCO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCONFMLEGCO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BCONFMLEGCO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCONFMLEGCO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::BCONFMLEGCO HJIBMMIOFEM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BCONFMLEGCO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BCONFMLEGCO_HJIBMMIOFEM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KEMILFLDJFP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KEMILFLDJFP&))((::PBYTE)hIl2Cpp + BCONFMLEGCO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCONFMLEGCO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::BCONFMLEGCO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BCONFMLEGCO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BCONFMLEGCO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::BCONFMLEGCO HJIBMMIOFEM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BCONFMLEGCO EIFONLCJOPG)
	{
		return ((::BCONFMLEGCO(*)(::FlatBuffers::ByteBuffer*, ::BCONFMLEGCO))((::PBYTE)hIl2Cpp + BCONFMLEGCO_HJIBMMIOFEM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KEMILFLDJFP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KEMILFLDJFP&, ::System::Int32&))((::PBYTE)hIl2Cpp + BCONFMLEGCO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
