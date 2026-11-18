#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Struct.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define OHNDLJDJIDC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OHNDLJDJIDC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OHNDLJDJIDC_PEOEBEBFIJO_OFFSET UNITYSDK_OFFSET(0x7626A0)
#define OHNDLJDJIDC_PGFCLLGLOCG_OFFSET UNITYSDK_OFFSET(0x762670)
#define OHNDLJDJIDC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OHNDLJDJIDC_TypeDefinitionIndex = 12411;

struct alignas(4) OHNDLJDJIDC
{
	::FlatBuffers::Struct KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHNDLJDJIDC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OHNDLJDJIDC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 PEOEBEBFIJO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHNDLJDJIDC_PEOEBEBFIJO_OFFSET))(this);
	}

	/*
	::OHNDLJDJIDC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OHNDLJDJIDC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OHNDLJDJIDC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 PGFCLLGLOCG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHNDLJDJIDC_PGFCLLGLOCG_OFFSET))(this);
	}
};
