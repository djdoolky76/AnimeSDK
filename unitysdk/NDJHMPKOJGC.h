#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define NDJHMPKOJGC_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NDJHMPKOJGC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NDJHMPKOJGC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NDJHMPKOJGC_HIMLKMFOFDK_OFFSET UNITYSDK_OFFSET(0x754B50)
#define NDJHMPKOJGC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NDJHMPKOJGC_TypeDefinitionIndex = 16067;

struct alignas(4) NDJHMPKOJGC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDJHMPKOJGC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NDJHMPKOJGC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HIMLKMFOFDK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDJHMPKOJGC_HIMLKMFOFDK_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDJHMPKOJGC_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::NDJHMPKOJGC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NDJHMPKOJGC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NDJHMPKOJGC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
