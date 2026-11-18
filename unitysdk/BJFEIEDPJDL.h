#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BJFEIEDPJDL_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BJFEIEDPJDL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BJFEIEDPJDL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BJFEIEDPJDL_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define BJFEIEDPJDL_JBOIMNAPIKG_OFFSET UNITYSDK_OFFSET(0x755D20)
#define BJFEIEDPJDL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BJFEIEDPJDL_TypeDefinitionIndex = 11135;

struct alignas(4) BJFEIEDPJDL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJFEIEDPJDL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BJFEIEDPJDL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 JBOIMNAPIKG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJFEIEDPJDL_JBOIMNAPIKG_OFFSET))(this);
	}

	/*
	::BJFEIEDPJDL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BJFEIEDPJDL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BJFEIEDPJDL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJFEIEDPJDL_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJFEIEDPJDL_IFDIOIOCGDP_OFFSET))(this);
	}
};
