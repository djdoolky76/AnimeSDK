#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JCPLFKNEJDE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JCPLFKNEJDE_GDLFEMDEOAI_OFFSET UNITYSDK_OFFSET(0x755D20)
#define JCPLFKNEJDE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JCPLFKNEJDE_IFOHJNHGHBK_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define JCPLFKNEJDE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x152F46F0)
#define JCPLFKNEJDE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JCPLFKNEJDE_TypeDefinitionIndex = 17261;

struct alignas(4) JCPLFKNEJDE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCPLFKNEJDE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCPLFKNEJDE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* IFOHJNHGHBK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCPLFKNEJDE_IFOHJNHGHBK_OFFSET))(this);
	}

	::System::Int32 GDLFEMDEOAI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCPLFKNEJDE_GDLFEMDEOAI_OFFSET))(this);
	}

	/*
	::JCPLFKNEJDE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JCPLFKNEJDE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCPLFKNEJDE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JCPLFKNEJDE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JCPLFKNEJDE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JCPLFKNEJDE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
