#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Struct.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define OICFHEBNAEE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OICFHEBNAEE_BLLOPKJDOBE_OFFSET UNITYSDK_OFFSET(0x762670)
#define OICFHEBNAEE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OICFHEBNAEE_IGMOCLGENLA_OFFSET UNITYSDK_OFFSET(0x7626A0)
#define OICFHEBNAEE_NGKOPBCHFOP_OFFSET UNITYSDK_OFFSET(0x7A68F0)
#define OICFHEBNAEE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OICFHEBNAEE_TypeDefinitionIndex = 17717;

struct alignas(4) OICFHEBNAEE
{
	::FlatBuffers::Struct KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OICFHEBNAEE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OICFHEBNAEE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::OICFHEBNAEE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OICFHEBNAEE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OICFHEBNAEE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 BLLOPKJDOBE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OICFHEBNAEE_BLLOPKJDOBE_OFFSET))(this);
	}

	::System::Int32 IGMOCLGENLA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OICFHEBNAEE_IGMOCLGENLA_OFFSET))(this);
	}

	::System::Int32 NGKOPBCHFOP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OICFHEBNAEE_NGKOPBCHFOP_OFFSET))(this);
	}
};
