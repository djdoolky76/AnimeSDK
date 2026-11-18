#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JPGNPOPEGJP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JPGNPOPEGJP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JPGNPOPEGJP_KBNNNBOAEND_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JPGNPOPEGJP_MBPBPHCENCG_OFFSET UNITYSDK_OFFSET(0x754F10)
#define JPGNPOPEGJP_ODKNDDBOLPF_OFFSET UNITYSDK_OFFSET(0x756B10)
#define JPGNPOPEGJP_PJDELAGEDDM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define JPGNPOPEGJP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JPGNPOPEGJP_TypeDefinitionIndex = 11332;

struct alignas(4) JPGNPOPEGJP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPGNPOPEGJP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JPGNPOPEGJP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::JPGNPOPEGJP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JPGNPOPEGJP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JPGNPOPEGJP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 KBNNNBOAEND()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPGNPOPEGJP_KBNNNBOAEND_OFFSET))(this);
	}

	::System::Int32 PJDELAGEDDM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPGNPOPEGJP_PJDELAGEDDM_OFFSET))(this);
	}

	::System::String* ODKNDDBOLPF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPGNPOPEGJP_ODKNDDBOLPF_OFFSET))(this);
	}

	::System::String* MBPBPHCENCG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPGNPOPEGJP_MBPBPHCENCG_OFFSET))(this);
	}
};
