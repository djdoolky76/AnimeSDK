#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define AOHADDBNNLL_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define AOHADDBNNLL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AOHADDBNNLL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AOHADDBNNLL_IABGBPBLFBK_OFFSET UNITYSDK_OFFSET(0x755D20)
#define AOHADDBNNLL_LOMMMCAOIFC_OFFSET UNITYSDK_OFFSET(0x754920)
#define AOHADDBNNLL_MBBJANLKBLC_OFFSET UNITYSDK_OFFSET(0x756B90)
#define AOHADDBNNLL_MFPMIFLLCAJ_OFFSET UNITYSDK_OFFSET(0x754B50)
#define AOHADDBNNLL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AOHADDBNNLL_TypeDefinitionIndex = 9820;

struct alignas(4) AOHADDBNNLL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHADDBNNLL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AOHADDBNNLL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LOMMMCAOIFC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHADDBNNLL_LOMMMCAOIFC_OFFSET))(this);
	}

	::System::Int32 IABGBPBLFBK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHADDBNNLL_IABGBPBLFBK_OFFSET))(this);
	}

	::System::Int32 MFPMIFLLCAJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHADDBNNLL_MFPMIFLLCAJ_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHADDBNNLL_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 MBBJANLKBLC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHADDBNNLL_MBBJANLKBLC_OFFSET))(this);
	}

	/*
	::AOHADDBNNLL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AOHADDBNNLL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AOHADDBNNLL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
