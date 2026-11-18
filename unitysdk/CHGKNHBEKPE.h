#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CHGKNHBEKPE_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CHGKNHBEKPE_AIOLKBHCJAO_OFFSET UNITYSDK_OFFSET(0x7A7050)
#define CHGKNHBEKPE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CHGKNHBEKPE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CHGKNHBEKPE_GNLBPCGFALA_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define CHGKNHBEKPE_KCKKBIKMELG_OFFSET UNITYSDK_OFFSET(0x754F10)
#define CHGKNHBEKPE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19F2BD90)
#define CHGKNHBEKPE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CHGKNHBEKPE_TypeDefinitionIndex = 15524;

struct alignas(4) CHGKNHBEKPE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGKNHBEKPE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CHGKNHBEKPE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Single AIOLKBHCJAO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGKNHBEKPE_AIOLKBHCJAO_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGKNHBEKPE_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::CHGKNHBEKPE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CHGKNHBEKPE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CHGKNHBEKPE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* KCKKBIKMELG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGKNHBEKPE_KCKKBIKMELG_OFFSET))(this);
	}

	::System::String* GNLBPCGFALA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGKNHBEKPE_GNLBPCGFALA_OFFSET))(this);
	}

	/*
	::CHGKNHBEKPE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CHGKNHBEKPE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CHGKNHBEKPE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
