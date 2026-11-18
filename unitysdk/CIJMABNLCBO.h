#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CIJMABNLCBO_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CIJMABNLCBO_AILPDKAHANE_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define CIJMABNLCBO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CIJMABNLCBO_DFAOEOEDFLH_OFFSET UNITYSDK_OFFSET(0x754F10)
#define CIJMABNLCBO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CIJMABNLCBO_LJNBIAFBMIL_OFFSET UNITYSDK_OFFSET(0x756B90)
#define CIJMABNLCBO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1776E470)
#define CIJMABNLCBO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CIJMABNLCBO_TypeDefinitionIndex = 9408;

struct alignas(4) CIJMABNLCBO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIJMABNLCBO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CIJMABNLCBO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIJMABNLCBO_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* AILPDKAHANE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIJMABNLCBO_AILPDKAHANE_OFFSET))(this);
	}

	/*
	static ::CIJMABNLCBO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CIJMABNLCBO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CIJMABNLCBO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* DFAOEOEDFLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIJMABNLCBO_DFAOEOEDFLH_OFFSET))(this);
	}

	::System::Int32 LJNBIAFBMIL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIJMABNLCBO_LJNBIAFBMIL_OFFSET))(this);
	}

	/*
	::CIJMABNLCBO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CIJMABNLCBO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CIJMABNLCBO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
