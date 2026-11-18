#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GFKDKBPPDJJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GFKDKBPPDJJ_FKHBKOIJCKO_OFFSET UNITYSDK_OFFSET(0x756B10)
#define GFKDKBPPDJJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GFKDKBPPDJJ_GOJHJGMHKMF_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define GFKDKBPPDJJ_ILMKLGIDBJI_OFFSET UNITYSDK_OFFSET(0x757290)
#define GFKDKBPPDJJ_JALALPLFGII_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GFKDKBPPDJJ_LJDGCAFMGOD_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define GFKDKBPPDJJ_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x756B90)
#define GFKDKBPPDJJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x174668D0)
#define GFKDKBPPDJJ_PAKNEBFAJHF_OFFSET UNITYSDK_OFFSET(0x755D20)
#define GFKDKBPPDJJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GFKDKBPPDJJ_TypeDefinitionIndex = 17516;

struct alignas(4) GFKDKBPPDJJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFKDKBPPDJJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GFKDKBPPDJJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::GFKDKBPPDJJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GFKDKBPPDJJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GFKDKBPPDJJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 JALALPLFGII()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFKDKBPPDJJ_JALALPLFGII_OFFSET))(this);
	}

	::System::String* LJDGCAFMGOD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFKDKBPPDJJ_LJDGCAFMGOD_OFFSET))(this);
	}

	::System::String* ILMKLGIDBJI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFKDKBPPDJJ_ILMKLGIDBJI_OFFSET))(this);
	}

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFKDKBPPDJJ_LNOBBAIGKJL_OFFSET))(this);
	}

	::System::Int32 PAKNEBFAJHF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFKDKBPPDJJ_PAKNEBFAJHF_OFFSET))(this);
	}

	/*
	static ::GFKDKBPPDJJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GFKDKBPPDJJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GFKDKBPPDJJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* GOJHJGMHKMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFKDKBPPDJJ_GOJHJGMHKMF_OFFSET))(this);
	}

	::System::String* FKHBKOIJCKO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFKDKBPPDJJ_FKHBKOIJCKO_OFFSET))(this);
	}
};
