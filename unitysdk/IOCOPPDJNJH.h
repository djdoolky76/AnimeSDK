#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define IOCOPPDJNJH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IOCOPPDJNJH_BONLNNDFPDH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IOCOPPDJNJH_EENLNNFKBOP_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define IOCOPPDJNJH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IOCOPPDJNJH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B62C790)
#define IOCOPPDJNJH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IOCOPPDJNJH_TypeDefinitionIndex = 14681;

struct alignas(4) IOCOPPDJNJH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOCOPPDJNJH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IOCOPPDJNJH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 BONLNNDFPDH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOCOPPDJNJH_BONLNNDFPDH_OFFSET))(this);
	}

	/*
	static ::IOCOPPDJNJH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IOCOPPDJNJH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IOCOPPDJNJH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* EENLNNFKBOP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOCOPPDJNJH_EENLNNFKBOP_OFFSET))(this);
	}

	/*
	::IOCOPPDJNJH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IOCOPPDJNJH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IOCOPPDJNJH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
