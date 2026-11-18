#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BIMEFJGBJPG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B1AF0)
#define BIMEFJGBJPG_GELPMDPEKCC_1_OFFSET UNITYSDK_OFFSET(0x17A7DB80)
#define BIMEFJGBJPG_GELPMDPEKCC_OFFSET UNITYSDK_OFFSET(0x17A7DA80)
#define BIMEFJGBJPG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BIMEFJGBJPG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BIMEFJGBJPG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B1B30)
#define BIMEFJGBJPG___INIT_OFFSET UNITYSDK_OFFSET(0x7B1AD0)

inline static constexpr unsigned int BIMEFJGBJPG_TypeDefinitionIndex = 12579;

struct alignas(8) BIMEFJGBJPG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMEFJGBJPG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BIMEFJGBJPG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::BIMEFJGBJPG GELPMDPEKCC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BIMEFJGBJPG EIFONLCJOPG)
	{
		return ((::BIMEFJGBJPG(*)(::FlatBuffers::ByteBuffer*, ::BIMEFJGBJPG))((::PBYTE)hIl2Cpp + BIMEFJGBJPG_GELPMDPEKCC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::BIMEFJGBJPG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BIMEFJGBJPG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BIMEFJGBJPG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMEFJGBJPG_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMEFJGBJPG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::BIMEFJGBJPG GELPMDPEKCC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BIMEFJGBJPG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BIMEFJGBJPG_GELPMDPEKCC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
