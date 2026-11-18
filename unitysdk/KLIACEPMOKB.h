#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KLIACEPMOKB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KLIACEPMOKB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KLIACEPMOKB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KLIACEPMOKB_HCCNJNBJIAO_OFFSET UNITYSDK_OFFSET(0x757290)
#define KLIACEPMOKB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B6444F0)
#define KLIACEPMOKB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KLIACEPMOKB_TypeDefinitionIndex = 15975;

struct alignas(4) KLIACEPMOKB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIACEPMOKB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KLIACEPMOKB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::KLIACEPMOKB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KLIACEPMOKB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KLIACEPMOKB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* HCCNJNBJIAO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIACEPMOKB_HCCNJNBJIAO_OFFSET))(this);
	}

	/*
	static ::KLIACEPMOKB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KLIACEPMOKB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KLIACEPMOKB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIACEPMOKB_ACOEONABOJL_OFFSET))(this);
	}
};
