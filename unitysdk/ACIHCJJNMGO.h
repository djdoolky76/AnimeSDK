#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ACIHCJJNMGO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x760B10)
#define ACIHCJJNMGO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ACIHCJJNMGO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ACIHCJJNMGO_PCCJNNPOPEM_1_OFFSET UNITYSDK_OFFSET(0x1571BF60)
#define ACIHCJJNMGO_PCCJNNPOPEM_OFFSET UNITYSDK_OFFSET(0x1571BEC0)
#define ACIHCJJNMGO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x760B00)
#define ACIHCJJNMGO___INIT_OFFSET UNITYSDK_OFFSET(0x760AE0)

inline static constexpr unsigned int ACIHCJJNMGO_TypeDefinitionIndex = 13234;

struct alignas(8) ACIHCJJNMGO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACIHCJJNMGO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ACIHCJJNMGO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACIHCJJNMGO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::ACIHCJJNMGO PCCJNNPOPEM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ACIHCJJNMGO EIFONLCJOPG)
	{
		return ((::ACIHCJJNMGO(*)(::FlatBuffers::ByteBuffer*, ::ACIHCJJNMGO))((::PBYTE)hIl2Cpp + ACIHCJJNMGO_PCCJNNPOPEM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACIHCJJNMGO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::ACIHCJJNMGO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ACIHCJJNMGO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ACIHCJJNMGO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::ACIHCJJNMGO PCCJNNPOPEM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ACIHCJJNMGO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ACIHCJJNMGO_PCCJNNPOPEM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
