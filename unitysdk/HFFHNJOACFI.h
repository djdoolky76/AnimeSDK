#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HFFHNJOACFI_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HFFHNJOACFI_BBMDKGLKCAP_OFFSET UNITYSDK_OFFSET(0x755C70)
#define HFFHNJOACFI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HFFHNJOACFI_BHKHBIKHNBO_OFFSET UNITYSDK_OFFSET(0x757190)
#define HFFHNJOACFI_BPPICPBKLOH_OFFSET UNITYSDK_OFFSET(0x762D20)
#define HFFHNJOACFI_EDEGECOPGKA_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define HFFHNJOACFI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HFFHNJOACFI_GOALIHGGJKP_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define HFFHNJOACFI_HDNDBJHOHFB_OFFSET UNITYSDK_OFFSET(0x7565F0)
#define HFFHNJOACFI_INBHADLHMDO_OFFSET UNITYSDK_OFFSET(0x754920)
#define HFFHNJOACFI_JKODHLAMCIL_OFFSET UNITYSDK_OFFSET(0x76FDA0)
#define HFFHNJOACFI_LHGFJAINIGI_OFFSET UNITYSDK_OFFSET(0x755D20)
#define HFFHNJOACFI_LNDAPBAHMPO_OFFSET UNITYSDK_OFFSET(0x755190)
#define HFFHNJOACFI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HFFHNJOACFI_TypeDefinitionIndex = 9273;

struct alignas(4) HFFHNJOACFI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFHNJOACFI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HFFHNJOACFI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFHNJOACFI_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::HFFHNJOACFI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HFFHNJOACFI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HFFHNJOACFI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* GOALIHGGJKP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFHNJOACFI_GOALIHGGJKP_OFFSET))(this);
	}

	::System::Int32 BBMDKGLKCAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFHNJOACFI_BBMDKGLKCAP_OFFSET))(this);
	}

	::System::String* EDEGECOPGKA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFHNJOACFI_EDEGECOPGKA_OFFSET))(this);
	}

	::System::Int32 LNDAPBAHMPO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFHNJOACFI_LNDAPBAHMPO_OFFSET))(this);
	}

	::System::Boolean JKODHLAMCIL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HFFHNJOACFI_JKODHLAMCIL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* BHKHBIKHNBO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFHNJOACFI_BHKHBIKHNBO_OFFSET))(this);
	}

	::System::Int32 HDNDBJHOHFB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFHNJOACFI_HDNDBJHOHFB_OFFSET))(this);
	}

	::System::Int32 LHGFJAINIGI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFHNJOACFI_LHGFJAINIGI_OFFSET))(this);
	}

	::System::Int32 BPPICPBKLOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFHNJOACFI_BPPICPBKLOH_OFFSET))(this);
	}

	::System::Int32 INBHADLHMDO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFHNJOACFI_INBHADLHMDO_OFFSET))(this);
	}
};
