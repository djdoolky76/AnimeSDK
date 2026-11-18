#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define DMCGLIMCNOG_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DMCGLIMCNOG_APNMIIEPGKA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define DMCGLIMCNOG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DMCGLIMCNOG_EJNGDDKFFED_OFFSET UNITYSDK_OFFSET(0x754B50)
#define DMCGLIMCNOG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DMCGLIMCNOG_PIAPBGIBHKA_OFFSET UNITYSDK_OFFSET(0x756B90)
#define DMCGLIMCNOG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DMCGLIMCNOG_TypeDefinitionIndex = 11331;

struct alignas(4) DMCGLIMCNOG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMCGLIMCNOG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DMCGLIMCNOG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::DMCGLIMCNOG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DMCGLIMCNOG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DMCGLIMCNOG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 PIAPBGIBHKA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMCGLIMCNOG_PIAPBGIBHKA_OFFSET))(this);
	}

	::System::Int32 APNMIIEPGKA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMCGLIMCNOG_APNMIIEPGKA_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMCGLIMCNOG_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 EJNGDDKFFED()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMCGLIMCNOG_EJNGDDKFFED_OFFSET))(this);
	}
};
