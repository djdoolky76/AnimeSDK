#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AHKNPMCGPJL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PMHJDHHFAOD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PMHJDHHFAOD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C4FE0)
#define PMHJDHHFAOD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PMHJDHHFAOD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PMHJDHHFAOD_LJCOJGIJELP_1_OFFSET UNITYSDK_OFFSET(0x17FEF400)
#define PMHJDHHFAOD_LJCOJGIJELP_OFFSET UNITYSDK_OFFSET(0x17FEF140)
#define PMHJDHHFAOD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7C5030)
#define PMHJDHHFAOD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C5020)
#define PMHJDHHFAOD___INIT_OFFSET UNITYSDK_OFFSET(0x7C4FC0)

inline static constexpr unsigned int PMHJDHHFAOD_TypeDefinitionIndex = 9448;

struct alignas(8) PMHJDHHFAOD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHJDHHFAOD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PMHJDHHFAOD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::PMHJDHHFAOD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PMHJDHHFAOD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PMHJDHHFAOD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PMHJDHHFAOD LJCOJGIJELP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PMHJDHHFAOD EIFONLCJOPG)
	{
		return ((::PMHJDHHFAOD(*)(::FlatBuffers::ByteBuffer*, ::PMHJDHHFAOD))((::PBYTE)hIl2Cpp + PMHJDHHFAOD_LJCOJGIJELP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHJDHHFAOD_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::AHKNPMCGPJL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AHKNPMCGPJL&, ::System::Int32&))((::PBYTE)hIl2Cpp + PMHJDHHFAOD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::PMHJDHHFAOD LJCOJGIJELP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PMHJDHHFAOD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PMHJDHHFAOD_LJCOJGIJELP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHJDHHFAOD_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AHKNPMCGPJL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AHKNPMCGPJL&))((::PBYTE)hIl2Cpp + PMHJDHHFAOD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
