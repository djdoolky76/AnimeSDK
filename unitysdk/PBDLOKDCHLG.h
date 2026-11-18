#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Struct.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define PBDLOKDCHLG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PBDLOKDCHLG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PBDLOKDCHLG_LNPHGOLLIJN_OFFSET UNITYSDK_OFFSET(0x762670)
#define PBDLOKDCHLG_PPIPMCDBNIB_OFFSET UNITYSDK_OFFSET(0x7626A0)
#define PBDLOKDCHLG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PBDLOKDCHLG_TypeDefinitionIndex = 17726;

struct alignas(4) PBDLOKDCHLG
{
	::FlatBuffers::Struct KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLOKDCHLG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PBDLOKDCHLG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 PPIPMCDBNIB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLOKDCHLG_PPIPMCDBNIB_OFFSET))(this);
	}

	::System::Int32 LNPHGOLLIJN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLOKDCHLG_LNPHGOLLIJN_OFFSET))(this);
	}

	/*
	::PBDLOKDCHLG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PBDLOKDCHLG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PBDLOKDCHLG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
