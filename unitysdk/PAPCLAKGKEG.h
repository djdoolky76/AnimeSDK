#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define PAPCLAKGKEG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PAPCLAKGKEG_CDIAKFDMEBJ_OFFSET UNITYSDK_OFFSET(0x756B90)
#define PAPCLAKGKEG_ELJJPCDMICI_OFFSET UNITYSDK_OFFSET(0x754B50)
#define PAPCLAKGKEG_FDJFAIMKJDC_OFFSET UNITYSDK_OFFSET(0x754970)
#define PAPCLAKGKEG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PAPCLAKGKEG_IKNBLOGOJBH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PAPCLAKGKEG_MEMJDFNMPKB_OFFSET UNITYSDK_OFFSET(0x755C70)
#define PAPCLAKGKEG_OBHHGHGGACK_OFFSET UNITYSDK_OFFSET(0x764220)
#define PAPCLAKGKEG_PEDPEJMMHII_OFFSET UNITYSDK_OFFSET(0x754920)
#define PAPCLAKGKEG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PAPCLAKGKEG_TypeDefinitionIndex = 11103;

struct alignas(4) PAPCLAKGKEG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPCLAKGKEG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PAPCLAKGKEG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 MEMJDFNMPKB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPCLAKGKEG_MEMJDFNMPKB_OFFSET))(this);
	}

	::System::Single OBHHGHGGACK()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPCLAKGKEG_OBHHGHGGACK_OFFSET))(this);
	}

	/*
	::PAPCLAKGKEG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PAPCLAKGKEG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PAPCLAKGKEG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ELJJPCDMICI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPCLAKGKEG_ELJJPCDMICI_OFFSET))(this);
	}

	::System::Int32 FDJFAIMKJDC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPCLAKGKEG_FDJFAIMKJDC_OFFSET))(this);
	}

	::System::Int32 IKNBLOGOJBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPCLAKGKEG_IKNBLOGOJBH_OFFSET))(this);
	}

	::System::Int32 PEDPEJMMHII()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPCLAKGKEG_PEDPEJMMHII_OFFSET))(this);
	}

	::System::Int32 CDIAKFDMEBJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPCLAKGKEG_CDIAKFDMEBJ_OFFSET))(this);
	}
};
