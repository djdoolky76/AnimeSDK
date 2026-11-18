#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define OPEMFJPDHGD_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OPEMFJPDHGD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OPEMFJPDHGD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OPEMFJPDHGD_HOEBGOBIKNC_OFFSET UNITYSDK_OFFSET(0x755C70)
#define OPEMFJPDHGD_HOKFDABCANC_OFFSET UNITYSDK_OFFSET(0x754970)
#define OPEMFJPDHGD_MEFLDBOCAIO_OFFSET UNITYSDK_OFFSET(0x755D20)
#define OPEMFJPDHGD_NKCNGLADFNA_OFFSET UNITYSDK_OFFSET(0x754920)
#define OPEMFJPDHGD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OPEMFJPDHGD_TypeDefinitionIndex = 12159;

struct alignas(4) OPEMFJPDHGD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEMFJPDHGD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OPEMFJPDHGD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NKCNGLADFNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEMFJPDHGD_NKCNGLADFNA_OFFSET))(this);
	}

	::System::Int32 HOEBGOBIKNC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEMFJPDHGD_HOEBGOBIKNC_OFFSET))(this);
	}

	/*
	::OPEMFJPDHGD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OPEMFJPDHGD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OPEMFJPDHGD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 HOKFDABCANC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEMFJPDHGD_HOKFDABCANC_OFFSET))(this);
	}

	::System::Int32 MEFLDBOCAIO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEMFJPDHGD_MEFLDBOCAIO_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEMFJPDHGD_ACOEONABOJL_OFFSET))(this);
	}
};
