#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define KNFKELNOGBF_ALCNAJGMLLN_OFFSET UNITYSDK_OFFSET(0x756720)
#define KNFKELNOGBF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KNFKELNOGBF_PCEPCMLEOBH_OFFSET UNITYSDK_OFFSET(0x7562E0)
#define KNFKELNOGBF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KNFKELNOGBF_TypeDefinitionIndex = 10772;

struct alignas(4) KNFKELNOGBF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNFKELNOGBF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KNFKELNOGBF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean PCEPCMLEOBH(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + KNFKELNOGBF_PCEPCMLEOBH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ALCNAJGMLLN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNFKELNOGBF_ALCNAJGMLLN_OFFSET))(this);
	}
};
