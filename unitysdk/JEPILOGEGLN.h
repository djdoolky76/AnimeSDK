#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JEPILOGEGLN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JEPILOGEGLN_BJPGOGDHLFK_OFFSET UNITYSDK_OFFSET(0x763D00)
#define JEPILOGEGLN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JEPILOGEGLN_NLNJPCCEEID_OFFSET UNITYSDK_OFFSET(0x7B21E0)
#define JEPILOGEGLN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B4F4BF0)
#define JEPILOGEGLN_PBFKHLEHIGG_OFFSET UNITYSDK_OFFSET(0x762060)
#define JEPILOGEGLN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JEPILOGEGLN_TypeDefinitionIndex = 11082;

struct alignas(4) JEPILOGEGLN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEPILOGEGLN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JEPILOGEGLN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Span_1_9011FAD97750D224<::System::Byte> BJPGOGDHLFK()
	{
		return ((::System::Span_1_9011FAD97750D224<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + JEPILOGEGLN_BJPGOGDHLFK_OFFSET))(this);
	}

	::System::String* PBFKHLEHIGG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEPILOGEGLN_PBFKHLEHIGG_OFFSET))(this);
	}

	/*
	::JEPILOGEGLN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JEPILOGEGLN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JEPILOGEGLN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JEPILOGEGLN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::String* MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JEPILOGEGLN(*)(::System::Int32, ::System::String*, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JEPILOGEGLN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::UInt64 NLNJPCCEEID()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + JEPILOGEGLN_NLNJPCCEEID_OFFSET))(this);
	}
};
