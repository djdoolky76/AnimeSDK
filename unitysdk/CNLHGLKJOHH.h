#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CNLHGLKJOHH_BDABOFOIAGH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CNLHGLKJOHH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CNLHGLKJOHH_FCJJJPPEOFC_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define CNLHGLKJOHH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CNLHGLKJOHH_IGDPAPBJPKN_OFFSET UNITYSDK_OFFSET(0x755D20)
#define CNLHGLKJOHH_KKJBOOCKLJE_OFFSET UNITYSDK_OFFSET(0x755A00)
#define CNLHGLKJOHH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x195061B0)
#define CNLHGLKJOHH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CNLHGLKJOHH_TypeDefinitionIndex = 17654;

struct alignas(4) CNLHGLKJOHH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLHGLKJOHH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CNLHGLKJOHH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::CNLHGLKJOHH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CNLHGLKJOHH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CNLHGLKJOHH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::CNLHGLKJOHH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CNLHGLKJOHH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CNLHGLKJOHH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 IGDPAPBJPKN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLHGLKJOHH_IGDPAPBJPKN_OFFSET))(this);
	}

	::System::String* KKJBOOCKLJE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLHGLKJOHH_KKJBOOCKLJE_OFFSET))(this);
	}

	::System::String* FCJJJPPEOFC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLHGLKJOHH_FCJJJPPEOFC_OFFSET))(this);
	}

	::System::Int32 BDABOFOIAGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLHGLKJOHH_BDABOFOIAGH_OFFSET))(this);
	}
};
