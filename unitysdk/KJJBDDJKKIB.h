#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NNCAOFEPINN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KJJBDDJKKIB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KJJBDDJKKIB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80EE40)
#define KJJBDDJKKIB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KJJBDDJKKIB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KJJBDDJKKIB_KAKJIDOMDNN_1_OFFSET UNITYSDK_OFFSET(0x1B507BC0)
#define KJJBDDJKKIB_KAKJIDOMDNN_OFFSET UNITYSDK_OFFSET(0x1B507AC0)
#define KJJBDDJKKIB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80EE80)
#define KJJBDDJKKIB___INIT_OFFSET UNITYSDK_OFFSET(0x80EE20)

inline static constexpr unsigned int KJJBDDJKKIB_TypeDefinitionIndex = 11858;

struct alignas(8) KJJBDDJKKIB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJJBDDJKKIB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KJJBDDJKKIB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KJJBDDJKKIB KAKJIDOMDNN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KJJBDDJKKIB EIFONLCJOPG)
	{
		return ((::KJJBDDJKKIB(*)(::FlatBuffers::ByteBuffer*, ::KJJBDDJKKIB))((::PBYTE)hIl2Cpp + KJJBDDJKKIB_KAKJIDOMDNN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJJBDDJKKIB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::KJJBDDJKKIB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KJJBDDJKKIB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KJJBDDJKKIB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::KJJBDDJKKIB KAKJIDOMDNN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KJJBDDJKKIB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KJJBDDJKKIB_KAKJIDOMDNN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJJBDDJKKIB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NNCAOFEPINN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NNCAOFEPINN&))((::PBYTE)hIl2Cpp + KJJBDDJKKIB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
