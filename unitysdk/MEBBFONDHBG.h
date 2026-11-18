#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define MEBBFONDHBG_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x754B50)
#define MEBBFONDHBG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MEBBFONDHBG_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x755D20)
#define MEBBFONDHBG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MEBBFONDHBG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1C177580)
#define MEBBFONDHBG_PHBKIDJMCIE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MEBBFONDHBG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MEBBFONDHBG_TypeDefinitionIndex = 13357;

struct alignas(4) MEBBFONDHBG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEBBFONDHBG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MEBBFONDHBG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 PHBKIDJMCIE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEBBFONDHBG_PHBKIDJMCIE_OFFSET))(this);
	}

	/*
	static ::MEBBFONDHBG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MEBBFONDHBG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MEBBFONDHBG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEBBFONDHBG_APCKPKCNFJE_OFFSET))(this);
	}

	/*
	::MEBBFONDHBG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MEBBFONDHBG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MEBBFONDHBG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEBBFONDHBG_BKNKCFDBLGH_OFFSET))(this);
	}
};
