#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define OEBNGKDJJDO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OEBNGKDJJDO_FMLCNLPPFIK_OFFSET UNITYSDK_OFFSET(0x754920)
#define OEBNGKDJJDO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OEBNGKDJJDO_HGBBAECNJBA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define OEBNGKDJJDO_MLKFNKGDBPN_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OEBNGKDJJDO_MNBDOJDNKKK_OFFSET UNITYSDK_OFFSET(0x754B50)
#define OEBNGKDJJDO_NCFOKKLLMKN_OFFSET UNITYSDK_OFFSET(0x756B90)
#define OEBNGKDJJDO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OEBNGKDJJDO_TypeDefinitionIndex = 9950;

struct alignas(4) OEBNGKDJJDO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEBNGKDJJDO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OEBNGKDJJDO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::OEBNGKDJJDO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OEBNGKDJJDO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OEBNGKDJJDO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 MLKFNKGDBPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEBNGKDJJDO_MLKFNKGDBPN_OFFSET))(this);
	}

	::System::Int32 MNBDOJDNKKK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEBNGKDJJDO_MNBDOJDNKKK_OFFSET))(this);
	}

	::System::Int32 HGBBAECNJBA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEBNGKDJJDO_HGBBAECNJBA_OFFSET))(this);
	}

	::System::Int32 FMLCNLPPFIK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEBNGKDJJDO_FMLCNLPPFIK_OFFSET))(this);
	}

	::System::Int32 NCFOKKLLMKN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEBNGKDJJDO_NCFOKKLLMKN_OFFSET))(this);
	}
};
