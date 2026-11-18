#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CCBEMGKKHKM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IIMNCNOFKKD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IIMNCNOFKKD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7BECC0)
#define IIMNCNOFKKD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IIMNCNOFKKD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IIMNCNOFKKD_IFJFAAPAGOK_1_OFFSET UNITYSDK_OFFSET(0x17C1C2C0)
#define IIMNCNOFKKD_IFJFAAPAGOK_OFFSET UNITYSDK_OFFSET(0x17C1C260)
#define IIMNCNOFKKD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7BECB0)
#define IIMNCNOFKKD___INIT_OFFSET UNITYSDK_OFFSET(0x7BEC90)

inline static constexpr unsigned int IIMNCNOFKKD_TypeDefinitionIndex = 10282;

struct alignas(8) IIMNCNOFKKD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMNCNOFKKD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IIMNCNOFKKD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMNCNOFKKD_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::IIMNCNOFKKD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IIMNCNOFKKD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IIMNCNOFKKD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::IIMNCNOFKKD IFJFAAPAGOK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IIMNCNOFKKD EIFONLCJOPG)
	{
		return ((::IIMNCNOFKKD(*)(::FlatBuffers::ByteBuffer*, ::IIMNCNOFKKD))((::PBYTE)hIl2Cpp + IIMNCNOFKKD_IFJFAAPAGOK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::IIMNCNOFKKD IFJFAAPAGOK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IIMNCNOFKKD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IIMNCNOFKKD_IFJFAAPAGOK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CCBEMGKKHKM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CCBEMGKKHKM&))((::PBYTE)hIl2Cpp + IIMNCNOFKKD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMNCNOFKKD_GHKKNCCLPAN_OFFSET))(this);
	}
};
