#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HEAFJGEEPAN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x76EB30)
#define HEAFJGEEPAN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HEAFJGEEPAN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HEAFJGEEPAN_NOOJKLHDBBB_1_OFFSET UNITYSDK_OFFSET(0x15A890D0)
#define HEAFJGEEPAN_NOOJKLHDBBB_OFFSET UNITYSDK_OFFSET(0x15A89030)
#define HEAFJGEEPAN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x76EB20)
#define HEAFJGEEPAN___INIT_OFFSET UNITYSDK_OFFSET(0x76EB00)

inline static constexpr unsigned int HEAFJGEEPAN_TypeDefinitionIndex = 10211;

struct alignas(8) HEAFJGEEPAN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAFJGEEPAN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HEAFJGEEPAN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAFJGEEPAN_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAFJGEEPAN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::HEAFJGEEPAN NOOJKLHDBBB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HEAFJGEEPAN EIFONLCJOPG)
	{
		return ((::HEAFJGEEPAN(*)(::FlatBuffers::ByteBuffer*, ::HEAFJGEEPAN))((::PBYTE)hIl2Cpp + HEAFJGEEPAN_NOOJKLHDBBB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::HEAFJGEEPAN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HEAFJGEEPAN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HEAFJGEEPAN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HEAFJGEEPAN NOOJKLHDBBB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HEAFJGEEPAN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HEAFJGEEPAN_NOOJKLHDBBB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
