#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MKIKENNLLLE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MKIKENNLLLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MKIKENNLLLE_INKFFFABICA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MKIKENNLLLE_OAEINDCMELP_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define MKIKENNLLLE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1C17E9F0)
#define MKIKENNLLLE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MKIKENNLLLE_TypeDefinitionIndex = 16911;

struct alignas(4) MKIKENNLLLE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKIKENNLLLE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKIKENNLLLE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* OAEINDCMELP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKIKENNLLLE_OAEINDCMELP_OFFSET))(this);
	}

	::System::Int32 INKFFFABICA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKIKENNLLLE_INKFFFABICA_OFFSET))(this);
	}

	/*
	::MKIKENNLLLE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MKIKENNLLLE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKIKENNLLLE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MKIKENNLLLE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MKIKENNLLLE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MKIKENNLLLE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
