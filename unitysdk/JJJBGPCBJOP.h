#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define JJJBGPCBJOP_AEHKAIHLAGJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JJJBGPCBJOP_BBEEEGEKJNE_OFFSET UNITYSDK_OFFSET(0x754B50)
#define JJJBGPCBJOP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JJJBGPCBJOP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JJJBGPCBJOP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B13D650)
#define JJJBGPCBJOP_PDPKKHMMJOO_OFFSET UNITYSDK_OFFSET(0x755D20)
#define JJJBGPCBJOP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JJJBGPCBJOP_TypeDefinitionIndex = 14880;

struct alignas(4) JJJBGPCBJOP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJJBGPCBJOP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JJJBGPCBJOP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 AEHKAIHLAGJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJJBGPCBJOP_AEHKAIHLAGJ_OFFSET))(this);
	}

	/*
	::JJJBGPCBJOP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JJJBGPCBJOP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JJJBGPCBJOP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JJJBGPCBJOP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JJJBGPCBJOP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JJJBGPCBJOP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 BBEEEGEKJNE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJJBGPCBJOP_BBEEEGEKJNE_OFFSET))(this);
	}

	::System::Int32 PDPKKHMMJOO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJJBGPCBJOP_PDPKKHMMJOO_OFFSET))(this);
	}
};
