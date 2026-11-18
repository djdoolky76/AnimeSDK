#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DJJEBNDANNG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DJJEBNDANNG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DJJEBNDANNG_KACFKIIMCAO_OFFSET UNITYSDK_OFFSET(0x755D20)
#define DJJEBNDANNG_LDFEHFHHICI_OFFSET UNITYSDK_OFFSET(0x7FA2A0)
#define DJJEBNDANNG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A5551E0)
#define DJJEBNDANNG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DJJEBNDANNG_TypeDefinitionIndex = 12554;

struct alignas(4) DJJEBNDANNG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJEBNDANNG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DJJEBNDANNG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::DJJEBNDANNG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DJJEBNDANNG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DJJEBNDANNG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::DJJEBNDANNG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::String* MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DJJEBNDANNG(*)(::System::Int32, ::System::String*, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DJJEBNDANNG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 KACFKIIMCAO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJEBNDANNG_KACFKIIMCAO_OFFSET))(this);
	}

	::System::Span_1_9011FAD97750D224<::System::Byte> LDFEHFHHICI()
	{
		return ((::System::Span_1_9011FAD97750D224<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJEBNDANNG_LDFEHFHHICI_OFFSET))(this);
	}
};
