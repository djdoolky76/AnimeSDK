#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Struct.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define FFGJHFMEFKH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FFGJHFMEFKH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FFGJHFMEFKH_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x762670)
#define FFGJHFMEFKH_NPGOKDIENEM_OFFSET UNITYSDK_OFFSET(0x7626A0)
#define FFGJHFMEFKH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FFGJHFMEFKH_TypeDefinitionIndex = 17363;

struct alignas(4) FFGJHFMEFKH
{
	::FlatBuffers::Struct KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGJHFMEFKH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FFGJHFMEFKH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::FFGJHFMEFKH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FFGJHFMEFKH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FFGJHFMEFKH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NPGOKDIENEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGJHFMEFKH_NPGOKDIENEM_OFFSET))(this);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGJHFMEFKH_GKBAJJACIEA_OFFSET))(this);
	}
};
