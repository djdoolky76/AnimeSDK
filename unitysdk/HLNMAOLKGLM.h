#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HLNMAOLKGLM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HLNMAOLKGLM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HLNMAOLKGLM_HEDHHPDOPOF_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HLNMAOLKGLM_NEOPHKKEIJP_OFFSET UNITYSDK_OFFSET(0x754F10)
#define HLNMAOLKGLM_NLAIFNFGGMA_OFFSET UNITYSDK_OFFSET(0x754B50)
#define HLNMAOLKGLM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x174780C0)
#define HLNMAOLKGLM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HLNMAOLKGLM_TypeDefinitionIndex = 13524;

struct alignas(4) HLNMAOLKGLM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNMAOLKGLM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HLNMAOLKGLM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::HLNMAOLKGLM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HLNMAOLKGLM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HLNMAOLKGLM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HLNMAOLKGLM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HLNMAOLKGLM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HLNMAOLKGLM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 HEDHHPDOPOF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNMAOLKGLM_HEDHHPDOPOF_OFFSET))(this);
	}

	::System::String* NEOPHKKEIJP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNMAOLKGLM_NEOPHKKEIJP_OFFSET))(this);
	}

	::System::Int32 NLAIFNFGGMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNMAOLKGLM_NLAIFNFGGMA_OFFSET))(this);
	}
};
