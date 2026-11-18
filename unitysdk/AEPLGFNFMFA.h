#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define AEPLGFNFMFA_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define AEPLGFNFMFA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AEPLGFNFMFA_CMFNJOGIHOP_OFFSET UNITYSDK_OFFSET(0x754920)
#define AEPLGFNFMFA_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x756D50)
#define AEPLGFNFMFA_DGFAJDNHCIJ_OFFSET UNITYSDK_OFFSET(0x755D20)
#define AEPLGFNFMFA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AEPLGFNFMFA_GFMDDADFFNC_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define AEPLGFNFMFA_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x755C70)
#define AEPLGFNFMFA_MBBIMKJCKKN_OFFSET UNITYSDK_OFFSET(0x756B90)
#define AEPLGFNFMFA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AEPLGFNFMFA_TypeDefinitionIndex = 12294;

struct alignas(4) AEPLGFNFMFA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEPLGFNFMFA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AEPLGFNFMFA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 DGFAJDNHCIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEPLGFNFMFA_DGFAJDNHCIJ_OFFSET))(this);
	}

	::System::String* GFMDDADFFNC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEPLGFNFMFA_GFMDDADFFNC_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEPLGFNFMFA_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 MBBIMKJCKKN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEPLGFNFMFA_MBBIMKJCKKN_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEPLGFNFMFA_DECMGICKDLH_OFFSET))(this);
	}

	::System::Int32 CMFNJOGIHOP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEPLGFNFMFA_CMFNJOGIHOP_OFFSET))(this);
	}

	/*
	::AEPLGFNFMFA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AEPLGFNFMFA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AEPLGFNFMFA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEPLGFNFMFA_LNOBBAIGKJL_OFFSET))(this);
	}
};
