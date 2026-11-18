#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LGPDLKBDAGI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LHBGIDFEBCB_AFJLEBFPKKC_1_OFFSET UNITYSDK_OFFSET(0x17FB2140)
#define LHBGIDFEBCB_AFJLEBFPKKC_OFFSET UNITYSDK_OFFSET(0x17FB1FA0)
#define LHBGIDFEBCB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LHBGIDFEBCB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C36F0)
#define LHBGIDFEBCB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LHBGIDFEBCB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LHBGIDFEBCB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C3730)
#define LHBGIDFEBCB___INIT_OFFSET UNITYSDK_OFFSET(0x7C36D0)

inline static constexpr unsigned int LHBGIDFEBCB_TypeDefinitionIndex = 17730;

struct alignas(8) LHBGIDFEBCB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBGIDFEBCB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LHBGIDFEBCB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::LHBGIDFEBCB AFJLEBFPKKC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LHBGIDFEBCB EIFONLCJOPG)
	{
		return ((::LHBGIDFEBCB(*)(::FlatBuffers::ByteBuffer*, ::LHBGIDFEBCB))((::PBYTE)hIl2Cpp + LHBGIDFEBCB_AFJLEBFPKKC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBGIDFEBCB_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LGPDLKBDAGI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LGPDLKBDAGI&))((::PBYTE)hIl2Cpp + LHBGIDFEBCB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::LHBGIDFEBCB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LHBGIDFEBCB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LHBGIDFEBCB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBGIDFEBCB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::LHBGIDFEBCB AFJLEBFPKKC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LHBGIDFEBCB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LHBGIDFEBCB_AFJLEBFPKKC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
