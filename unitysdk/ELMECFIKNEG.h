#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GBMGBIFPICI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ELMECFIKNEG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ELMECFIKNEG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x807E90)
#define ELMECFIKNEG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ELMECFIKNEG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ELMECFIKNEG_PAIAEFCBFJP_1_OFFSET UNITYSDK_OFFSET(0x1ADD7E30)
#define ELMECFIKNEG_PAIAEFCBFJP_OFFSET UNITYSDK_OFFSET(0x1ADD7DC0)
#define ELMECFIKNEG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x807E80)
#define ELMECFIKNEG___INIT_OFFSET UNITYSDK_OFFSET(0x807E60)

inline static constexpr unsigned int ELMECFIKNEG_TypeDefinitionIndex = 13768;

struct alignas(8) ELMECFIKNEG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELMECFIKNEG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ELMECFIKNEG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GBMGBIFPICI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GBMGBIFPICI&))((::PBYTE)hIl2Cpp + ELMECFIKNEG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::ELMECFIKNEG PAIAEFCBFJP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ELMECFIKNEG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ELMECFIKNEG_PAIAEFCBFJP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELMECFIKNEG_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELMECFIKNEG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::ELMECFIKNEG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ELMECFIKNEG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ELMECFIKNEG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::ELMECFIKNEG PAIAEFCBFJP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ELMECFIKNEG EIFONLCJOPG)
	{
		return ((::ELMECFIKNEG(*)(::FlatBuffers::ByteBuffer*, ::ELMECFIKNEG))((::PBYTE)hIl2Cpp + ELMECFIKNEG_PAIAEFCBFJP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
