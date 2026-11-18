#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DMKKOEINFKF_AJFFCMNAIEN_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define DMKKOEINFKF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DMKKOEINFKF_BJPGOGDHLFK_OFFSET UNITYSDK_OFFSET(0x763D00)
#define DMKKOEINFKF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DMKKOEINFKF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19C085A0)
#define DMKKOEINFKF_PBFKHLEHIGG_OFFSET UNITYSDK_OFFSET(0x762060)
#define DMKKOEINFKF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DMKKOEINFKF_TypeDefinitionIndex = 9181;

struct alignas(4) DMKKOEINFKF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKKOEINFKF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DMKKOEINFKF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* AJFFCMNAIEN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKKOEINFKF_AJFFCMNAIEN_OFFSET))(this);
	}

	/*
	::DMKKOEINFKF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DMKKOEINFKF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DMKKOEINFKF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::DMKKOEINFKF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::String* MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DMKKOEINFKF(*)(::System::Int32, ::System::String*, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DMKKOEINFKF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Span_1_9011FAD97750D224<::System::Byte> BJPGOGDHLFK()
	{
		return ((::System::Span_1_9011FAD97750D224<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKKOEINFKF_BJPGOGDHLFK_OFFSET))(this);
	}

	::System::String* PBFKHLEHIGG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKKOEINFKF_PBFKHLEHIGG_OFFSET))(this);
	}
};
