#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define KICDGLKJPPE_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KICDGLKJPPE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KICDGLKJPPE_FGNCDADEKCN_OFFSET UNITYSDK_OFFSET(0x756B90)
#define KICDGLKJPPE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KICDGLKJPPE_NCHMNOMKBDE_OFFSET UNITYSDK_OFFSET(0x755D20)
#define KICDGLKJPPE_NFDDMGBFGNI_OFFSET UNITYSDK_OFFSET(0x754920)
#define KICDGLKJPPE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KICDGLKJPPE_TypeDefinitionIndex = 13386;

struct alignas(4) KICDGLKJPPE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KICDGLKJPPE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KICDGLKJPPE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::KICDGLKJPPE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KICDGLKJPPE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KICDGLKJPPE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KICDGLKJPPE_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 NCHMNOMKBDE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KICDGLKJPPE_NCHMNOMKBDE_OFFSET))(this);
	}

	::System::Int32 FGNCDADEKCN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KICDGLKJPPE_FGNCDADEKCN_OFFSET))(this);
	}

	::System::Int32 NFDDMGBFGNI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KICDGLKJPPE_NFDDMGBFGNI_OFFSET))(this);
	}
};
