#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define FHKNEFOKIII_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FHKNEFOKIII_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FHKNEFOKIII_CCANKPOGMJD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define FHKNEFOKIII_FIGNOOEDDNC_OFFSET UNITYSDK_OFFSET(0x755D20)
#define FHKNEFOKIII_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FHKNEFOKIII_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x756B90)
#define FHKNEFOKIII___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FHKNEFOKIII_TypeDefinitionIndex = 13334;

struct alignas(4) FHKNEFOKIII
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHKNEFOKIII_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHKNEFOKIII___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHKNEFOKIII_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 FIGNOOEDDNC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHKNEFOKIII_FIGNOOEDDNC_OFFSET))(this);
	}

	::System::Int32 CCANKPOGMJD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHKNEFOKIII_CCANKPOGMJD_OFFSET))(this);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHKNEFOKIII_GKBAJJACIEA_OFFSET))(this);
	}

	/*
	::FHKNEFOKIII BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FHKNEFOKIII(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHKNEFOKIII_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
