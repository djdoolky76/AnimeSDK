#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FIMHAGCBADI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754EB0)
#define FIMHAGCBADI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FIMHAGCBADI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FIMHAGCBADI_GIABLFEEAMK_1_OFFSET UNITYSDK_OFFSET(0x152C1C50)
#define FIMHAGCBADI_GIABLFEEAMK_OFFSET UNITYSDK_OFFSET(0x152C1BB0)
#define FIMHAGCBADI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x754EA0)
#define FIMHAGCBADI___INIT_OFFSET UNITYSDK_OFFSET(0x754E80)

inline static constexpr unsigned int FIMHAGCBADI_TypeDefinitionIndex = 14309;

struct alignas(8) FIMHAGCBADI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMHAGCBADI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FIMHAGCBADI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMHAGCBADI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::FIMHAGCBADI GIABLFEEAMK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FIMHAGCBADI EIFONLCJOPG)
	{
		return ((::FIMHAGCBADI(*)(::FlatBuffers::ByteBuffer*, ::FIMHAGCBADI))((::PBYTE)hIl2Cpp + FIMHAGCBADI_GIABLFEEAMK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMHAGCBADI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::FIMHAGCBADI GIABLFEEAMK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FIMHAGCBADI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FIMHAGCBADI_GIABLFEEAMK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::FIMHAGCBADI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FIMHAGCBADI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FIMHAGCBADI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
