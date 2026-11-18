#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BIJIBHCFPKA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BIJIBHCFPKA_BONLNNDFPDH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BIJIBHCFPKA_EENLNNFKBOP_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define BIJIBHCFPKA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BIJIBHCFPKA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A579F50)
#define BIJIBHCFPKA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BIJIBHCFPKA_TypeDefinitionIndex = 10032;

struct alignas(4) BIJIBHCFPKA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJIBHCFPKA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BIJIBHCFPKA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 BONLNNDFPDH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJIBHCFPKA_BONLNNDFPDH_OFFSET))(this);
	}

	::System::String* EENLNNFKBOP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJIBHCFPKA_EENLNNFKBOP_OFFSET))(this);
	}

	/*
	static ::BIJIBHCFPKA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BIJIBHCFPKA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BIJIBHCFPKA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::BIJIBHCFPKA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BIJIBHCFPKA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BIJIBHCFPKA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
