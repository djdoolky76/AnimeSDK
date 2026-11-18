#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BNJPFGHCGJL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x816790)
#define BNJPFGHCGJL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BNJPFGHCGJL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BNJPFGHCGJL_NJPPDABLJLM_1_OFFSET UNITYSDK_OFFSET(0x1B993F40)
#define BNJPFGHCGJL_NJPPDABLJLM_OFFSET UNITYSDK_OFFSET(0x1B993ED0)
#define BNJPFGHCGJL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8167D0)
#define BNJPFGHCGJL___INIT_OFFSET UNITYSDK_OFFSET(0x816770)

inline static constexpr unsigned int BNJPFGHCGJL_TypeDefinitionIndex = 13902;

struct alignas(8) BNJPFGHCGJL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJPFGHCGJL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BNJPFGHCGJL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::BNJPFGHCGJL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BNJPFGHCGJL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BNJPFGHCGJL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJPFGHCGJL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::BNJPFGHCGJL NJPPDABLJLM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BNJPFGHCGJL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BNJPFGHCGJL_NJPPDABLJLM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJPFGHCGJL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::BNJPFGHCGJL NJPPDABLJLM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BNJPFGHCGJL EIFONLCJOPG)
	{
		return ((::BNJPFGHCGJL(*)(::FlatBuffers::ByteBuffer*, ::BNJPFGHCGJL))((::PBYTE)hIl2Cpp + BNJPFGHCGJL_NJPPDABLJLM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
