#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HNFIHLIKFBJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HNFIHLIKFBJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HNFIHLIKFBJ_NDCPGHGEPAA_OFFSET UNITYSDK_OFFSET(0x756B90)
#define HNFIHLIKFBJ_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HNFIHLIKFBJ_NGDJEGFNNON_OFFSET UNITYSDK_OFFSET(0x754F10)
#define HNFIHLIKFBJ_PMGPCOOLDON_OFFSET UNITYSDK_OFFSET(0x754920)
#define HNFIHLIKFBJ_PPNEEGGDHAD_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define HNFIHLIKFBJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HNFIHLIKFBJ_TypeDefinitionIndex = 12248;

struct alignas(4) HNFIHLIKFBJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFIHLIKFBJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNFIHLIKFBJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFIHLIKFBJ_NFKFHJBEPGD_OFFSET))(this);
	}

	/*
	::HNFIHLIKFBJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HNFIHLIKFBJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNFIHLIKFBJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* NGDJEGFNNON()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFIHLIKFBJ_NGDJEGFNNON_OFFSET))(this);
	}

	::System::Int32 NDCPGHGEPAA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFIHLIKFBJ_NDCPGHGEPAA_OFFSET))(this);
	}

	::System::Int32 PMGPCOOLDON()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFIHLIKFBJ_PMGPCOOLDON_OFFSET))(this);
	}

	::System::String* PPNEEGGDHAD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFIHLIKFBJ_PPNEEGGDHAD_OFFSET))(this);
	}
};
