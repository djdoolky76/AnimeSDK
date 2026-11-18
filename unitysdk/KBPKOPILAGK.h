#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define KBPKOPILAGK_ANLJBJCPLED_OFFSET UNITYSDK_OFFSET(0x755D20)
#define KBPKOPILAGK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KBPKOPILAGK_BPGEJCCMICI_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KBPKOPILAGK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KBPKOPILAGK_JKBLIFOFACD_OFFSET UNITYSDK_OFFSET(0x756B90)
#define KBPKOPILAGK_KFIMPEMODEF_OFFSET UNITYSDK_OFFSET(0x754920)
#define KBPKOPILAGK_MGPLHHEIADA_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KBPKOPILAGK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KBPKOPILAGK_TypeDefinitionIndex = 11238;

struct alignas(4) KBPKOPILAGK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPKOPILAGK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KBPKOPILAGK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::KBPKOPILAGK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KBPKOPILAGK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KBPKOPILAGK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 MGPLHHEIADA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPKOPILAGK_MGPLHHEIADA_OFFSET))(this);
	}

	::System::Int32 ANLJBJCPLED()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPKOPILAGK_ANLJBJCPLED_OFFSET))(this);
	}

	::System::Int32 KFIMPEMODEF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPKOPILAGK_KFIMPEMODEF_OFFSET))(this);
	}

	::System::Int32 BPGEJCCMICI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPKOPILAGK_BPGEJCCMICI_OFFSET))(this);
	}

	::System::Int32 JKBLIFOFACD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPKOPILAGK_JKBLIFOFACD_OFFSET))(this);
	}
};
