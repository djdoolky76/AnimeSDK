#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LJHCCPIJLHJ_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LJHCCPIJLHJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LJHCCPIJLHJ_EFOELIKLAFG_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define LJHCCPIJLHJ_GEDCIEFJJFO_OFFSET UNITYSDK_OFFSET(0x754F10)
#define LJHCCPIJLHJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LJHCCPIJLHJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LJHCCPIJLHJ_TypeDefinitionIndex = 11919;

struct alignas(4) LJHCCPIJLHJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHCCPIJLHJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LJHCCPIJLHJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* GEDCIEFJJFO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHCCPIJLHJ_GEDCIEFJJFO_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHCCPIJLHJ_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::LJHCCPIJLHJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LJHCCPIJLHJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LJHCCPIJLHJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* EFOELIKLAFG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHCCPIJLHJ_EFOELIKLAFG_OFFSET))(this);
	}
};
