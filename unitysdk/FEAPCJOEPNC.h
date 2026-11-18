#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define FEAPCJOEPNC_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FEAPCJOEPNC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FEAPCJOEPNC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FEAPCJOEPNC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FEAPCJOEPNC_TypeDefinitionIndex = 10313;

struct alignas(4) FEAPCJOEPNC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEAPCJOEPNC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FEAPCJOEPNC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEAPCJOEPNC_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::FEAPCJOEPNC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FEAPCJOEPNC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FEAPCJOEPNC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
