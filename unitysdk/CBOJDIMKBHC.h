#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define CBOJDIMKBHC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CBOJDIMKBHC_DJKAFMIPINL_OFFSET UNITYSDK_OFFSET(0x77A7A0)
#define CBOJDIMKBHC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CBOJDIMKBHC_NEHBKFIFDOC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CBOJDIMKBHC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x187834A0)
#define CBOJDIMKBHC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CBOJDIMKBHC_TypeDefinitionIndex = 16895;

struct alignas(4) CBOJDIMKBHC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBOJDIMKBHC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CBOJDIMKBHC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::UInt64 DJKAFMIPINL()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CBOJDIMKBHC_DJKAFMIPINL_OFFSET))(this);
	}

	/*
	::CBOJDIMKBHC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CBOJDIMKBHC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CBOJDIMKBHC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NEHBKFIFDOC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBOJDIMKBHC_NEHBKFIFDOC_OFFSET))(this);
	}

	/*
	static ::CBOJDIMKBHC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CBOJDIMKBHC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CBOJDIMKBHC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
