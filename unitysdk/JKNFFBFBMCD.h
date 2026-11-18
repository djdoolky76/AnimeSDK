#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GEMGPIKEHLN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JKNFFBFBMCD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JKNFFBFBMCD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x758620)
#define JKNFFBFBMCD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JKNFFBFBMCD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JKNFFBFBMCD_LMGKNIJCENG_1_OFFSET UNITYSDK_OFFSET(0x152F6B00)
#define JKNFFBFBMCD_LMGKNIJCENG_OFFSET UNITYSDK_OFFSET(0x152F6A90)
#define JKNFFBFBMCD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x758660)
#define JKNFFBFBMCD___INIT_OFFSET UNITYSDK_OFFSET(0x758600)

inline static constexpr unsigned int JKNFFBFBMCD_TypeDefinitionIndex = 9171;

struct alignas(8) JKNFFBFBMCD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNFFBFBMCD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JKNFFBFBMCD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::JKNFFBFBMCD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JKNFFBFBMCD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JKNFFBFBMCD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GEMGPIKEHLN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GEMGPIKEHLN&))((::PBYTE)hIl2Cpp + JKNFFBFBMCD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNFFBFBMCD_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::JKNFFBFBMCD LMGKNIJCENG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JKNFFBFBMCD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JKNFFBFBMCD_LMGKNIJCENG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::JKNFFBFBMCD LMGKNIJCENG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JKNFFBFBMCD EIFONLCJOPG)
	{
		return ((::JKNFFBFBMCD(*)(::FlatBuffers::ByteBuffer*, ::JKNFFBFBMCD))((::PBYTE)hIl2Cpp + JKNFFBFBMCD_LMGKNIJCENG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNFFBFBMCD_GHKKNCCLPAN_OFFSET))(this);
	}
};
