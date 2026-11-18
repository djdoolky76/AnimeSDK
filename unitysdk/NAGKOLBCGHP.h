#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NAGKOLBCGHP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NAGKOLBCGHP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NAGKOLBCGHP_LDHNCAHIDNL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NAGKOLBCGHP_NOONPKCMIGE_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define NAGKOLBCGHP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19113F20)
#define NAGKOLBCGHP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NAGKOLBCGHP_TypeDefinitionIndex = 17037;

struct alignas(4) NAGKOLBCGHP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGKOLBCGHP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NAGKOLBCGHP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* NOONPKCMIGE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGKOLBCGHP_NOONPKCMIGE_OFFSET))(this);
	}

	/*
	::NAGKOLBCGHP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NAGKOLBCGHP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NAGKOLBCGHP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 LDHNCAHIDNL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGKOLBCGHP_LDHNCAHIDNL_OFFSET))(this);
	}

	/*
	static ::NAGKOLBCGHP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NAGKOLBCGHP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NAGKOLBCGHP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
