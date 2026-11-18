#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OFJPGIECELO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OFJPGIECELO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OFJPGIECELO_HOMIAAGCLJD_OFFSET UNITYSDK_OFFSET(0x754F10)
#define OFJPGIECELO_MBNEPPMDAHH_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define OFJPGIECELO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OFJPGIECELO_TypeDefinitionIndex = 11636;

struct alignas(4) OFJPGIECELO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFJPGIECELO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OFJPGIECELO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* MBNEPPMDAHH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFJPGIECELO_MBNEPPMDAHH_OFFSET))(this);
	}

	::System::String* HOMIAAGCLJD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFJPGIECELO_HOMIAAGCLJD_OFFSET))(this);
	}

	/*
	::OFJPGIECELO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OFJPGIECELO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OFJPGIECELO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
