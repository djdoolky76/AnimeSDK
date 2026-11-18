#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define ICCNICCBNHF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ICCNICCBNHF_DHNMMOMLHEI_OFFSET UNITYSDK_OFFSET(0x756B10)
#define ICCNICCBNHF_FLGOGIMNEMK_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ICCNICCBNHF_FLOFMAKBJMD_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define ICCNICCBNHF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ICCNICCBNHF_JENLKGPMNKB_OFFSET UNITYSDK_OFFSET(0x756D50)
#define ICCNICCBNHF_NGJDIOJDLBE_OFFSET UNITYSDK_OFFSET(0x755A00)
#define ICCNICCBNHF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x15A93910)
#define ICCNICCBNHF_PHMJDAHAGNP_OFFSET UNITYSDK_OFFSET(0x754F10)
#define ICCNICCBNHF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ICCNICCBNHF_TypeDefinitionIndex = 9773;

struct alignas(4) ICCNICCBNHF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCNICCBNHF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ICCNICCBNHF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* PHMJDAHAGNP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCNICCBNHF_PHMJDAHAGNP_OFFSET))(this);
	}

	::System::Int32 FLGOGIMNEMK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCNICCBNHF_FLGOGIMNEMK_OFFSET))(this);
	}

	::System::String* NGJDIOJDLBE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCNICCBNHF_NGJDIOJDLBE_OFFSET))(this);
	}

	::System::String* FLOFMAKBJMD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCNICCBNHF_FLOFMAKBJMD_OFFSET))(this);
	}

	/*
	static ::ICCNICCBNHF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::ICCNICCBNHF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + ICCNICCBNHF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* JENLKGPMNKB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCNICCBNHF_JENLKGPMNKB_OFFSET))(this);
	}

	::System::String* DHNMMOMLHEI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCNICCBNHF_DHNMMOMLHEI_OFFSET))(this);
	}

	/*
	::ICCNICCBNHF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ICCNICCBNHF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ICCNICCBNHF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
