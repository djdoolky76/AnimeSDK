#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LALLHKLJPKE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MEEBPCFEFBK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MEEBPCFEFBK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D7AF0)
#define MEEBPCFEFBK_CHLIABJKKNO_1_OFFSET UNITYSDK_OFFSET(0x18E05540)
#define MEEBPCFEFBK_CHLIABJKKNO_OFFSET UNITYSDK_OFFSET(0x18E054D0)
#define MEEBPCFEFBK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MEEBPCFEFBK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MEEBPCFEFBK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D7AE0)
#define MEEBPCFEFBK___INIT_OFFSET UNITYSDK_OFFSET(0x7D7AC0)

inline static constexpr unsigned int MEEBPCFEFBK_TypeDefinitionIndex = 17634;

struct alignas(8) MEEBPCFEFBK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEBPCFEFBK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MEEBPCFEFBK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEBPCFEFBK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::MEEBPCFEFBK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MEEBPCFEFBK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MEEBPCFEFBK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MEEBPCFEFBK CHLIABJKKNO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MEEBPCFEFBK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MEEBPCFEFBK_CHLIABJKKNO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEBPCFEFBK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MEEBPCFEFBK CHLIABJKKNO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MEEBPCFEFBK EIFONLCJOPG)
	{
		return ((::MEEBPCFEFBK(*)(::FlatBuffers::ByteBuffer*, ::MEEBPCFEFBK))((::PBYTE)hIl2Cpp + MEEBPCFEFBK_CHLIABJKKNO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LALLHKLJPKE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LALLHKLJPKE&))((::PBYTE)hIl2Cpp + MEEBPCFEFBK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
