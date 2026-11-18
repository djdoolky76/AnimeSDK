#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LGHDKODCODJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GMAAKLAOLOO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GMAAKLAOLOO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B5010)
#define GMAAKLAOLOO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GMAAKLAOLOO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GMAAKLAOLOO_MPAEOFILMGJ_1_OFFSET UNITYSDK_OFFSET(0x17BF2B20)
#define GMAAKLAOLOO_MPAEOFILMGJ_OFFSET UNITYSDK_OFFSET(0x17BF2AB0)
#define GMAAKLAOLOO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B5050)
#define GMAAKLAOLOO___INIT_OFFSET UNITYSDK_OFFSET(0x7B4FF0)

inline static constexpr unsigned int GMAAKLAOLOO_TypeDefinitionIndex = 9621;

struct alignas(8) GMAAKLAOLOO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMAAKLAOLOO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GMAAKLAOLOO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::GMAAKLAOLOO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GMAAKLAOLOO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GMAAKLAOLOO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMAAKLAOLOO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::GMAAKLAOLOO MPAEOFILMGJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GMAAKLAOLOO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GMAAKLAOLOO_MPAEOFILMGJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LGHDKODCODJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LGHDKODCODJ&))((::PBYTE)hIl2Cpp + GMAAKLAOLOO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMAAKLAOLOO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::GMAAKLAOLOO MPAEOFILMGJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GMAAKLAOLOO EIFONLCJOPG)
	{
		return ((::GMAAKLAOLOO(*)(::FlatBuffers::ByteBuffer*, ::GMAAKLAOLOO))((::PBYTE)hIl2Cpp + GMAAKLAOLOO_MPAEOFILMGJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
