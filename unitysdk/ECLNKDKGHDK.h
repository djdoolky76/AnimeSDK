#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define ECLNKDKGHDK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ECLNKDKGHDK_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ECLNKDKGHDK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ECLNKDKGHDK_MHBFGFOCIBN_OFFSET UNITYSDK_OFFSET(0x755D20)
#define ECLNKDKGHDK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x187A3FE0)
#define ECLNKDKGHDK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ECLNKDKGHDK_TypeDefinitionIndex = 16034;

struct alignas(4) ECLNKDKGHDK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLNKDKGHDK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ECLNKDKGHDK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::ECLNKDKGHDK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ECLNKDKGHDK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ECLNKDKGHDK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 MHBFGFOCIBN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLNKDKGHDK_MHBFGFOCIBN_OFFSET))(this);
	}

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLNKDKGHDK_DNKLBHKEDEM_OFFSET))(this);
	}

	/*
	static ::ECLNKDKGHDK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::ECLNKDKGHDK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + ECLNKDKGHDK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
