#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OFMAMDKPMFM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OFMAMDKPMFM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OFMAMDKPMFM_EILOAHBODGP_OFFSET UNITYSDK_OFFSET(0x754B50)
#define OFMAMDKPMFM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OFMAMDKPMFM_IFDDDJOMBOL_OFFSET UNITYSDK_OFFSET(0x755A00)
#define OFMAMDKPMFM_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x755D20)
#define OFMAMDKPMFM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OFMAMDKPMFM_TypeDefinitionIndex = 11225;

struct alignas(4) OFMAMDKPMFM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMAMDKPMFM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OFMAMDKPMFM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::OFMAMDKPMFM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OFMAMDKPMFM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OFMAMDKPMFM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMAMDKPMFM_LPFMNKEFPMM_OFFSET))(this);
	}

	::System::Int32 EILOAHBODGP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMAMDKPMFM_EILOAHBODGP_OFFSET))(this);
	}

	::System::String* IFDDDJOMBOL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMAMDKPMFM_IFDDDJOMBOL_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMAMDKPMFM_ACOEONABOJL_OFFSET))(this);
	}
};
