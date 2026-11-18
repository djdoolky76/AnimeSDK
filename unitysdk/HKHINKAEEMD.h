#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define HKHINKAEEMD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HKHINKAEEMD_DDMABEIPNIL_OFFSET UNITYSDK_OFFSET(0x755D20)
#define HKHINKAEEMD_DGCJAPFOAND_OFFSET UNITYSDK_OFFSET(0x756B90)
#define HKHINKAEEMD_DKBKJGHCDDB_OFFSET UNITYSDK_OFFSET(0x754B50)
#define HKHINKAEEMD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HKHINKAEEMD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x15A8D250)
#define HKHINKAEEMD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HKHINKAEEMD_TypeDefinitionIndex = 11540;

struct alignas(4) HKHINKAEEMD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHINKAEEMD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKHINKAEEMD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 DKBKJGHCDDB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHINKAEEMD_DKBKJGHCDDB_OFFSET))(this);
	}

	::System::Int32 DDMABEIPNIL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHINKAEEMD_DDMABEIPNIL_OFFSET))(this);
	}

	/*
	static ::HKHINKAEEMD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HKHINKAEEMD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HKHINKAEEMD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 DGCJAPFOAND()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHINKAEEMD_DGCJAPFOAND_OFFSET))(this);
	}

	/*
	::HKHINKAEEMD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HKHINKAEEMD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKHINKAEEMD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
