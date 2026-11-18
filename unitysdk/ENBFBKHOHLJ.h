#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define ENBFBKHOHLJ_AKJEBFJMGCJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ENBFBKHOHLJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ENBFBKHOHLJ_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x754F10)
#define ENBFBKHOHLJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ENBFBKHOHLJ_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define ENBFBKHOHLJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ENBFBKHOHLJ_TypeDefinitionIndex = 13015;

struct alignas(4) ENBFBKHOHLJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENBFBKHOHLJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ENBFBKHOHLJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::ENBFBKHOHLJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ENBFBKHOHLJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ENBFBKHOHLJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENBFBKHOHLJ_IFDIOIOCGDP_OFFSET))(this);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENBFBKHOHLJ_ENJENAJGHFI_OFFSET))(this);
	}

	::System::Int32 AKJEBFJMGCJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENBFBKHOHLJ_AKJEBFJMGCJ_OFFSET))(this);
	}
};
