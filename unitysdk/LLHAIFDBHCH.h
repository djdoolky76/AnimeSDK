#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LLHAIFDBHCH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LLHAIFDBHCH_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LLHAIFDBHCH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LLHAIFDBHCH_NIOLACCPKHH_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define LLHAIFDBHCH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17FB6840)
#define LLHAIFDBHCH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LLHAIFDBHCH_TypeDefinitionIndex = 14048;

struct alignas(4) LLHAIFDBHCH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLHAIFDBHCH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LLHAIFDBHCH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLHAIFDBHCH_DNKLBHKEDEM_OFFSET))(this);
	}

	/*
	::LLHAIFDBHCH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LLHAIFDBHCH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LLHAIFDBHCH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::LLHAIFDBHCH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LLHAIFDBHCH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LLHAIFDBHCH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* NIOLACCPKHH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLHAIFDBHCH_NIOLACCPKHH_OFFSET))(this);
	}
};
