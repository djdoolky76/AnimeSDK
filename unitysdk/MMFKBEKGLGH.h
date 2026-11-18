#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define MMFKBEKGLGH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MMFKBEKGLGH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MMFKBEKGLGH_KDGGGNKFLOE_OFFSET UNITYSDK_OFFSET(0x754B50)
#define MMFKBEKGLGH_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MMFKBEKGLGH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1CCE48D0)
#define MMFKBEKGLGH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MMFKBEKGLGH_TypeDefinitionIndex = 12695;

struct alignas(4) MMFKBEKGLGH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKBEKGLGH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMFKBEKGLGH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 KDGGGNKFLOE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKBEKGLGH_KDGGGNKFLOE_OFFSET))(this);
	}

	/*
	static ::MMFKBEKGLGH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MMFKBEKGLGH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MMFKBEKGLGH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::MMFKBEKGLGH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MMFKBEKGLGH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMFKBEKGLGH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFKBEKGLGH_NFKFHJBEPGD_OFFSET))(this);
	}
};
