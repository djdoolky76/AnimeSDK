#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define AAEEOOMFLLC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AAEEOOMFLLC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AAEEOOMFLLC_IMFELMMICNE_OFFSET UNITYSDK_OFFSET(0x754B50)
#define AAEEOOMFLLC_NILPHCJELOL_OFFSET UNITYSDK_OFFSET(0x754F10)
#define AAEEOOMFLLC_PIPBPLEIPFK_OFFSET UNITYSDK_OFFSET(0x754C80)
#define AAEEOOMFLLC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AAEEOOMFLLC_TypeDefinitionIndex = 13054;

struct alignas(4) AAEEOOMFLLC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEEOOMFLLC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AAEEOOMFLLC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 PIPBPLEIPFK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEEOOMFLLC_PIPBPLEIPFK_OFFSET))(this);
	}

	/*
	::AAEEOOMFLLC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AAEEOOMFLLC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AAEEOOMFLLC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 IMFELMMICNE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEEOOMFLLC_IMFELMMICNE_OFFSET))(this);
	}

	::System::String* NILPHCJELOL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEEOOMFLLC_NILPHCJELOL_OFFSET))(this);
	}
};
