#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LALLHKLJPKE_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LALLHKLJPKE_BBMDKGLKCAP_OFFSET UNITYSDK_OFFSET(0x755190)
#define LALLHKLJPKE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LALLHKLJPKE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LALLHKLJPKE_GOALIHGGJKP_OFFSET UNITYSDK_OFFSET(0x758320)
#define LALLHKLJPKE_LHGFJAINIGI_OFFSET UNITYSDK_OFFSET(0x755D20)
#define LALLHKLJPKE_PHJDOOBAKKO_OFFSET UNITYSDK_OFFSET(0x754B50)
#define LALLHKLJPKE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LALLHKLJPKE_TypeDefinitionIndex = 9540;

struct alignas(4) LALLHKLJPKE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LALLHKLJPKE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LALLHKLJPKE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LHGFJAINIGI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LALLHKLJPKE_LHGFJAINIGI_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LALLHKLJPKE_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 PHJDOOBAKKO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LALLHKLJPKE_PHJDOOBAKKO_OFFSET))(this);
	}

	::System::String* GOALIHGGJKP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LALLHKLJPKE_GOALIHGGJKP_OFFSET))(this);
	}

	::System::Int32 BBMDKGLKCAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LALLHKLJPKE_BBMDKGLKCAP_OFFSET))(this);
	}

	/*
	::LALLHKLJPKE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LALLHKLJPKE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LALLHKLJPKE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
