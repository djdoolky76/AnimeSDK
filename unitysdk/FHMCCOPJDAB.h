#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define FHMCCOPJDAB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FHMCCOPJDAB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FHMCCOPJDAB_IIALHFLAMIF_OFFSET UNITYSDK_OFFSET(0x754B50)
#define FHMCCOPJDAB_LHMLHJBGIPC_OFFSET UNITYSDK_OFFSET(0x755D20)
#define FHMCCOPJDAB_PAJNCLDHEOO_OFFSET UNITYSDK_OFFSET(0x756B90)
#define FHMCCOPJDAB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FHMCCOPJDAB_TypeDefinitionIndex = 10595;

struct alignas(4) FHMCCOPJDAB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMCCOPJDAB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHMCCOPJDAB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 IIALHFLAMIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMCCOPJDAB_IIALHFLAMIF_OFFSET))(this);
	}

	/*
	::FHMCCOPJDAB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FHMCCOPJDAB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHMCCOPJDAB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 PAJNCLDHEOO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMCCOPJDAB_PAJNCLDHEOO_OFFSET))(this);
	}

	::System::Int32 LHMLHJBGIPC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMCCOPJDAB_LHMLHJBGIPC_OFFSET))(this);
	}
};
