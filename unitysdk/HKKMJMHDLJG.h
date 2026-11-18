#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KLMCEAJDKLL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HKKMJMHDLJG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HKKMJMHDLJG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DEFB0)
#define HKKMJMHDLJG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HKKMJMHDLJG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HKKMJMHDLJG_OECLAKMIKLK_1_OFFSET UNITYSDK_OFFSET(0x19343EE0)
#define HKKMJMHDLJG_OECLAKMIKLK_OFFSET UNITYSDK_OFFSET(0x19343E70)
#define HKKMJMHDLJG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DEFF0)
#define HKKMJMHDLJG___INIT_OFFSET UNITYSDK_OFFSET(0x7DEF90)

inline static constexpr unsigned int HKKMJMHDLJG_TypeDefinitionIndex = 13311;

struct alignas(8) HKKMJMHDLJG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKMJMHDLJG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKKMJMHDLJG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KLMCEAJDKLL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KLMCEAJDKLL&))((::PBYTE)hIl2Cpp + HKKMJMHDLJG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::HKKMJMHDLJG OECLAKMIKLK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HKKMJMHDLJG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKKMJMHDLJG_OECLAKMIKLK_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::HKKMJMHDLJG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HKKMJMHDLJG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKKMJMHDLJG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKMJMHDLJG_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKMJMHDLJG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::HKKMJMHDLJG OECLAKMIKLK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HKKMJMHDLJG EIFONLCJOPG)
	{
		return ((::HKKMJMHDLJG(*)(::FlatBuffers::ByteBuffer*, ::HKKMJMHDLJG))((::PBYTE)hIl2Cpp + HKKMJMHDLJG_OECLAKMIKLK_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
