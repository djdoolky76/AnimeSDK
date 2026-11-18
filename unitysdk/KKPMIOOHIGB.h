#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NIHENEGMKJB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KKPMIOOHIGB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KKPMIOOHIGB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E5D30)
#define KKPMIOOHIGB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KKPMIOOHIGB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KKPMIOOHIGB_KBFAFKPEAJB_1_OFFSET UNITYSDK_OFFSET(0x1957F8E0)
#define KKPMIOOHIGB_KBFAFKPEAJB_OFFSET UNITYSDK_OFFSET(0x1957F7E0)
#define KKPMIOOHIGB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E5D20)
#define KKPMIOOHIGB___INIT_OFFSET UNITYSDK_OFFSET(0x7E5D00)

inline static constexpr unsigned int KKPMIOOHIGB_TypeDefinitionIndex = 10934;

struct alignas(8) KKPMIOOHIGB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKPMIOOHIGB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KKPMIOOHIGB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KKPMIOOHIGB KBFAFKPEAJB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KKPMIOOHIGB EIFONLCJOPG)
	{
		return ((::KKPMIOOHIGB(*)(::FlatBuffers::ByteBuffer*, ::KKPMIOOHIGB))((::PBYTE)hIl2Cpp + KKPMIOOHIGB_KBFAFKPEAJB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKPMIOOHIGB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::KKPMIOOHIGB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KKPMIOOHIGB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KKPMIOOHIGB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::KKPMIOOHIGB KBFAFKPEAJB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KKPMIOOHIGB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KKPMIOOHIGB_KBFAFKPEAJB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKPMIOOHIGB_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NIHENEGMKJB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NIHENEGMKJB&))((::PBYTE)hIl2Cpp + KKPMIOOHIGB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
