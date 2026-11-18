#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PLLOHEOGLLG_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PLLOHEOGLLG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PLLOHEOGLLG_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define PLLOHEOGLLG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PLLOHEOGLLG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PLLOHEOGLLG_TypeDefinitionIndex = 16464;

struct alignas(4) PLLOHEOGLLG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLLOHEOGLLG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PLLOHEOGLLG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLLOHEOGLLG_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLLOHEOGLLG_DECMGICKDLH_OFFSET))(this);
	}

	/*
	::PLLOHEOGLLG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PLLOHEOGLLG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PLLOHEOGLLG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
