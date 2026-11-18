#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DIDEEBFLLOO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GGHIOHHDDCG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GGHIOHHDDCG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x813E80)
#define GGHIOHHDDCG_DJFLHKLLJPM_1_OFFSET UNITYSDK_OFFSET(0x1B86E400)
#define GGHIOHHDDCG_DJFLHKLLJPM_OFFSET UNITYSDK_OFFSET(0x1B86E3A0)
#define GGHIOHHDDCG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GGHIOHHDDCG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GGHIOHHDDCG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x813EC0)
#define GGHIOHHDDCG___INIT_OFFSET UNITYSDK_OFFSET(0x813E60)

inline static constexpr unsigned int GGHIOHHDDCG_TypeDefinitionIndex = 13615;

struct alignas(8) GGHIOHHDDCG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHIOHHDDCG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GGHIOHHDDCG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::GGHIOHHDDCG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GGHIOHHDDCG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GGHIOHHDDCG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GGHIOHHDDCG DJFLHKLLJPM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GGHIOHHDDCG EIFONLCJOPG)
	{
		return ((::GGHIOHHDDCG(*)(::FlatBuffers::ByteBuffer*, ::GGHIOHHDDCG))((::PBYTE)hIl2Cpp + GGHIOHHDDCG_DJFLHKLLJPM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::GGHIOHHDDCG DJFLHKLLJPM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GGHIOHHDDCG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GGHIOHHDDCG_DJFLHKLLJPM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHIOHHDDCG_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DIDEEBFLLOO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DIDEEBFLLOO&))((::PBYTE)hIl2Cpp + GGHIOHHDDCG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHIOHHDDCG_GHKKNCCLPAN_OFFSET))(this);
	}
};
