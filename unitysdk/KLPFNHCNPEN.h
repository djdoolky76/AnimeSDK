#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KLPFNHCNPEN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KLPFNHCNPEN_COKGJGBCFPC_OFFSET UNITYSDK_OFFSET(0x755D20)
#define KLPFNHCNPEN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KLPFNHCNPEN_KBFFMJLLFMG_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KLPFNHCNPEN_MMADJDBLGNG_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define KLPFNHCNPEN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KLPFNHCNPEN_TypeDefinitionIndex = 10229;

struct alignas(4) KLPFNHCNPEN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPFNHCNPEN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KLPFNHCNPEN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 COKGJGBCFPC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPFNHCNPEN_COKGJGBCFPC_OFFSET))(this);
	}

	/*
	::KLPFNHCNPEN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KLPFNHCNPEN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KLPFNHCNPEN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 KBFFMJLLFMG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPFNHCNPEN_KBFFMJLLFMG_OFFSET))(this);
	}

	::System::String* MMADJDBLGNG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPFNHCNPEN_MMADJDBLGNG_OFFSET))(this);
	}
};
