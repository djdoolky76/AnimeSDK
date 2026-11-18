#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NOOIEFDPJCN_BCOGCADNCHN_OFFSET UNITYSDK_OFFSET(0x755A00)
#define NOOIEFDPJCN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NOOIEFDPJCN_DJGJHOGEAGO_OFFSET UNITYSDK_OFFSET(0x754F10)
#define NOOIEFDPJCN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NOOIEFDPJCN_JKJFHFLBDMP_OFFSET UNITYSDK_OFFSET(0x754B50)
#define NOOIEFDPJCN_OKMEGAIOHJG_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NOOIEFDPJCN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NOOIEFDPJCN_TypeDefinitionIndex = 10498;

struct alignas(4) NOOIEFDPJCN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOOIEFDPJCN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NOOIEFDPJCN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* DJGJHOGEAGO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOOIEFDPJCN_DJGJHOGEAGO_OFFSET))(this);
	}

	/*
	::NOOIEFDPJCN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NOOIEFDPJCN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NOOIEFDPJCN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* BCOGCADNCHN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOOIEFDPJCN_BCOGCADNCHN_OFFSET))(this);
	}

	::System::Int32 OKMEGAIOHJG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOOIEFDPJCN_OKMEGAIOHJG_OFFSET))(this);
	}

	::System::Int32 JKJFHFLBDMP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOOIEFDPJCN_JKJFHFLBDMP_OFFSET))(this);
	}
};
