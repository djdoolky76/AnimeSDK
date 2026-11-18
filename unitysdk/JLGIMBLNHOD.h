#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IKOPEHLPKNG.h"

namespace FlatBuffers { class ByteBuffer; }

#define JLGIMBLNHOD_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JLGIMBLNHOD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JLGIMBLNHOD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JLGIMBLNHOD_HIOGEDIKHFE_OFFSET UNITYSDK_OFFSET(0x761240)
#define JLGIMBLNHOD_ODIGIGGNAND_OFFSET UNITYSDK_OFFSET(0x7D4320)
#define JLGIMBLNHOD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JLGIMBLNHOD_TypeDefinitionIndex = 16609;

struct alignas(4) JLGIMBLNHOD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLGIMBLNHOD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JLGIMBLNHOD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLGIMBLNHOD_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::JLGIMBLNHOD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JLGIMBLNHOD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JLGIMBLNHOD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 HIOGEDIKHFE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLGIMBLNHOD_HIOGEDIKHFE_OFFSET))(this);
	}

	::System::Boolean ODIGIGGNAND(::System::Int32 HPMEONKHFGG, ::IKOPEHLPKNG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IKOPEHLPKNG&))((::PBYTE)hIl2Cpp + JLGIMBLNHOD_ODIGIGGNAND_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
