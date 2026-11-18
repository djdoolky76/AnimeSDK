#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PCCLIMBBLJD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EAIDPJABJFJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EAIDPJABJFJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x766350)
#define EAIDPJABJFJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EAIDPJABJFJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EAIDPJABJFJ_OGANDCFHAOO_1_OFFSET UNITYSDK_OFFSET(0x157A9080)
#define EAIDPJABJFJ_OGANDCFHAOO_OFFSET UNITYSDK_OFFSET(0x157A9010)
#define EAIDPJABJFJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x766390)
#define EAIDPJABJFJ___INIT_OFFSET UNITYSDK_OFFSET(0x766330)

inline static constexpr unsigned int EAIDPJABJFJ_TypeDefinitionIndex = 13084;

struct alignas(8) EAIDPJABJFJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAIDPJABJFJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EAIDPJABJFJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PCCLIMBBLJD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PCCLIMBBLJD&))((::PBYTE)hIl2Cpp + EAIDPJABJFJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::EAIDPJABJFJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EAIDPJABJFJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EAIDPJABJFJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAIDPJABJFJ_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAIDPJABJFJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::EAIDPJABJFJ OGANDCFHAOO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EAIDPJABJFJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EAIDPJABJFJ_OGANDCFHAOO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::EAIDPJABJFJ OGANDCFHAOO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EAIDPJABJFJ EIFONLCJOPG)
	{
		return ((::EAIDPJABJFJ(*)(::FlatBuffers::ByteBuffer*, ::EAIDPJABJFJ))((::PBYTE)hIl2Cpp + EAIDPJABJFJ_OGANDCFHAOO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
