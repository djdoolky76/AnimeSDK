#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PEBGABGMONN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PEBGABGMONN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PEBGABGMONN_ELPFAFFJNKI_OFFSET UNITYSDK_OFFSET(0x754F10)
#define PEBGABGMONN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PEBGABGMONN_GPBFENDAJMF_OFFSET UNITYSDK_OFFSET(0x756B10)
#define PEBGABGMONN_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x758780)
#define PEBGABGMONN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PEBGABGMONN_TypeDefinitionIndex = 16741;

struct alignas(4) PEBGABGMONN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBGABGMONN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PEBGABGMONN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* GPBFENDAJMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBGABGMONN_GPBFENDAJMF_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBGABGMONN_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::PEBGABGMONN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PEBGABGMONN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PEBGABGMONN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBGABGMONN_LNOBBAIGKJL_OFFSET))(this);
	}

	::System::String* ELPFAFFJNKI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBGABGMONN_ELPFAFFJNKI_OFFSET))(this);
	}
};
