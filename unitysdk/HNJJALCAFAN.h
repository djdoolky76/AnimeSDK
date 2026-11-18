#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HNJJALCAFAN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HNJJALCAFAN_BELMIKIMNBG_OFFSET UNITYSDK_OFFSET(0x756D50)
#define HNJJALCAFAN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HNJJALCAFAN_DDBHCFJLIHG_OFFSET UNITYSDK_OFFSET(0x755D20)
#define HNJJALCAFAN_DIDMBFLIJFM_OFFSET UNITYSDK_OFFSET(0x755C70)
#define HNJJALCAFAN_FJHOCOBONNB_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define HNJJALCAFAN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HNJJALCAFAN_MAKFEEODOPE_OFFSET UNITYSDK_OFFSET(0x756B90)
#define HNJJALCAFAN_NFKMDPOGAHP_OFFSET UNITYSDK_OFFSET(0x761240)
#define HNJJALCAFAN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HNJJALCAFAN_TypeDefinitionIndex = 12121;

struct alignas(4) HNJJALCAFAN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJJALCAFAN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNJJALCAFAN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 MAKFEEODOPE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJJALCAFAN_MAKFEEODOPE_OFFSET))(this);
	}

	::System::Int32 NFKMDPOGAHP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJJALCAFAN_NFKMDPOGAHP_OFFSET))(this);
	}

	/*
	::HNJJALCAFAN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HNJJALCAFAN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNJJALCAFAN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 DDBHCFJLIHG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJJALCAFAN_DDBHCFJLIHG_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJJALCAFAN_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 DIDMBFLIJFM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJJALCAFAN_DIDMBFLIJFM_OFFSET))(this);
	}

	::System::String* BELMIKIMNBG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJJALCAFAN_BELMIKIMNBG_OFFSET))(this);
	}

	::System::Boolean FJHOCOBONNB(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HNJJALCAFAN_FJHOCOBONNB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
