#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GJCMOELDGOK_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GJCMOELDGOK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GJCMOELDGOK_CFONCFMHCPM_OFFSET UNITYSDK_OFFSET(0x755A00)
#define GJCMOELDGOK_GDHKDHEPCLM_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define GJCMOELDGOK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GJCMOELDGOK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GJCMOELDGOK_TypeDefinitionIndex = 12013;

struct alignas(4) GJCMOELDGOK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJCMOELDGOK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GJCMOELDGOK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* CFONCFMHCPM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJCMOELDGOK_CFONCFMHCPM_OFFSET))(this);
	}

	/*
	::GJCMOELDGOK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GJCMOELDGOK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GJCMOELDGOK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJCMOELDGOK_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* GDHKDHEPCLM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJCMOELDGOK_GDHKDHEPCLM_OFFSET))(this);
	}
};
