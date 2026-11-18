#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EDHBODIIKGH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EDHBODIIKGH_COGLGAOMCAI_OFFSET UNITYSDK_OFFSET(0x754F10)
#define EDHBODIIKGH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EDHBODIIKGH_KFIHMFHJBIJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EDHBODIIKGH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x187A5060)
#define EDHBODIIKGH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EDHBODIIKGH_TypeDefinitionIndex = 10457;

struct alignas(4) EDHBODIIKGH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHBODIIKGH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EDHBODIIKGH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::EDHBODIIKGH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EDHBODIIKGH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EDHBODIIKGH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* COGLGAOMCAI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHBODIIKGH_COGLGAOMCAI_OFFSET))(this);
	}

	/*
	::EDHBODIIKGH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EDHBODIIKGH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EDHBODIIKGH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 KFIHMFHJBIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHBODIIKGH_KFIHMFHJBIJ_OFFSET))(this);
	}
};
