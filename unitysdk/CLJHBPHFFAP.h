#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Struct.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define CLJHBPHFFAP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CLJHBPHFFAP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CLJHBPHFFAP_HHJCBFOCGIH_OFFSET UNITYSDK_OFFSET(0x7626A0)
#define CLJHBPHFFAP_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x762670)
#define CLJHBPHFFAP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CLJHBPHFFAP_TypeDefinitionIndex = 13506;

struct alignas(4) CLJHBPHFFAP
{
	::FlatBuffers::Struct KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLJHBPHFFAP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLJHBPHFFAP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLJHBPHFFAP_NFKFHJBEPGD_OFFSET))(this);
	}

	/*
	::CLJHBPHFFAP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CLJHBPHFFAP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLJHBPHFFAP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 HHJCBFOCGIH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLJHBPHFFAP_HHJCBFOCGIH_OFFSET))(this);
	}
};
