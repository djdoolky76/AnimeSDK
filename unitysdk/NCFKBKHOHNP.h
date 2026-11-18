#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FACNPAENIFN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NCFKBKHOHNP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NCFKBKHOHNP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8AB2A0)
#define NCFKBKHOHNP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NCFKBKHOHNP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NCFKBKHOHNP_KPBIOHJJBBJ_1_OFFSET UNITYSDK_OFFSET(0x1CFE6E10)
#define NCFKBKHOHNP_KPBIOHJJBBJ_OFFSET UNITYSDK_OFFSET(0x1CFE6DA0)
#define NCFKBKHOHNP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8AB290)
#define NCFKBKHOHNP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8AB280)
#define NCFKBKHOHNP___INIT_OFFSET UNITYSDK_OFFSET(0x8AB260)

inline static constexpr unsigned int NCFKBKHOHNP_TypeDefinitionIndex = 16626;

struct alignas(8) NCFKBKHOHNP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFKBKHOHNP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NCFKBKHOHNP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NCFKBKHOHNP KPBIOHJJBBJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NCFKBKHOHNP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NCFKBKHOHNP_KPBIOHJJBBJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFKBKHOHNP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FACNPAENIFN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FACNPAENIFN&, ::System::Int32&))((::PBYTE)hIl2Cpp + NCFKBKHOHNP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::NCFKBKHOHNP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NCFKBKHOHNP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NCFKBKHOHNP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FACNPAENIFN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FACNPAENIFN&))((::PBYTE)hIl2Cpp + NCFKBKHOHNP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::NCFKBKHOHNP KPBIOHJJBBJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NCFKBKHOHNP EIFONLCJOPG)
	{
		return ((::NCFKBKHOHNP(*)(::FlatBuffers::ByteBuffer*, ::NCFKBKHOHNP))((::PBYTE)hIl2Cpp + NCFKBKHOHNP_KPBIOHJJBBJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFKBKHOHNP_GHKKNCCLPAN_OFFSET))(this);
	}
};
