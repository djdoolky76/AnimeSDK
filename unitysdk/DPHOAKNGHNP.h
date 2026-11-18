#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DPHOAKNGHNP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DPHOAKNGHNP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DPHOAKNGHNP_KCIJKLNKKJH_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define DPHOAKNGHNP_PBJHIAOGPHD_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DPHOAKNGHNP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DPHOAKNGHNP_TypeDefinitionIndex = 9252;

struct alignas(4) DPHOAKNGHNP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHOAKNGHNP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPHOAKNGHNP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 PBJHIAOGPHD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHOAKNGHNP_PBJHIAOGPHD_OFFSET))(this);
	}

	/*
	::DPHOAKNGHNP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DPHOAKNGHNP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPHOAKNGHNP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* KCIJKLNKKJH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHOAKNGHNP_KCIJKLNKKJH_OFFSET))(this);
	}
};
