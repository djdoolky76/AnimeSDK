#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BJCDCMPJONG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JKFFIKPCJIH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JKFFIKPCJIH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F8CA0)
#define JKFFIKPCJIH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JKFFIKPCJIH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JKFFIKPCJIH_INEFBHBCCGG_1_OFFSET UNITYSDK_OFFSET(0x1A5049F0)
#define JKFFIKPCJIH_INEFBHBCCGG_OFFSET UNITYSDK_OFFSET(0x1A504980)
#define JKFFIKPCJIH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F8CE0)
#define JKFFIKPCJIH___INIT_OFFSET UNITYSDK_OFFSET(0x7F8C80)

inline static constexpr unsigned int JKFFIKPCJIH_TypeDefinitionIndex = 9461;

struct alignas(8) JKFFIKPCJIH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKFFIKPCJIH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JKFFIKPCJIH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKFFIKPCJIH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::JKFFIKPCJIH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JKFFIKPCJIH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JKFFIKPCJIH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BJCDCMPJONG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BJCDCMPJONG&))((::PBYTE)hIl2Cpp + JKFFIKPCJIH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::JKFFIKPCJIH INEFBHBCCGG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JKFFIKPCJIH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JKFFIKPCJIH_INEFBHBCCGG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKFFIKPCJIH_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::JKFFIKPCJIH INEFBHBCCGG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JKFFIKPCJIH EIFONLCJOPG)
	{
		return ((::JKFFIKPCJIH(*)(::FlatBuffers::ByteBuffer*, ::JKFFIKPCJIH))((::PBYTE)hIl2Cpp + JKFFIKPCJIH_INEFBHBCCGG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
