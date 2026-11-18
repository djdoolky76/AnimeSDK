#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BJFEIEDPJDL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GNJOBELLNCO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GNJOBELLNCO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EB6F0)
#define GNJOBELLNCO_BIKPJCADDEE_1_OFFSET UNITYSDK_OFFSET(0x19AFF470)
#define GNJOBELLNCO_BIKPJCADDEE_OFFSET UNITYSDK_OFFSET(0x19AFF400)
#define GNJOBELLNCO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GNJOBELLNCO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GNJOBELLNCO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EB730)
#define GNJOBELLNCO___INIT_OFFSET UNITYSDK_OFFSET(0x7EB6D0)

inline static constexpr unsigned int GNJOBELLNCO_TypeDefinitionIndex = 10432;

struct alignas(8) GNJOBELLNCO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJOBELLNCO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GNJOBELLNCO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJOBELLNCO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::GNJOBELLNCO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GNJOBELLNCO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GNJOBELLNCO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GNJOBELLNCO BIKPJCADDEE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GNJOBELLNCO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GNJOBELLNCO_BIKPJCADDEE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BJFEIEDPJDL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BJFEIEDPJDL&))((::PBYTE)hIl2Cpp + GNJOBELLNCO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJOBELLNCO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::GNJOBELLNCO BIKPJCADDEE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GNJOBELLNCO EIFONLCJOPG)
	{
		return ((::GNJOBELLNCO(*)(::FlatBuffers::ByteBuffer*, ::GNJOBELLNCO))((::PBYTE)hIl2Cpp + GNJOBELLNCO_BIKPJCADDEE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
