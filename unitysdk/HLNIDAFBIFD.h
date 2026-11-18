#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HLNIDAFBIFD_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x755D20)
#define HLNIDAFBIFD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HLNIDAFBIFD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HLNIDAFBIFD_HIPIGIJHPDP_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define HLNIDAFBIFD_MBPFLIFKCFP_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HLNIDAFBIFD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A5CD3B0)
#define HLNIDAFBIFD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HLNIDAFBIFD_TypeDefinitionIndex = 9775;

struct alignas(4) HLNIDAFBIFD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNIDAFBIFD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HLNIDAFBIFD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HLNIDAFBIFD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HLNIDAFBIFD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HLNIDAFBIFD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 MBPFLIFKCFP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNIDAFBIFD_MBPFLIFKCFP_OFFSET))(this);
	}

	::System::String* HIPIGIJHPDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNIDAFBIFD_HIPIGIJHPDP_OFFSET))(this);
	}

	/*
	::HLNIDAFBIFD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HLNIDAFBIFD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HLNIDAFBIFD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNIDAFBIFD_APCKPKCNFJE_OFFSET))(this);
	}
};
