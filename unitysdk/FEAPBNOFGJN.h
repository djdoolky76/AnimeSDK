#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define FEAPBNOFGJN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FEAPBNOFGJN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FEAPBNOFGJN_BKEMENLFGDC_OFFSET UNITYSDK_OFFSET(0x754920)
#define FEAPBNOFGJN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FEAPBNOFGJN_PACFJGKLEJB_OFFSET UNITYSDK_OFFSET(0x756B90)
#define FEAPBNOFGJN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FEAPBNOFGJN_TypeDefinitionIndex = 12269;

struct alignas(4) FEAPBNOFGJN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEAPBNOFGJN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FEAPBNOFGJN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 PACFJGKLEJB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEAPBNOFGJN_PACFJGKLEJB_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEAPBNOFGJN_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::FEAPBNOFGJN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FEAPBNOFGJN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FEAPBNOFGJN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 BKEMENLFGDC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEAPBNOFGJN_BKEMENLFGDC_OFFSET))(this);
	}
};
