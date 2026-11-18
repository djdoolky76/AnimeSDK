#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JOGKPLDAPMN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JOGKPLDAPMN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JOGKPLDAPMN_IECFOJODPHL_OFFSET UNITYSDK_OFFSET(0x754F10)
#define JOGKPLDAPMN_MGEOBCHPJCF_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JOGKPLDAPMN_MKELBHKBKDC_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define JOGKPLDAPMN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1611DD10)
#define JOGKPLDAPMN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JOGKPLDAPMN_TypeDefinitionIndex = 13594;

struct alignas(4) JOGKPLDAPMN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGKPLDAPMN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JOGKPLDAPMN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* MKELBHKBKDC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGKPLDAPMN_MKELBHKBKDC_OFFSET))(this);
	}

	::System::String* IECFOJODPHL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGKPLDAPMN_IECFOJODPHL_OFFSET))(this);
	}

	/*
	::JOGKPLDAPMN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JOGKPLDAPMN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JOGKPLDAPMN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 MGEOBCHPJCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGKPLDAPMN_MGEOBCHPJCF_OFFSET))(this);
	}

	/*
	static ::JOGKPLDAPMN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JOGKPLDAPMN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JOGKPLDAPMN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
