#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Struct.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define FCKGGEBELGA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FCKGGEBELGA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FCKGGEBELGA_IGMOCLGENLA_OFFSET UNITYSDK_OFFSET(0x762670)
#define FCKGGEBELGA_NGKOPBCHFOP_OFFSET UNITYSDK_OFFSET(0x7626A0)
#define FCKGGEBELGA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FCKGGEBELGA_TypeDefinitionIndex = 11777;

struct alignas(4) FCKGGEBELGA
{
	::FlatBuffers::Struct KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKGGEBELGA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FCKGGEBELGA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NGKOPBCHFOP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKGGEBELGA_NGKOPBCHFOP_OFFSET))(this);
	}

	/*
	::FCKGGEBELGA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FCKGGEBELGA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FCKGGEBELGA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 IGMOCLGENLA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKGGEBELGA_IGMOCLGENLA_OFFSET))(this);
	}
};
