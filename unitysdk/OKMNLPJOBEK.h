#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OKMNLPJOBEK_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OKMNLPJOBEK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OKMNLPJOBEK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OKMNLPJOBEK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17FE21C0)
#define OKMNLPJOBEK_PCJNBHIFMAJ_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define OKMNLPJOBEK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OKMNLPJOBEK_TypeDefinitionIndex = 11261;

struct alignas(4) OKMNLPJOBEK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMNLPJOBEK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OKMNLPJOBEK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::OKMNLPJOBEK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OKMNLPJOBEK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OKMNLPJOBEK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::OKMNLPJOBEK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OKMNLPJOBEK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OKMNLPJOBEK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMNLPJOBEK_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* PCJNBHIFMAJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMNLPJOBEK_PCJNBHIFMAJ_OFFSET))(this);
	}
};
