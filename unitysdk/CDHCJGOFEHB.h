#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CDHCJGOFEHB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CDHCJGOFEHB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CDHCJGOFEHB_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x755A00)
#define CDHCJGOFEHB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CDHCJGOFEHB_HIHKBMCPIJH_OFFSET UNITYSDK_OFFSET(0x755D20)
#define CDHCJGOFEHB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19BF1CB0)
#define CDHCJGOFEHB_PGOPHHBCJCI_OFFSET UNITYSDK_OFFSET(0x754920)
#define CDHCJGOFEHB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CDHCJGOFEHB_TypeDefinitionIndex = 16311;

struct alignas(4) CDHCJGOFEHB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDHCJGOFEHB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDHCJGOFEHB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::CDHCJGOFEHB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CDHCJGOFEHB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CDHCJGOFEHB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDHCJGOFEHB_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 PGOPHHBCJCI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDHCJGOFEHB_PGOPHHBCJCI_OFFSET))(this);
	}

	/*
	::CDHCJGOFEHB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CDHCJGOFEHB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDHCJGOFEHB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDHCJGOFEHB_DECMGICKDLH_OFFSET))(this);
	}

	::System::Int32 HIHKBMCPIJH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDHCJGOFEHB_HIHKBMCPIJH_OFFSET))(this);
	}
};
