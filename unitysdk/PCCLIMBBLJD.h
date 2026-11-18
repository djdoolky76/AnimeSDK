#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PCCLIMBBLJD_ADHOFCOBIDC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PCCLIMBBLJD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PCCLIMBBLJD_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x754B50)
#define PCCLIMBBLJD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PCCLIMBBLJD_LLHMIGCLLDE_OFFSET UNITYSDK_OFFSET(0x754F10)
#define PCCLIMBBLJD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PCCLIMBBLJD_TypeDefinitionIndex = 9429;

struct alignas(4) PCCLIMBBLJD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCCLIMBBLJD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PCCLIMBBLJD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCCLIMBBLJD_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Int32 ADHOFCOBIDC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCCLIMBBLJD_ADHOFCOBIDC_OFFSET))(this);
	}

	::System::String* LLHMIGCLLDE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCCLIMBBLJD_LLHMIGCLLDE_OFFSET))(this);
	}

	/*
	::PCCLIMBBLJD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PCCLIMBBLJD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PCCLIMBBLJD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
