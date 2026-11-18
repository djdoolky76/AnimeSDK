#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LDEIMMJNANN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EMFEOMMEJHC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EMFEOMMEJHC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EAD10)
#define EMFEOMMEJHC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EMFEOMMEJHC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EMFEOMMEJHC_KFIEIDEAOCA_1_OFFSET UNITYSDK_OFFSET(0x19AE9D80)
#define EMFEOMMEJHC_KFIEIDEAOCA_OFFSET UNITYSDK_OFFSET(0x19AE9D10)
#define EMFEOMMEJHC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EAD50)
#define EMFEOMMEJHC___INIT_OFFSET UNITYSDK_OFFSET(0x7EACF0)

inline static constexpr unsigned int EMFEOMMEJHC_TypeDefinitionIndex = 11933;

struct alignas(8) EMFEOMMEJHC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFEOMMEJHC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EMFEOMMEJHC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::EMFEOMMEJHC KFIEIDEAOCA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EMFEOMMEJHC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EMFEOMMEJHC_KFIEIDEAOCA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::EMFEOMMEJHC KFIEIDEAOCA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EMFEOMMEJHC EIFONLCJOPG)
	{
		return ((::EMFEOMMEJHC(*)(::FlatBuffers::ByteBuffer*, ::EMFEOMMEJHC))((::PBYTE)hIl2Cpp + EMFEOMMEJHC_KFIEIDEAOCA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LDEIMMJNANN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LDEIMMJNANN&))((::PBYTE)hIl2Cpp + EMFEOMMEJHC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::EMFEOMMEJHC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EMFEOMMEJHC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EMFEOMMEJHC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFEOMMEJHC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFEOMMEJHC_GHKKNCCLPAN_OFFSET))(this);
	}
};
