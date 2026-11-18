#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BMOFEMCCJFE_ABNJABLFOGN_OFFSET UNITYSDK_OFFSET(0x756B90)
#define BMOFEMCCJFE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BMOFEMCCJFE_DEJGHCDJMDO_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BMOFEMCCJFE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BMOFEMCCJFE_KLPGMJMEFLO_OFFSET UNITYSDK_OFFSET(0x754F10)
#define BMOFEMCCJFE_NIFCDDGDILA_OFFSET UNITYSDK_OFFSET(0x754B50)
#define BMOFEMCCJFE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BMOFEMCCJFE_TypeDefinitionIndex = 14819;

struct alignas(4) BMOFEMCCJFE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOFEMCCJFE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BMOFEMCCJFE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ABNJABLFOGN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOFEMCCJFE_ABNJABLFOGN_OFFSET))(this);
	}

	::System::String* KLPGMJMEFLO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOFEMCCJFE_KLPGMJMEFLO_OFFSET))(this);
	}

	/*
	::BMOFEMCCJFE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BMOFEMCCJFE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BMOFEMCCJFE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NIFCDDGDILA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOFEMCCJFE_NIFCDDGDILA_OFFSET))(this);
	}

	::System::Int32 DEJGHCDJMDO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOFEMCCJFE_DEJGHCDJMDO_OFFSET))(this);
	}
};
