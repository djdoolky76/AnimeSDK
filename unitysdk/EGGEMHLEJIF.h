#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define EGGEMHLEJIF_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EGGEMHLEJIF_AFIKPGHMNCI_OFFSET UNITYSDK_OFFSET(0x754920)
#define EGGEMHLEJIF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EGGEMHLEJIF_CLIKMGDGOGD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define EGGEMHLEJIF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EGGEMHLEJIF_LEFJCIGJOED_OFFSET UNITYSDK_OFFSET(0x755D20)
#define EGGEMHLEJIF_OKGKODNEICJ_OFFSET UNITYSDK_OFFSET(0x756B90)
#define EGGEMHLEJIF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EGGEMHLEJIF_TypeDefinitionIndex = 11947;

struct alignas(4) EGGEMHLEJIF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGEMHLEJIF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EGGEMHLEJIF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LEFJCIGJOED()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGEMHLEJIF_LEFJCIGJOED_OFFSET))(this);
	}

	/*
	::EGGEMHLEJIF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EGGEMHLEJIF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EGGEMHLEJIF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 CLIKMGDGOGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGEMHLEJIF_CLIKMGDGOGD_OFFSET))(this);
	}

	::System::Int32 AFIKPGHMNCI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGEMHLEJIF_AFIKPGHMNCI_OFFSET))(this);
	}

	::System::Int32 OKGKODNEICJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGEMHLEJIF_OKGKODNEICJ_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGEMHLEJIF_ACOEONABOJL_OFFSET))(this);
	}
};
