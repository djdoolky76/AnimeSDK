#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EIIEHEJJGFG_APDEBMLBNDG_1_OFFSET UNITYSDK_OFFSET(0x16629110)
#define EIIEHEJJGFG_APDEBMLBNDG_OFFSET UNITYSDK_OFFSET(0x16629070)
#define EIIEHEJJGFG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7894D0)
#define EIIEHEJJGFG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EIIEHEJJGFG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EIIEHEJJGFG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7894C0)
#define EIIEHEJJGFG___INIT_OFFSET UNITYSDK_OFFSET(0x7894A0)

inline static constexpr unsigned int EIIEHEJJGFG_TypeDefinitionIndex = 17669;

struct alignas(8) EIIEHEJJGFG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIIEHEJJGFG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EIIEHEJJGFG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIIEHEJJGFG_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIIEHEJJGFG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::EIIEHEJJGFG APDEBMLBNDG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EIIEHEJJGFG EIFONLCJOPG)
	{
		return ((::EIIEHEJJGFG(*)(::FlatBuffers::ByteBuffer*, ::EIIEHEJJGFG))((::PBYTE)hIl2Cpp + EIIEHEJJGFG_APDEBMLBNDG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::EIIEHEJJGFG APDEBMLBNDG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EIIEHEJJGFG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EIIEHEJJGFG_APDEBMLBNDG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::EIIEHEJJGFG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EIIEHEJJGFG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EIIEHEJJGFG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
