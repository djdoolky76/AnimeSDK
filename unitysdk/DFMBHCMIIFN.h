#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define DFMBHCMIIFN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DFMBHCMIIFN_EGOCINKFCGE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DFMBHCMIIFN_FJOLPGBLBBH_OFFSET UNITYSDK_OFFSET(0x754B50)
#define DFMBHCMIIFN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DFMBHCMIIFN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DFMBHCMIIFN_TypeDefinitionIndex = 11563;

struct alignas(4) DFMBHCMIIFN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMBHCMIIFN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFMBHCMIIFN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 EGOCINKFCGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMBHCMIIFN_EGOCINKFCGE_OFFSET))(this);
	}

	::System::Int32 FJOLPGBLBBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMBHCMIIFN_FJOLPGBLBBH_OFFSET))(this);
	}

	/*
	::DFMBHCMIIFN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DFMBHCMIIFN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFMBHCMIIFN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
