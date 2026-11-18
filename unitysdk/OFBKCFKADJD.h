#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OFBKCFKADJD_ANHKNBOGHDM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OFBKCFKADJD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OFBKCFKADJD_CAPEBDGEINN_OFFSET UNITYSDK_OFFSET(0x7B21E0)
#define OFBKCFKADJD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OFBKCFKADJD_MNEELPECLKH_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define OFBKCFKADJD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OFBKCFKADJD_TypeDefinitionIndex = 10157;

struct alignas(4) OFBKCFKADJD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBKCFKADJD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OFBKCFKADJD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::UInt64 CAPEBDGEINN()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBKCFKADJD_CAPEBDGEINN_OFFSET))(this);
	}

	/*
	::OFBKCFKADJD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OFBKCFKADJD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OFBKCFKADJD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* MNEELPECLKH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBKCFKADJD_MNEELPECLKH_OFFSET))(this);
	}

	::System::Int32 ANHKNBOGHDM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBKCFKADJD_ANHKNBOGHDM_OFFSET))(this);
	}
};
