#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JHLACNDBEEL_ALMJBHFEOFA_OFFSET UNITYSDK_OFFSET(0x756B90)
#define JHLACNDBEEL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JHLACNDBEEL_CGIDFONADHI_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define JHLACNDBEEL_ELOAKJLAGOH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JHLACNDBEEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JHLACNDBEEL_KAABCLGOGDF_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define JHLACNDBEEL_OFHOBPCIHAE_OFFSET UNITYSDK_OFFSET(0x754F10)
#define JHLACNDBEEL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JHLACNDBEEL_TypeDefinitionIndex = 13140;

struct alignas(4) JHLACNDBEEL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHLACNDBEEL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHLACNDBEEL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* OFHOBPCIHAE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHLACNDBEEL_OFHOBPCIHAE_OFFSET))(this);
	}

	/*
	::JHLACNDBEEL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JHLACNDBEEL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHLACNDBEEL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* CGIDFONADHI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHLACNDBEEL_CGIDFONADHI_OFFSET))(this);
	}

	::System::String* KAABCLGOGDF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHLACNDBEEL_KAABCLGOGDF_OFFSET))(this);
	}

	::System::Int32 ALMJBHFEOFA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHLACNDBEEL_ALMJBHFEOFA_OFFSET))(this);
	}

	::System::Int32 ELOAKJLAGOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHLACNDBEEL_ELOAKJLAGOH_OFFSET))(this);
	}
};
