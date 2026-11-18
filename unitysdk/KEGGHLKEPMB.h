#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define KEGGHLKEPMB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KEGGHLKEPMB_BGDGFOGPFDD_OFFSET UNITYSDK_OFFSET(0x755D20)
#define KEGGHLKEPMB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KEGGHLKEPMB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KEGGHLKEPMB_HKFEIADBENE_OFFSET UNITYSDK_OFFSET(0x756B90)
#define KEGGHLKEPMB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KEGGHLKEPMB_TypeDefinitionIndex = 14365;

struct alignas(4) KEGGHLKEPMB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEGGHLKEPMB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KEGGHLKEPMB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HKFEIADBENE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEGGHLKEPMB_HKFEIADBENE_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEGGHLKEPMB_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::KEGGHLKEPMB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KEGGHLKEPMB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KEGGHLKEPMB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 BGDGFOGPFDD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEGGHLKEPMB_BGDGFOGPFDD_OFFSET))(this);
	}
};
