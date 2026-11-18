#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OODNKFDCMPE_ALNCMCCJEBI_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define OODNKFDCMPE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OODNKFDCMPE_BHOCGBENING_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OODNKFDCMPE_CNHOKELPBBD_OFFSET UNITYSDK_OFFSET(0x755A00)
#define OODNKFDCMPE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OODNKFDCMPE_LFJJJKJAJKN_OFFSET UNITYSDK_OFFSET(0x754B50)
#define OODNKFDCMPE_NEMPHEDBMBO_OFFSET UNITYSDK_OFFSET(0x8093C0)
#define OODNKFDCMPE_OOHPMDCOIGL_OFFSET UNITYSDK_OFFSET(0x755D20)
#define OODNKFDCMPE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OODNKFDCMPE_TypeDefinitionIndex = 12876;

struct alignas(4) OODNKFDCMPE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OODNKFDCMPE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OODNKFDCMPE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::UInt64 NEMPHEDBMBO()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + OODNKFDCMPE_NEMPHEDBMBO_OFFSET))(this);
	}

	::System::Int32 BHOCGBENING()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OODNKFDCMPE_BHOCGBENING_OFFSET))(this);
	}

	::System::String* ALNCMCCJEBI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OODNKFDCMPE_ALNCMCCJEBI_OFFSET))(this);
	}

	::System::Int32 OOHPMDCOIGL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OODNKFDCMPE_OOHPMDCOIGL_OFFSET))(this);
	}

	::System::String* CNHOKELPBBD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OODNKFDCMPE_CNHOKELPBBD_OFFSET))(this);
	}

	::System::Int32 LFJJJKJAJKN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OODNKFDCMPE_LFJJJKJAJKN_OFFSET))(this);
	}

	/*
	::OODNKFDCMPE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OODNKFDCMPE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OODNKFDCMPE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
