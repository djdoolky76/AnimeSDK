#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LHNFFAPKBND_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LHNFFAPKBND_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LHNFFAPKBND_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LHNFFAPKBND_HAECLLIGKED_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define LHNFFAPKBND_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B7EFC20)
#define LHNFFAPKBND___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LHNFFAPKBND_TypeDefinitionIndex = 10472;

struct alignas(4) LHNFFAPKBND
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHNFFAPKBND_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LHNFFAPKBND___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::LHNFFAPKBND BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LHNFFAPKBND(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LHNFFAPKBND_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::LHNFFAPKBND OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LHNFFAPKBND(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LHNFFAPKBND_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHNFFAPKBND_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* HAECLLIGKED()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHNFFAPKBND_HAECLLIGKED_OFFSET))(this);
	}
};
