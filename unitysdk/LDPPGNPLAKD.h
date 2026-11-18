#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FCAAGCLGLGM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LDPPGNPLAKD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LDPPGNPLAKD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x810480)
#define LDPPGNPLAKD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LDPPGNPLAKD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LDPPGNPLAKD_ILADNJJNFPJ_1_OFFSET UNITYSDK_OFFSET(0x1B64AD30)
#define LDPPGNPLAKD_ILADNJJNFPJ_OFFSET UNITYSDK_OFFSET(0x1B64ACC0)
#define LDPPGNPLAKD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x810470)
#define LDPPGNPLAKD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x810460)
#define LDPPGNPLAKD___INIT_OFFSET UNITYSDK_OFFSET(0x810440)

inline static constexpr unsigned int LDPPGNPLAKD_TypeDefinitionIndex = 9559;

struct alignas(8) LDPPGNPLAKD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPPGNPLAKD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LDPPGNPLAKD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FCAAGCLGLGM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FCAAGCLGLGM&))((::PBYTE)hIl2Cpp + LDPPGNPLAKD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPPGNPLAKD_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPPGNPLAKD_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FCAAGCLGLGM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FCAAGCLGLGM&, ::System::Int32&))((::PBYTE)hIl2Cpp + LDPPGNPLAKD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::LDPPGNPLAKD ILADNJJNFPJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LDPPGNPLAKD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LDPPGNPLAKD_ILADNJJNFPJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::LDPPGNPLAKD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LDPPGNPLAKD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LDPPGNPLAKD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::LDPPGNPLAKD ILADNJJNFPJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LDPPGNPLAKD EIFONLCJOPG)
	{
		return ((::LDPPGNPLAKD(*)(::FlatBuffers::ByteBuffer*, ::LDPPGNPLAKD))((::PBYTE)hIl2Cpp + LDPPGNPLAKD_ILADNJJNFPJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
