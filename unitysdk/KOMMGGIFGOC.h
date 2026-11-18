#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KOMMGGIFGOC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KOMMGGIFGOC_GEEJBFJKMLD_OFFSET UNITYSDK_OFFSET(0x80B270)
#define KOMMGGIFGOC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KOMMGGIFGOC_IFOHJNHGHBK_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define KOMMGGIFGOC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B2FADF0)
#define KOMMGGIFGOC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KOMMGGIFGOC_TypeDefinitionIndex = 12453;

struct alignas(4) KOMMGGIFGOC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOMMGGIFGOC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KOMMGGIFGOC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* IFOHJNHGHBK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOMMGGIFGOC_IFOHJNHGHBK_OFFSET))(this);
	}

	/*
	::KOMMGGIFGOC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KOMMGGIFGOC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KOMMGGIFGOC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::KOMMGGIFGOC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::String* MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KOMMGGIFGOC(*)(::System::Int32, ::System::String*, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KOMMGGIFGOC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Span_1_9011FAD97750D224<::System::Byte> GEEJBFJKMLD()
	{
		return ((::System::Span_1_9011FAD97750D224<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + KOMMGGIFGOC_GEEJBFJKMLD_OFFSET))(this);
	}
};
