#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DEAAPFOCFFA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MLOKKFOEJGI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MLOKKFOEJGI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C4450)
#define MLOKKFOEJGI_DPANCPOAAMH_1_OFFSET UNITYSDK_OFFSET(0x17FCA370)
#define MLOKKFOEJGI_DPANCPOAAMH_OFFSET UNITYSDK_OFFSET(0x17FCA300)
#define MLOKKFOEJGI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MLOKKFOEJGI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MLOKKFOEJGI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C4440)
#define MLOKKFOEJGI___INIT_OFFSET UNITYSDK_OFFSET(0x7C4420)

inline static constexpr unsigned int MLOKKFOEJGI_TypeDefinitionIndex = 14539;

struct alignas(8) MLOKKFOEJGI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLOKKFOEJGI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MLOKKFOEJGI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MLOKKFOEJGI DPANCPOAAMH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MLOKKFOEJGI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MLOKKFOEJGI_DPANCPOAAMH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLOKKFOEJGI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MLOKKFOEJGI DPANCPOAAMH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MLOKKFOEJGI EIFONLCJOPG)
	{
		return ((::MLOKKFOEJGI(*)(::FlatBuffers::ByteBuffer*, ::MLOKKFOEJGI))((::PBYTE)hIl2Cpp + MLOKKFOEJGI_DPANCPOAAMH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DEAAPFOCFFA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DEAAPFOCFFA&))((::PBYTE)hIl2Cpp + MLOKKFOEJGI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLOKKFOEJGI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::MLOKKFOEJGI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MLOKKFOEJGI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MLOKKFOEJGI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
