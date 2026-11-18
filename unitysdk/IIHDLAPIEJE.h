#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IFMDDIOEJGI.h"

namespace FlatBuffers { class ByteBuffer; }

#define IIHDLAPIEJE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IIHDLAPIEJE_GDODEOOCOGO_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define IIHDLAPIEJE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IIHDLAPIEJE_MMOFNJJPBDP_OFFSET UNITYSDK_OFFSET(0x779A20)
#define IIHDLAPIEJE_NLAIFNFGGMA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IIHDLAPIEJE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17483820)
#define IIHDLAPIEJE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IIHDLAPIEJE_TypeDefinitionIndex = 10555;

struct alignas(4) IIHDLAPIEJE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIHDLAPIEJE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IIHDLAPIEJE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::IIHDLAPIEJE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IIHDLAPIEJE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IIHDLAPIEJE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::IIHDLAPIEJE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IIHDLAPIEJE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IIHDLAPIEJE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NLAIFNFGGMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIHDLAPIEJE_NLAIFNFGGMA_OFFSET))(this);
	}

	::System::Boolean MMOFNJJPBDP(::System::Int32 HPMEONKHFGG, ::IFMDDIOEJGI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IFMDDIOEJGI&))((::PBYTE)hIl2Cpp + IIHDLAPIEJE_MMOFNJJPBDP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GDODEOOCOGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIHDLAPIEJE_GDODEOOCOGO_OFFSET))(this);
	}
};
