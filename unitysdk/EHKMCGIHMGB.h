#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define EHKMCGIHMGB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EHKMCGIHMGB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EHKMCGIHMGB_BINPHNNFDKB_OFFSET UNITYSDK_OFFSET(0x754C20)
#define EHKMCGIHMGB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EHKMCGIHMGB_KOEEDKJHAPN_OFFSET UNITYSDK_OFFSET(0x754B50)
#define EHKMCGIHMGB_OLHLNKAIMPJ_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define EHKMCGIHMGB_PEOEBEBFIJO_OFFSET UNITYSDK_OFFSET(0x755D20)
#define EHKMCGIHMGB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EHKMCGIHMGB_TypeDefinitionIndex = 15396;

struct alignas(4) EHKMCGIHMGB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKMCGIHMGB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EHKMCGIHMGB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKMCGIHMGB_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::EHKMCGIHMGB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EHKMCGIHMGB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EHKMCGIHMGB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 PEOEBEBFIJO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKMCGIHMGB_PEOEBEBFIJO_OFFSET))(this);
	}

	::System::Int32 BINPHNNFDKB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKMCGIHMGB_BINPHNNFDKB_OFFSET))(this);
	}

	::System::Int32 KOEEDKJHAPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKMCGIHMGB_KOEEDKJHAPN_OFFSET))(this);
	}

	::System::Boolean OLHLNKAIMPJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + EHKMCGIHMGB_OLHLNKAIMPJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
