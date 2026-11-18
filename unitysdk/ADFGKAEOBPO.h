#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ADFGKAEOBPO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FAC40)
#define ADFGKAEOBPO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ADFGKAEOBPO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ADFGKAEOBPO_PAIOHNOMOGC_1_OFFSET UNITYSDK_OFFSET(0x1A56B5E0)
#define ADFGKAEOBPO_PAIOHNOMOGC_OFFSET UNITYSDK_OFFSET(0x1A56B570)
#define ADFGKAEOBPO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FAC30)
#define ADFGKAEOBPO___INIT_OFFSET UNITYSDK_OFFSET(0x7FAC10)

inline static constexpr unsigned int ADFGKAEOBPO_TypeDefinitionIndex = 17147;

struct alignas(8) ADFGKAEOBPO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADFGKAEOBPO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ADFGKAEOBPO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADFGKAEOBPO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::ADFGKAEOBPO PAIOHNOMOGC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ADFGKAEOBPO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ADFGKAEOBPO_PAIOHNOMOGC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::ADFGKAEOBPO PAIOHNOMOGC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ADFGKAEOBPO EIFONLCJOPG)
	{
		return ((::ADFGKAEOBPO(*)(::FlatBuffers::ByteBuffer*, ::ADFGKAEOBPO))((::PBYTE)hIl2Cpp + ADFGKAEOBPO_PAIOHNOMOGC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADFGKAEOBPO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::ADFGKAEOBPO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ADFGKAEOBPO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ADFGKAEOBPO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
