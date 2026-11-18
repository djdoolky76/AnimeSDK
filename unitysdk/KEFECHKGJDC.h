#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KEFECHKGJDC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KEFECHKGJDC_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KEFECHKGJDC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KEFECHKGJDC_JMLMFEAPBPK_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KEFECHKGJDC_MNGNAMLGGJN_OFFSET UNITYSDK_OFFSET(0x754F10)
#define KEFECHKGJDC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KEFECHKGJDC_TypeDefinitionIndex = 14198;

struct alignas(4) KEFECHKGJDC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEFECHKGJDC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KEFECHKGJDC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEFECHKGJDC_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Int32 JMLMFEAPBPK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEFECHKGJDC_JMLMFEAPBPK_OFFSET))(this);
	}

	::System::String* MNGNAMLGGJN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEFECHKGJDC_MNGNAMLGGJN_OFFSET))(this);
	}

	/*
	::KEFECHKGJDC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KEFECHKGJDC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KEFECHKGJDC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
