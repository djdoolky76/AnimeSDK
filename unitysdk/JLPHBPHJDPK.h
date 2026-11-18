#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define JLPHBPHJDPK_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JLPHBPHJDPK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JLPHBPHJDPK_CIOPAFNKBBA_OFFSET UNITYSDK_OFFSET(0x756B90)
#define JLPHBPHJDPK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JLPHBPHJDPK_NBPHDAIMNOB_OFFSET UNITYSDK_OFFSET(0x755C70)
#define JLPHBPHJDPK_PGGANLAMJOP_OFFSET UNITYSDK_OFFSET(0x754970)
#define JLPHBPHJDPK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JLPHBPHJDPK_TypeDefinitionIndex = 15356;

struct alignas(4) JLPHBPHJDPK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPHBPHJDPK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JLPHBPHJDPK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NBPHDAIMNOB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPHBPHJDPK_NBPHDAIMNOB_OFFSET))(this);
	}

	::System::Int32 PGGANLAMJOP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPHBPHJDPK_PGGANLAMJOP_OFFSET))(this);
	}

	/*
	::JLPHBPHJDPK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JLPHBPHJDPK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JLPHBPHJDPK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 CIOPAFNKBBA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPHBPHJDPK_CIOPAFNKBBA_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPHBPHJDPK_ACOEONABOJL_OFFSET))(this);
	}
};
