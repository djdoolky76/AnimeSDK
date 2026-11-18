#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JHMBEJKIBCP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JHMBEJKIBCP_DLKMGJDJOCP_OFFSET UNITYSDK_OFFSET(0x754F10)
#define JHMBEJKIBCP_ECACCOBJGHO_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JHMBEJKIBCP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JHMBEJKIBCP_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x756B90)
#define JHMBEJKIBCP_PAFMMMKAKPJ_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define JHMBEJKIBCP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JHMBEJKIBCP_TypeDefinitionIndex = 10544;

struct alignas(4) JHMBEJKIBCP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHMBEJKIBCP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHMBEJKIBCP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* PAFMMMKAKPJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHMBEJKIBCP_PAFMMMKAKPJ_OFFSET))(this);
	}

	/*
	::JHMBEJKIBCP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JHMBEJKIBCP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHMBEJKIBCP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ECACCOBJGHO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHMBEJKIBCP_ECACCOBJGHO_OFFSET))(this);
	}

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHMBEJKIBCP_LNOBBAIGKJL_OFFSET))(this);
	}

	::System::String* DLKMGJDJOCP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHMBEJKIBCP_DLKMGJDJOCP_OFFSET))(this);
	}
};
