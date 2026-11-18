#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NGKIBHDEGID_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x802AC0)
#define NGKIBHDEGID_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NGKIBHDEGID_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NGKIBHDEGID_MOGAIMJAHEI_1_OFFSET UNITYSDK_OFFSET(0x1AB15670)
#define NGKIBHDEGID_MOGAIMJAHEI_OFFSET UNITYSDK_OFFSET(0x1AB15600)
#define NGKIBHDEGID_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x802B00)
#define NGKIBHDEGID___INIT_OFFSET UNITYSDK_OFFSET(0x802AA0)

inline static constexpr unsigned int NGKIBHDEGID_TypeDefinitionIndex = 15249;

struct alignas(8) NGKIBHDEGID
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGKIBHDEGID_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NGKIBHDEGID___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::NGKIBHDEGID BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NGKIBHDEGID(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NGKIBHDEGID_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGKIBHDEGID_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGKIBHDEGID_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::NGKIBHDEGID MOGAIMJAHEI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NGKIBHDEGID(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NGKIBHDEGID_MOGAIMJAHEI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::NGKIBHDEGID MOGAIMJAHEI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NGKIBHDEGID EIFONLCJOPG)
	{
		return ((::NGKIBHDEGID(*)(::FlatBuffers::ByteBuffer*, ::NGKIBHDEGID))((::PBYTE)hIl2Cpp + NGKIBHDEGID_MOGAIMJAHEI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
