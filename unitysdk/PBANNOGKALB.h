#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MILBALJALGH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PBANNOGKALB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PBANNOGKALB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A6C90)
#define PBANNOGKALB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PBANNOGKALB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PBANNOGKALB_IILPLOGHIPO_1_OFFSET UNITYSDK_OFFSET(0x17372F80)
#define PBANNOGKALB_IILPLOGHIPO_OFFSET UNITYSDK_OFFSET(0x17372F10)
#define PBANNOGKALB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A6CD0)
#define PBANNOGKALB___INIT_OFFSET UNITYSDK_OFFSET(0x7A6C70)

inline static constexpr unsigned int PBANNOGKALB_TypeDefinitionIndex = 13749;

struct alignas(8) PBANNOGKALB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBANNOGKALB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PBANNOGKALB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::PBANNOGKALB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PBANNOGKALB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PBANNOGKALB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MILBALJALGH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MILBALJALGH&))((::PBYTE)hIl2Cpp + PBANNOGKALB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::PBANNOGKALB IILPLOGHIPO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PBANNOGKALB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PBANNOGKALB_IILPLOGHIPO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBANNOGKALB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::PBANNOGKALB IILPLOGHIPO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PBANNOGKALB EIFONLCJOPG)
	{
		return ((::PBANNOGKALB(*)(::FlatBuffers::ByteBuffer*, ::PBANNOGKALB))((::PBYTE)hIl2Cpp + PBANNOGKALB_IILPLOGHIPO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBANNOGKALB_PPOMNIFACOL_OFFSET))(this);
	}
};
