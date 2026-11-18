#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NDOPMDCILCK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AEOBAMDJEDB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AEOBAMDJEDB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x825770)
#define AEOBAMDJEDB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AEOBAMDJEDB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AEOBAMDJEDB_JGANGLAPEAC_1_OFFSET UNITYSDK_OFFSET(0x1C507170)
#define AEOBAMDJEDB_JGANGLAPEAC_OFFSET UNITYSDK_OFFSET(0x1C506F50)
#define AEOBAMDJEDB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8257C0)
#define AEOBAMDJEDB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8257B0)
#define AEOBAMDJEDB___INIT_OFFSET UNITYSDK_OFFSET(0x825750)

inline static constexpr unsigned int AEOBAMDJEDB_TypeDefinitionIndex = 12699;

struct alignas(8) AEOBAMDJEDB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEOBAMDJEDB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AEOBAMDJEDB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NDOPMDCILCK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NDOPMDCILCK&))((::PBYTE)hIl2Cpp + AEOBAMDJEDB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::AEOBAMDJEDB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AEOBAMDJEDB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AEOBAMDJEDB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::AEOBAMDJEDB JGANGLAPEAC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AEOBAMDJEDB EIFONLCJOPG)
	{
		return ((::AEOBAMDJEDB(*)(::FlatBuffers::ByteBuffer*, ::AEOBAMDJEDB))((::PBYTE)hIl2Cpp + AEOBAMDJEDB_JGANGLAPEAC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEOBAMDJEDB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEOBAMDJEDB_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NDOPMDCILCK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NDOPMDCILCK&, ::System::Int32&))((::PBYTE)hIl2Cpp + AEOBAMDJEDB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::AEOBAMDJEDB JGANGLAPEAC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AEOBAMDJEDB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AEOBAMDJEDB_JGANGLAPEAC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
