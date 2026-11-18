#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define POCAEGGMEOL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define POCAEGGMEOL_CCANKPOGMJD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define POCAEGGMEOL_FIGNOOEDDNC_OFFSET UNITYSDK_OFFSET(0x755D20)
#define POCAEGGMEOL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define POCAEGGMEOL_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define POCAEGGMEOL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int POCAEGGMEOL_TypeDefinitionIndex = 14955;

struct alignas(4) POCAEGGMEOL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + POCAEGGMEOL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POCAEGGMEOL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 CCANKPOGMJD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POCAEGGMEOL_CCANKPOGMJD_OFFSET))(this);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POCAEGGMEOL_GKBAJJACIEA_OFFSET))(this);
	}

	::System::Int32 FIGNOOEDDNC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POCAEGGMEOL_FIGNOOEDDNC_OFFSET))(this);
	}

	/*
	::POCAEGGMEOL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::POCAEGGMEOL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POCAEGGMEOL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
