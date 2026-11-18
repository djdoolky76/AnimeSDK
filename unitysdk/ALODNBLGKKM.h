#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Struct.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define ALODNBLGKKM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ALODNBLGKKM_CCANKPOGMJD_OFFSET UNITYSDK_OFFSET(0x762670)
#define ALODNBLGKKM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ALODNBLGKKM_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x7626A0)
#define ALODNBLGKKM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ALODNBLGKKM_TypeDefinitionIndex = 16996;

struct alignas(4) ALODNBLGKKM
{
	::FlatBuffers::Struct KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALODNBLGKKM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ALODNBLGKKM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::ALODNBLGKKM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ALODNBLGKKM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ALODNBLGKKM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 CCANKPOGMJD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALODNBLGKKM_CCANKPOGMJD_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALODNBLGKKM_HKELPCLHLEC_OFFSET))(this);
	}
};
