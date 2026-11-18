#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define JEMEAHPBCEN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JEMEAHPBCEN_ELOAKJLAGOH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JEMEAHPBCEN_EOJKPONPHNP_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define JEMEAHPBCEN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JEMEAHPBCEN_LAMJHEGFIHB_OFFSET UNITYSDK_OFFSET(0x755D20)
#define JEMEAHPBCEN_LOKOGEPHMOH_OFFSET UNITYSDK_OFFSET(0x761240)
#define JEMEAHPBCEN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JEMEAHPBCEN_TypeDefinitionIndex = 15806;

struct alignas(4) JEMEAHPBCEN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEMEAHPBCEN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JEMEAHPBCEN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LOKOGEPHMOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEMEAHPBCEN_LOKOGEPHMOH_OFFSET))(this);
	}

	/*
	::JEMEAHPBCEN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JEMEAHPBCEN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JEMEAHPBCEN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ELOAKJLAGOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEMEAHPBCEN_ELOAKJLAGOH_OFFSET))(this);
	}

	::System::Int32 LAMJHEGFIHB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEMEAHPBCEN_LAMJHEGFIHB_OFFSET))(this);
	}

	::System::Boolean EOJKPONPHNP(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JEMEAHPBCEN_EOJKPONPHNP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
