#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define ANCEJAPLCGG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ANCEJAPLCGG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ANCEJAPLCGG_GKBDBJMJHBB_OFFSET UNITYSDK_OFFSET(0x754970)
#define ANCEJAPLCGG_IGKFAFBGBAP_OFFSET UNITYSDK_OFFSET(0x755C70)
#define ANCEJAPLCGG_MEKEHBEEBPO_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ANCEJAPLCGG_NLAIFNFGGMA_OFFSET UNITYSDK_OFFSET(0x754920)
#define ANCEJAPLCGG_PHALDLDFONO_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define ANCEJAPLCGG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ANCEJAPLCGG_TypeDefinitionIndex = 15373;

struct alignas(4) ANCEJAPLCGG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCEJAPLCGG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ANCEJAPLCGG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 MEKEHBEEBPO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCEJAPLCGG_MEKEHBEEBPO_OFFSET))(this);
	}

	::System::Int32 IGKFAFBGBAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCEJAPLCGG_IGKFAFBGBAP_OFFSET))(this);
	}

	::System::String* PHALDLDFONO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCEJAPLCGG_PHALDLDFONO_OFFSET))(this);
	}

	/*
	::ANCEJAPLCGG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ANCEJAPLCGG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ANCEJAPLCGG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NLAIFNFGGMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCEJAPLCGG_NLAIFNFGGMA_OFFSET))(this);
	}

	::System::Int32 GKBDBJMJHBB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCEJAPLCGG_GKBDBJMJHBB_OFFSET))(this);
	}
};
