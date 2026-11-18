#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GKPHNFEGOLG_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GKPHNFEGOLG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GKPHNFEGOLG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GKPHNFEGOLG_GINEEIKHJOE_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define GKPHNFEGOLG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B1181D0)
#define GKPHNFEGOLG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GKPHNFEGOLG_TypeDefinitionIndex = 12235;

struct alignas(4) GKPHNFEGOLG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKPHNFEGOLG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GKPHNFEGOLG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKPHNFEGOLG_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::GKPHNFEGOLG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GKPHNFEGOLG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GKPHNFEGOLG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GKPHNFEGOLG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GKPHNFEGOLG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GKPHNFEGOLG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* GINEEIKHJOE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKPHNFEGOLG_GINEEIKHJOE_OFFSET))(this);
	}
};
