#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define DDHLKFJCNLB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DDHLKFJCNLB_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DDHLKFJCNLB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DDHLKFJCNLB_KNPALHLPPGP_OFFSET UNITYSDK_OFFSET(0x755D20)
#define DDHLKFJCNLB_LHCDCDOMCHC_OFFSET UNITYSDK_OFFSET(0x756B90)
#define DDHLKFJCNLB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1579C9B0)
#define DDHLKFJCNLB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DDHLKFJCNLB_TypeDefinitionIndex = 10971;

struct alignas(4) DDHLKFJCNLB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHLKFJCNLB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DDHLKFJCNLB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LHCDCDOMCHC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHLKFJCNLB_LHCDCDOMCHC_OFFSET))(this);
	}

	::System::Int32 KNPALHLPPGP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHLKFJCNLB_KNPALHLPPGP_OFFSET))(this);
	}

	/*
	static ::DDHLKFJCNLB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DDHLKFJCNLB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DDHLKFJCNLB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHLKFJCNLB_DNKLBHKEDEM_OFFSET))(this);
	}

	/*
	::DDHLKFJCNLB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DDHLKFJCNLB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DDHLKFJCNLB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
