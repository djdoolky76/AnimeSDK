#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define PINADEBBEKC_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PINADEBBEKC_AJMJLDGJLNL_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define PINADEBBEKC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PINADEBBEKC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PINADEBBEKC_GPFIKDIIKIL_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define PINADEBBEKC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1EC85A00)
#define PINADEBBEKC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PINADEBBEKC_TypeDefinitionIndex = 12114;

struct alignas(4) PINADEBBEKC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PINADEBBEKC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PINADEBBEKC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean GPFIKDIIKIL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PINADEBBEKC_GPFIKDIIKIL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PINADEBBEKC_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::PINADEBBEKC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PINADEBBEKC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PINADEBBEKC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::PINADEBBEKC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PINADEBBEKC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PINADEBBEKC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 AJMJLDGJLNL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PINADEBBEKC_AJMJLDGJLNL_OFFSET))(this);
	}
};
