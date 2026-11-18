#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define KONECBMJFMC_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KONECBMJFMC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KONECBMJFMC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KONECBMJFMC_GHGFMPOFDGE_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KONECBMJFMC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KONECBMJFMC_TypeDefinitionIndex = 11394;

struct alignas(4) KONECBMJFMC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KONECBMJFMC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KONECBMJFMC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::KONECBMJFMC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KONECBMJFMC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KONECBMJFMC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHGFMPOFDGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KONECBMJFMC_GHGFMPOFDGE_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KONECBMJFMC_ACOEONABOJL_OFFSET))(this);
	}
};
