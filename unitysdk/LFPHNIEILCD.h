#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HFOHLKOLPEI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LFPHNIEILCD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LFPHNIEILCD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D76D0)
#define LFPHNIEILCD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LFPHNIEILCD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LFPHNIEILCD_KGNLPEBEFEL_1_OFFSET UNITYSDK_OFFSET(0x18DFAB10)
#define LFPHNIEILCD_KGNLPEBEFEL_OFFSET UNITYSDK_OFFSET(0x18DFAAA0)
#define LFPHNIEILCD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D7710)
#define LFPHNIEILCD___INIT_OFFSET UNITYSDK_OFFSET(0x7D76B0)

inline static constexpr unsigned int LFPHNIEILCD_TypeDefinitionIndex = 10726;

struct alignas(8) LFPHNIEILCD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPHNIEILCD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LFPHNIEILCD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::LFPHNIEILCD KGNLPEBEFEL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LFPHNIEILCD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LFPHNIEILCD_KGNLPEBEFEL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::LFPHNIEILCD KGNLPEBEFEL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LFPHNIEILCD EIFONLCJOPG)
	{
		return ((::LFPHNIEILCD(*)(::FlatBuffers::ByteBuffer*, ::LFPHNIEILCD))((::PBYTE)hIl2Cpp + LFPHNIEILCD_KGNLPEBEFEL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::LFPHNIEILCD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LFPHNIEILCD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LFPHNIEILCD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPHNIEILCD_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPHNIEILCD_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HFOHLKOLPEI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HFOHLKOLPEI&))((::PBYTE)hIl2Cpp + LFPHNIEILCD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
