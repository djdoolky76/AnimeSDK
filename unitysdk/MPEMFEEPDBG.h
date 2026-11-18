#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define MPEMFEEPDBG_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MPEMFEEPDBG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MPEMFEEPDBG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MPEMFEEPDBG_KCBFOICDMMP_OFFSET UNITYSDK_OFFSET(0x756B90)
#define MPEMFEEPDBG_LPBCBNLPKGG_OFFSET UNITYSDK_OFFSET(0x754B50)
#define MPEMFEEPDBG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MPEMFEEPDBG_TypeDefinitionIndex = 16639;

struct alignas(4) MPEMFEEPDBG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPEMFEEPDBG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPEMFEEPDBG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 KCBFOICDMMP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPEMFEEPDBG_KCBFOICDMMP_OFFSET))(this);
	}

	/*
	::MPEMFEEPDBG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MPEMFEEPDBG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPEMFEEPDBG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPEMFEEPDBG_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 LPBCBNLPKGG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPEMFEEPDBG_LPBCBNLPKGG_OFFSET))(this);
	}
};
