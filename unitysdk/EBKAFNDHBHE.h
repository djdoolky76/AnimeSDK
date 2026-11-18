#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EBKAFNDHBHE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EBKAFNDHBHE_BPADCIMJKBE_OFFSET UNITYSDK_OFFSET(0x754F10)
#define EBKAFNDHBHE_CCHCFKBDNHH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EBKAFNDHBHE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EBKAFNDHBHE_IAFMEJABPMH_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define EBKAFNDHBHE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A1956D0)
#define EBKAFNDHBHE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EBKAFNDHBHE_TypeDefinitionIndex = 13729;

struct alignas(4) EBKAFNDHBHE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBKAFNDHBHE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBKAFNDHBHE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 CCHCFKBDNHH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBKAFNDHBHE_CCHCFKBDNHH_OFFSET))(this);
	}

	::System::String* BPADCIMJKBE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBKAFNDHBHE_BPADCIMJKBE_OFFSET))(this);
	}

	/*
	static ::EBKAFNDHBHE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EBKAFNDHBHE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EBKAFNDHBHE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* IAFMEJABPMH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBKAFNDHBHE_IAFMEJABPMH_OFFSET))(this);
	}

	/*
	::EBKAFNDHBHE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EBKAFNDHBHE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBKAFNDHBHE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
