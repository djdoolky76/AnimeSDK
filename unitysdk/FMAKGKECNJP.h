#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define FMAKGKECNJP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FMAKGKECNJP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FMAKGKECNJP_DLCPPNGCPDP_OFFSET UNITYSDK_OFFSET(0x755D20)
#define FMAKGKECNJP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FMAKGKECNJP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FMAKGKECNJP_TypeDefinitionIndex = 14305;

struct alignas(4) FMAKGKECNJP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMAKGKECNJP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMAKGKECNJP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMAKGKECNJP_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::FMAKGKECNJP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FMAKGKECNJP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMAKGKECNJP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 DLCPPNGCPDP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMAKGKECNJP_DLCPPNGCPDP_OFFSET))(this);
	}
};
