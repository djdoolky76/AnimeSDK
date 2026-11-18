#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define CIALPHHFGDF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CIALPHHFGDF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CIALPHHFGDF_KGKGIMOLJJK_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CIALPHHFGDF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CIALPHHFGDF_TypeDefinitionIndex = 13612;

struct alignas(4) CIALPHHFGDF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIALPHHFGDF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CIALPHHFGDF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::CIALPHHFGDF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CIALPHHFGDF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CIALPHHFGDF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 KGKGIMOLJJK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIALPHHFGDF_KGKGIMOLJJK_OFFSET))(this);
	}
};
