#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KHGNGKBEHCK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KHGNGKBEHCK_GEEJBFJKMLD_OFFSET UNITYSDK_OFFSET(0x763D00)
#define KHGNGKBEHCK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KHGNGKBEHCK_IFOHJNHGHBK_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define KHGNGKBEHCK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B505F30)
#define KHGNGKBEHCK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KHGNGKBEHCK_TypeDefinitionIndex = 10233;

struct alignas(4) KHGNGKBEHCK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHGNGKBEHCK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KHGNGKBEHCK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Span_1_9011FAD97750D224<::System::Byte> GEEJBFJKMLD()
	{
		return ((::System::Span_1_9011FAD97750D224<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + KHGNGKBEHCK_GEEJBFJKMLD_OFFSET))(this);
	}

	/*
	static ::KHGNGKBEHCK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::String* MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KHGNGKBEHCK(*)(::System::Int32, ::System::String*, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KHGNGKBEHCK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* IFOHJNHGHBK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHGNGKBEHCK_IFOHJNHGHBK_OFFSET))(this);
	}

	/*
	::KHGNGKBEHCK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KHGNGKBEHCK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KHGNGKBEHCK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
