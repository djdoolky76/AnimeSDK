#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define DJLEBAJIIDE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DJLEBAJIIDE_FFDLHLKJPPD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define DJLEBAJIIDE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DJLEBAJIIDE_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DJLEBAJIIDE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DJLEBAJIIDE_TypeDefinitionIndex = 10041;

struct alignas(4) DJLEBAJIIDE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLEBAJIIDE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DJLEBAJIIDE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 FFDLHLKJPPD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLEBAJIIDE_FFDLHLKJPPD_OFFSET))(this);
	}

	/*
	::DJLEBAJIIDE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DJLEBAJIIDE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DJLEBAJIIDE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLEBAJIIDE_GKBAJJACIEA_OFFSET))(this);
	}
};
