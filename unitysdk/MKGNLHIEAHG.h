#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MKGNLHIEAHG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x763F50)
#define MKGNLHIEAHG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MKGNLHIEAHG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MKGNLHIEAHG_KDLKNHLJAKH_1_OFFSET UNITYSDK_OFFSET(0x1BF62A90)
#define MKGNLHIEAHG_KDLKNHLJAKH_OFFSET UNITYSDK_OFFSET(0x1BF62A40)
#define MKGNLHIEAHG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MKGNLHIEAHG_TypeDefinitionIndex = 10236;

struct alignas(8) MKGNLHIEAHG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGNLHIEAHG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKGNLHIEAHG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MKGNLHIEAHG KDLKNHLJAKH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MKGNLHIEAHG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKGNLHIEAHG_KDLKNHLJAKH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::MKGNLHIEAHG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MKGNLHIEAHG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKGNLHIEAHG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MKGNLHIEAHG KDLKNHLJAKH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MKGNLHIEAHG EIFONLCJOPG)
	{
		return ((::MKGNLHIEAHG(*)(::FlatBuffers::ByteBuffer*, ::MKGNLHIEAHG))((::PBYTE)hIl2Cpp + MKGNLHIEAHG_KDLKNHLJAKH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGNLHIEAHG_GHKKNCCLPAN_OFFSET))(this);
	}
};
