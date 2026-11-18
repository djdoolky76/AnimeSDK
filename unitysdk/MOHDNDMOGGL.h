#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MOHDNDMOGGL_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MOHDNDMOGGL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MOHDNDMOGGL_GAPCNGIABLO_OFFSET UNITYSDK_OFFSET(0x754920)
#define MOHDNDMOGGL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MOHDNDMOGGL_HDAGGDKMDAI_OFFSET UNITYSDK_OFFSET(0x754F10)
#define MOHDNDMOGGL_NGKOPBCHFOP_OFFSET UNITYSDK_OFFSET(0x755A00)
#define MOHDNDMOGGL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BF65FF0)
#define MOHDNDMOGGL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MOHDNDMOGGL_TypeDefinitionIndex = 13898;

struct alignas(4) MOHDNDMOGGL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOHDNDMOGGL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MOHDNDMOGGL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GAPCNGIABLO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOHDNDMOGGL_GAPCNGIABLO_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOHDNDMOGGL_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* NGKOPBCHFOP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOHDNDMOGGL_NGKOPBCHFOP_OFFSET))(this);
	}

	/*
	::MOHDNDMOGGL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MOHDNDMOGGL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MOHDNDMOGGL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MOHDNDMOGGL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MOHDNDMOGGL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOHDNDMOGGL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* HDAGGDKMDAI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOHDNDMOGGL_HDAGGDKMDAI_OFFSET))(this);
	}
};
