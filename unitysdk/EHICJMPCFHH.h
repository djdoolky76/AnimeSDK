#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define EHICJMPCFHH_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EHICJMPCFHH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EHICJMPCFHH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EHICJMPCFHH_IAGCCEABPGA_OFFSET UNITYSDK_OFFSET(0x754B50)
#define EHICJMPCFHH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EHICJMPCFHH_TypeDefinitionIndex = 10623;

struct alignas(4) EHICJMPCFHH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHICJMPCFHH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EHICJMPCFHH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHICJMPCFHH_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::EHICJMPCFHH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EHICJMPCFHH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EHICJMPCFHH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 IAGCCEABPGA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHICJMPCFHH_IAGCCEABPGA_OFFSET))(this);
	}
};
