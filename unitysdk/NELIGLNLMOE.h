#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NELIGLNLMOE_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NELIGLNLMOE_BEBBMPMIMDD_OFFSET UNITYSDK_OFFSET(0x754C20)
#define NELIGLNLMOE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NELIGLNLMOE_BIJEGFNHING_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define NELIGLNLMOE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NELIGLNLMOE_HGLIDNCHGHL_OFFSET UNITYSDK_OFFSET(0x754F10)
#define NELIGLNLMOE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x191170E0)
#define NELIGLNLMOE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NELIGLNLMOE_TypeDefinitionIndex = 15314;

struct alignas(4) NELIGLNLMOE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NELIGLNLMOE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NELIGLNLMOE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NELIGLNLMOE_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 BEBBMPMIMDD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NELIGLNLMOE_BEBBMPMIMDD_OFFSET))(this);
	}

	/*
	static ::NELIGLNLMOE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NELIGLNLMOE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NELIGLNLMOE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean BIJEGFNHING(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NELIGLNLMOE_BIJEGFNHING_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::NELIGLNLMOE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NELIGLNLMOE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NELIGLNLMOE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* HGLIDNCHGHL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NELIGLNLMOE_HGLIDNCHGHL_OFFSET))(this);
	}
};
