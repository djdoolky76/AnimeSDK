#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GAHKJCLGCLD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80D6D0)
#define GAHKJCLGCLD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GAHKJCLGCLD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GAHKJCLGCLD_KCCGJJODEBE_1_OFFSET UNITYSDK_OFFSET(0x1B4CF150)
#define GAHKJCLGCLD_KCCGJJODEBE_OFFSET UNITYSDK_OFFSET(0x1B4CF0E0)
#define GAHKJCLGCLD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80D710)
#define GAHKJCLGCLD___INIT_OFFSET UNITYSDK_OFFSET(0x80D6B0)

inline static constexpr unsigned int GAHKJCLGCLD_TypeDefinitionIndex = 12509;

struct alignas(8) GAHKJCLGCLD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAHKJCLGCLD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GAHKJCLGCLD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GAHKJCLGCLD KCCGJJODEBE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GAHKJCLGCLD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GAHKJCLGCLD_KCCGJJODEBE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::GAHKJCLGCLD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GAHKJCLGCLD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GAHKJCLGCLD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAHKJCLGCLD_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::GAHKJCLGCLD KCCGJJODEBE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GAHKJCLGCLD EIFONLCJOPG)
	{
		return ((::GAHKJCLGCLD(*)(::FlatBuffers::ByteBuffer*, ::GAHKJCLGCLD))((::PBYTE)hIl2Cpp + GAHKJCLGCLD_KCCGJJODEBE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAHKJCLGCLD_GHKKNCCLPAN_OFFSET))(this);
	}
};
