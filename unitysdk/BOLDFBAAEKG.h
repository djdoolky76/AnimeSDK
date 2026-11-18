#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BOLDFBAAEKG_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BOLDFBAAEKG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BOLDFBAAEKG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BOLDFBAAEKG_MLKBPMJEHFK_OFFSET UNITYSDK_OFFSET(0x754F10)
#define BOLDFBAAEKG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17A7F260)
#define BOLDFBAAEKG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BOLDFBAAEKG_TypeDefinitionIndex = 17247;

struct alignas(4) BOLDFBAAEKG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOLDFBAAEKG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BOLDFBAAEKG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::BOLDFBAAEKG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BOLDFBAAEKG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BOLDFBAAEKG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* MLKBPMJEHFK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOLDFBAAEKG_MLKBPMJEHFK_OFFSET))(this);
	}

	/*
	::BOLDFBAAEKG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BOLDFBAAEKG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BOLDFBAAEKG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOLDFBAAEKG_ACOEONABOJL_OFFSET))(this);
	}
};
