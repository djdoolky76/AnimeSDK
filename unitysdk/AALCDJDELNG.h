#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define AALCDJDELNG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AALCDJDELNG_GEEJBFJKMLD_OFFSET UNITYSDK_OFFSET(0x763D00)
#define AALCDJDELNG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AALCDJDELNG_IFOHJNHGHBK_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define AALCDJDELNG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17740E40)
#define AALCDJDELNG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AALCDJDELNG_TypeDefinitionIndex = 12220;

struct alignas(4) AALCDJDELNG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AALCDJDELNG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AALCDJDELNG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* IFOHJNHGHBK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AALCDJDELNG_IFOHJNHGHBK_OFFSET))(this);
	}

	/*
	static ::AALCDJDELNG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::String* MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::AALCDJDELNG(*)(::System::Int32, ::System::String*, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + AALCDJDELNG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::AALCDJDELNG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AALCDJDELNG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AALCDJDELNG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Span_1_9011FAD97750D224<::System::Byte> GEEJBFJKMLD()
	{
		return ((::System::Span_1_9011FAD97750D224<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + AALCDJDELNG_GEEJBFJKMLD_OFFSET))(this);
	}
};
