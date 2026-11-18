#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BMHOICGHFPC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NBFGEEIBCOE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NBFGEEIBCOE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80BDC0)
#define NBFGEEIBCOE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NBFGEEIBCOE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NBFGEEIBCOE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80BE10)
#define NBFGEEIBCOE_PNBIHNLFDDB_1_OFFSET UNITYSDK_OFFSET(0x1B322C10)
#define NBFGEEIBCOE_PNBIHNLFDDB_OFFSET UNITYSDK_OFFSET(0x1B322BA0)
#define NBFGEEIBCOE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80BE00)
#define NBFGEEIBCOE___INIT_OFFSET UNITYSDK_OFFSET(0x80BDA0)

inline static constexpr unsigned int NBFGEEIBCOE_TypeDefinitionIndex = 11968;

struct alignas(8) NBFGEEIBCOE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBFGEEIBCOE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NBFGEEIBCOE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NBFGEEIBCOE PNBIHNLFDDB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NBFGEEIBCOE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NBFGEEIBCOE_PNBIHNLFDDB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::NBFGEEIBCOE PNBIHNLFDDB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NBFGEEIBCOE EIFONLCJOPG)
	{
		return ((::NBFGEEIBCOE(*)(::FlatBuffers::ByteBuffer*, ::NBFGEEIBCOE))((::PBYTE)hIl2Cpp + NBFGEEIBCOE_PNBIHNLFDDB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::NBFGEEIBCOE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NBFGEEIBCOE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NBFGEEIBCOE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBFGEEIBCOE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BMHOICGHFPC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BMHOICGHFPC&, ::System::Int32&))((::PBYTE)hIl2Cpp + NBFGEEIBCOE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BMHOICGHFPC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BMHOICGHFPC&))((::PBYTE)hIl2Cpp + NBFGEEIBCOE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBFGEEIBCOE_GHKKNCCLPAN_OFFSET))(this);
	}
};
