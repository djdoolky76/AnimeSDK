#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IOINLCMJJMN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FDEEPFBPHEN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FDEEPFBPHEN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B2DB0)
#define FDEEPFBPHEN_BKMDOHLMGIH_1_OFFSET UNITYSDK_OFFSET(0x17AB11C0)
#define FDEEPFBPHEN_BKMDOHLMGIH_OFFSET UNITYSDK_OFFSET(0x17AB10C0)
#define FDEEPFBPHEN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FDEEPFBPHEN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FDEEPFBPHEN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B2DA0)
#define FDEEPFBPHEN___INIT_OFFSET UNITYSDK_OFFSET(0x7B2D80)

inline static constexpr unsigned int FDEEPFBPHEN_TypeDefinitionIndex = 13490;

struct alignas(8) FDEEPFBPHEN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDEEPFBPHEN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FDEEPFBPHEN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FDEEPFBPHEN BKMDOHLMGIH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FDEEPFBPHEN EIFONLCJOPG)
	{
		return ((::FDEEPFBPHEN(*)(::FlatBuffers::ByteBuffer*, ::FDEEPFBPHEN))((::PBYTE)hIl2Cpp + FDEEPFBPHEN_BKMDOHLMGIH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDEEPFBPHEN_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDEEPFBPHEN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::FDEEPFBPHEN BKMDOHLMGIH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FDEEPFBPHEN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FDEEPFBPHEN_BKMDOHLMGIH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::FDEEPFBPHEN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FDEEPFBPHEN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FDEEPFBPHEN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IOINLCMJJMN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IOINLCMJJMN&))((::PBYTE)hIl2Cpp + FDEEPFBPHEN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
