#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FFGODEBLLCK_AHGOHMAIMCH_1_OFFSET UNITYSDK_OFFSET(0x15A734C0)
#define FFGODEBLLCK_AHGOHMAIMCH_OFFSET UNITYSDK_OFFSET(0x15A73450)
#define FFGODEBLLCK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x76DD60)
#define FFGODEBLLCK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FFGODEBLLCK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FFGODEBLLCK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x76DDA0)
#define FFGODEBLLCK___INIT_OFFSET UNITYSDK_OFFSET(0x76DD40)

inline static constexpr unsigned int FFGODEBLLCK_TypeDefinitionIndex = 10928;

struct alignas(8) FFGODEBLLCK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGODEBLLCK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FFGODEBLLCK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::FFGODEBLLCK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FFGODEBLLCK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FFGODEBLLCK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGODEBLLCK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::FFGODEBLLCK AHGOHMAIMCH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FFGODEBLLCK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FFGODEBLLCK_AHGOHMAIMCH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::FFGODEBLLCK AHGOHMAIMCH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FFGODEBLLCK EIFONLCJOPG)
	{
		return ((::FFGODEBLLCK(*)(::FlatBuffers::ByteBuffer*, ::FFGODEBLLCK))((::PBYTE)hIl2Cpp + FFGODEBLLCK_AHGOHMAIMCH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGODEBLLCK_GHKKNCCLPAN_OFFSET))(this);
	}
};
