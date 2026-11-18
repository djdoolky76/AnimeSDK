#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AEPLGFNFMFA.h"
#include "unitysdk/System/Nullable_1.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CCBMLFHGCJK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x765830)
#define CCBMLFHGCJK_EFBECEHHGOO_OFFSET UNITYSDK_OFFSET(0x760C50)
#define CCBMLFHGCJK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CCBMLFHGCJK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CCBMLFHGCJK_LOJHOIKDCFJ_1_OFFSET UNITYSDK_OFFSET(0x1578A250)
#define CCBMLFHGCJK_LOJHOIKDCFJ_OFFSET UNITYSDK_OFFSET(0x1578A1E0)
#define CCBMLFHGCJK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x765820)
#define CCBMLFHGCJK___INIT_OFFSET UNITYSDK_OFFSET(0x765800)

inline static constexpr unsigned int CCBMLFHGCJK_TypeDefinitionIndex = 12742;

struct alignas(8) CCBMLFHGCJK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCBMLFHGCJK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CCBMLFHGCJK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Nullable_1<::AEPLGFNFMFA> EFBECEHHGOO(::System::Int32 HPMEONKHFGG)
	{
		return ((::System::Nullable_1<::AEPLGFNFMFA>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CCBMLFHGCJK_EFBECEHHGOO_OFFSET))(this, HPMEONKHFGG);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCBMLFHGCJK_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCBMLFHGCJK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::CCBMLFHGCJK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CCBMLFHGCJK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CCBMLFHGCJK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CCBMLFHGCJK LOJHOIKDCFJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CCBMLFHGCJK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CCBMLFHGCJK_LOJHOIKDCFJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::CCBMLFHGCJK LOJHOIKDCFJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CCBMLFHGCJK EIFONLCJOPG)
	{
		return ((::CCBMLFHGCJK(*)(::FlatBuffers::ByteBuffer*, ::CCBMLFHGCJK))((::PBYTE)hIl2Cpp + CCBMLFHGCJK_LOJHOIKDCFJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
