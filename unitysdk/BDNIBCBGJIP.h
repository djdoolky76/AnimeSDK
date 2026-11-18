#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BDNIBCBGJIP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E2180)
#define BDNIBCBGJIP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BDNIBCBGJIP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BDNIBCBGJIP_JIJBJPDPKII_1_OFFSET UNITYSDK_OFFSET(0x194F7D10)
#define BDNIBCBGJIP_JIJBJPDPKII_OFFSET UNITYSDK_OFFSET(0x194F7CA0)
#define BDNIBCBGJIP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E2170)
#define BDNIBCBGJIP___INIT_OFFSET UNITYSDK_OFFSET(0x7E2150)

inline static constexpr unsigned int BDNIBCBGJIP_TypeDefinitionIndex = 12887;

struct alignas(8) BDNIBCBGJIP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDNIBCBGJIP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BDNIBCBGJIP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::BDNIBCBGJIP JIJBJPDPKII(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BDNIBCBGJIP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BDNIBCBGJIP_JIJBJPDPKII_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDNIBCBGJIP_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDNIBCBGJIP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::BDNIBCBGJIP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BDNIBCBGJIP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BDNIBCBGJIP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::BDNIBCBGJIP JIJBJPDPKII_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BDNIBCBGJIP EIFONLCJOPG)
	{
		return ((::BDNIBCBGJIP(*)(::FlatBuffers::ByteBuffer*, ::BDNIBCBGJIP))((::PBYTE)hIl2Cpp + BDNIBCBGJIP_JIJBJPDPKII_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
