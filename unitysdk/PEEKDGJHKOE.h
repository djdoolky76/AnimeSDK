#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define PEEKDGJHKOE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PEEKDGJHKOE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PEEKDGJHKOE_IDFBJBKBOFP_OFFSET UNITYSDK_OFFSET(0x754B50)
#define PEEKDGJHKOE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1AD96650)
#define PEEKDGJHKOE_PLHGJKEGMIM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PEEKDGJHKOE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PEEKDGJHKOE_TypeDefinitionIndex = 9690;

struct alignas(4) PEEKDGJHKOE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEKDGJHKOE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PEEKDGJHKOE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 PLHGJKEGMIM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEKDGJHKOE_PLHGJKEGMIM_OFFSET))(this);
	}

	::System::Int32 IDFBJBKBOFP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEKDGJHKOE_IDFBJBKBOFP_OFFSET))(this);
	}

	/*
	static ::PEEKDGJHKOE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PEEKDGJHKOE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PEEKDGJHKOE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::PEEKDGJHKOE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PEEKDGJHKOE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PEEKDGJHKOE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
