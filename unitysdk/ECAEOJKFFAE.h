#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define ECAEOJKFFAE_BBKGGJDNOFI_OFFSET UNITYSDK_OFFSET(0x756B90)
#define ECAEOJKFFAE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ECAEOJKFFAE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ECAEOJKFFAE_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ECAEOJKFFAE_MFOOKILPPDI_OFFSET UNITYSDK_OFFSET(0x754B50)
#define ECAEOJKFFAE_NENDAECBCEM_OFFSET UNITYSDK_OFFSET(0x755D20)
#define ECAEOJKFFAE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ECAEOJKFFAE_TypeDefinitionIndex = 13162;

struct alignas(4) ECAEOJKFFAE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECAEOJKFFAE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ECAEOJKFFAE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 MFOOKILPPDI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECAEOJKFFAE_MFOOKILPPDI_OFFSET))(this);
	}

	/*
	::ECAEOJKFFAE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ECAEOJKFFAE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ECAEOJKFFAE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NENDAECBCEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECAEOJKFFAE_NENDAECBCEM_OFFSET))(this);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECAEOJKFFAE_GKBAJJACIEA_OFFSET))(this);
	}

	::System::Int32 BBKGGJDNOFI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECAEOJKFFAE_BBKGGJDNOFI_OFFSET))(this);
	}
};
