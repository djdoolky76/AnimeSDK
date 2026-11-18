#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FFGAABOCKPE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ABJAALLIAJM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ABJAALLIAJM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C1350)
#define ABJAALLIAJM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ABJAALLIAJM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ABJAALLIAJM_HJFOHEKFLBI_1_OFFSET UNITYSDK_OFFSET(0x17EE45B0)
#define ABJAALLIAJM_HJFOHEKFLBI_OFFSET UNITYSDK_OFFSET(0x17EE4510)
#define ABJAALLIAJM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C1340)
#define ABJAALLIAJM___INIT_OFFSET UNITYSDK_OFFSET(0x7C1320)

inline static constexpr unsigned int ABJAALLIAJM_TypeDefinitionIndex = 9229;

struct alignas(8) ABJAALLIAJM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJAALLIAJM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ABJAALLIAJM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FFGAABOCKPE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FFGAABOCKPE&))((::PBYTE)hIl2Cpp + ABJAALLIAJM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJAALLIAJM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::ABJAALLIAJM HJFOHEKFLBI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ABJAALLIAJM EIFONLCJOPG)
	{
		return ((::ABJAALLIAJM(*)(::FlatBuffers::ByteBuffer*, ::ABJAALLIAJM))((::PBYTE)hIl2Cpp + ABJAALLIAJM_HJFOHEKFLBI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJAALLIAJM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::ABJAALLIAJM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ABJAALLIAJM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ABJAALLIAJM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::ABJAALLIAJM HJFOHEKFLBI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ABJAALLIAJM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ABJAALLIAJM_HJFOHEKFLBI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
