#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GJLMEDJDLJM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AIIOFMPIMOG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AIIOFMPIMOG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7AC0E0)
#define AIIOFMPIMOG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AIIOFMPIMOG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AIIOFMPIMOG_LLLHLCKIEAP_1_OFFSET UNITYSDK_OFFSET(0x17748F40)
#define AIIOFMPIMOG_LLLHLCKIEAP_OFFSET UNITYSDK_OFFSET(0x17748E40)
#define AIIOFMPIMOG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7AC120)
#define AIIOFMPIMOG___INIT_OFFSET UNITYSDK_OFFSET(0x7AC0C0)

inline static constexpr unsigned int AIIOFMPIMOG_TypeDefinitionIndex = 12719;

struct alignas(8) AIIOFMPIMOG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIOFMPIMOG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AIIOFMPIMOG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::AIIOFMPIMOG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AIIOFMPIMOG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AIIOFMPIMOG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::AIIOFMPIMOG LLLHLCKIEAP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AIIOFMPIMOG EIFONLCJOPG)
	{
		return ((::AIIOFMPIMOG(*)(::FlatBuffers::ByteBuffer*, ::AIIOFMPIMOG))((::PBYTE)hIl2Cpp + AIIOFMPIMOG_LLLHLCKIEAP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GJLMEDJDLJM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GJLMEDJDLJM&))((::PBYTE)hIl2Cpp + AIIOFMPIMOG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::AIIOFMPIMOG LLLHLCKIEAP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AIIOFMPIMOG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AIIOFMPIMOG_LLLHLCKIEAP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIOFMPIMOG_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIOFMPIMOG_PPOMNIFACOL_OFFSET))(this);
	}
};
