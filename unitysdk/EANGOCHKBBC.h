#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GLEIPGJKMAO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EANGOCHKBBC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EANGOCHKBBC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8173C0)
#define EANGOCHKBBC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EANGOCHKBBC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EANGOCHKBBC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8173B0)
#define EANGOCHKBBC_MEDLIANODPC_1_OFFSET UNITYSDK_OFFSET(0x1B9B0530)
#define EANGOCHKBBC_MEDLIANODPC_OFFSET UNITYSDK_OFFSET(0x1B9B0490)
#define EANGOCHKBBC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8173A0)
#define EANGOCHKBBC___INIT_OFFSET UNITYSDK_OFFSET(0x817380)

inline static constexpr unsigned int EANGOCHKBBC_TypeDefinitionIndex = 10987;

struct alignas(8) EANGOCHKBBC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EANGOCHKBBC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EANGOCHKBBC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::EANGOCHKBBC MEDLIANODPC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EANGOCHKBBC EIFONLCJOPG)
	{
		return ((::EANGOCHKBBC(*)(::FlatBuffers::ByteBuffer*, ::EANGOCHKBBC))((::PBYTE)hIl2Cpp + EANGOCHKBBC_MEDLIANODPC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::EANGOCHKBBC MEDLIANODPC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EANGOCHKBBC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EANGOCHKBBC_MEDLIANODPC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EANGOCHKBBC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EANGOCHKBBC_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GLEIPGJKMAO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GLEIPGJKMAO&, ::System::Int32&))((::PBYTE)hIl2Cpp + EANGOCHKBBC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GLEIPGJKMAO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GLEIPGJKMAO&))((::PBYTE)hIl2Cpp + EANGOCHKBBC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::EANGOCHKBBC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EANGOCHKBBC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EANGOCHKBBC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
