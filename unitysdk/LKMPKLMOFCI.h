#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define LKMPKLMOFCI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LKMPKLMOFCI_ELOAKJLAGOH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LKMPKLMOFCI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LKMPKLMOFCI_IDINMHHOOOK_OFFSET UNITYSDK_OFFSET(0x755D20)
#define LKMPKLMOFCI_JLEGHNGEBOG_OFFSET UNITYSDK_OFFSET(0x754B50)
#define LKMPKLMOFCI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LKMPKLMOFCI_TypeDefinitionIndex = 10389;

struct alignas(4) LKMPKLMOFCI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMPKLMOFCI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LKMPKLMOFCI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 JLEGHNGEBOG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMPKLMOFCI_JLEGHNGEBOG_OFFSET))(this);
	}

	/*
	::LKMPKLMOFCI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LKMPKLMOFCI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LKMPKLMOFCI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 IDINMHHOOOK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMPKLMOFCI_IDINMHHOOOK_OFFSET))(this);
	}

	::System::Int32 ELOAKJLAGOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMPKLMOFCI_ELOAKJLAGOH_OFFSET))(this);
	}
};
