#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MPDADFHJKGO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MPDADFHJKGO_CEDKJOIDDEL_OFFSET UNITYSDK_OFFSET(0x756B90)
#define MPDADFHJKGO_CPECHIIBNIK_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define MPDADFHJKGO_DBJFBNHLJAO_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MPDADFHJKGO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MPDADFHJKGO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1C08F8D0)
#define MPDADFHJKGO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MPDADFHJKGO_TypeDefinitionIndex = 9844;

struct alignas(4) MPDADFHJKGO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDADFHJKGO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPDADFHJKGO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MPDADFHJKGO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MPDADFHJKGO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MPDADFHJKGO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 DBJFBNHLJAO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDADFHJKGO_DBJFBNHLJAO_OFFSET))(this);
	}

	::System::Int32 CEDKJOIDDEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDADFHJKGO_CEDKJOIDDEL_OFFSET))(this);
	}

	/*
	::MPDADFHJKGO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MPDADFHJKGO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPDADFHJKGO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* CPECHIIBNIK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDADFHJKGO_CPECHIIBNIK_OFFSET))(this);
	}
};
