#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define OBHDIGJCEOD_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OBHDIGJCEOD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OBHDIGJCEOD_CKMJPDHMPIH_OFFSET UNITYSDK_OFFSET(0x754B50)
#define OBHDIGJCEOD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OBHDIGJCEOD_KIOMCFAEPOF_OFFSET UNITYSDK_OFFSET(0x81E460)
#define OBHDIGJCEOD_KKNPFLMCIBD_OFFSET UNITYSDK_OFFSET(0x81E4C0)
#define OBHDIGJCEOD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BF76650)
#define OBHDIGJCEOD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OBHDIGJCEOD_TypeDefinitionIndex = 14574;

struct alignas(4) OBHDIGJCEOD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBHDIGJCEOD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBHDIGJCEOD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 KIOMCFAEPOF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBHDIGJCEOD_KIOMCFAEPOF_OFFSET))(this);
	}

	/*
	static ::OBHDIGJCEOD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OBHDIGJCEOD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OBHDIGJCEOD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 CKMJPDHMPIH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBHDIGJCEOD_CKMJPDHMPIH_OFFSET))(this);
	}

	::System::Boolean KKNPFLMCIBD(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OBHDIGJCEOD_KKNPFLMCIBD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::OBHDIGJCEOD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OBHDIGJCEOD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBHDIGJCEOD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBHDIGJCEOD_ACOEONABOJL_OFFSET))(this);
	}
};
