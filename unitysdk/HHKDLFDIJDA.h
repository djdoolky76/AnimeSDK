#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define HHKDLFDIJDA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HHKDLFDIJDA_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x755D20)
#define HHKDLFDIJDA_FKAFEAKOIHP_OFFSET UNITYSDK_OFFSET(0x756360)
#define HHKDLFDIJDA_FPKLHKBFPJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HHKDLFDIJDA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HHKDLFDIJDA_KBIBCHBAKJL_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define HHKDLFDIJDA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19532250)
#define HHKDLFDIJDA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HHKDLFDIJDA_TypeDefinitionIndex = 13669;

struct alignas(4) HHKDLFDIJDA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHKDLFDIJDA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHKDLFDIJDA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHKDLFDIJDA_DNKLBHKEDEM_OFFSET))(this);
	}

	/*
	static ::HHKDLFDIJDA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HHKDLFDIJDA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HHKDLFDIJDA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::HHKDLFDIJDA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HHKDLFDIJDA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HHKDLFDIJDA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean FKAFEAKOIHP(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HHKDLFDIJDA_FKAFEAKOIHP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 FPKLHKBFPJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHKDLFDIJDA_FPKLHKBFPJL_OFFSET))(this);
	}

	::System::Int32 KBIBCHBAKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHKDLFDIJDA_KBIBCHBAKJL_OFFSET))(this);
	}
};
