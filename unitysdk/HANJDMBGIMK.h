#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define HANJDMBGIMK_BANIJECKJDP_OFFSET UNITYSDK_OFFSET(0x756720)
#define HANJDMBGIMK_BCDGKFJPJMI_OFFSET UNITYSDK_OFFSET(0x766790)
#define HANJDMBGIMK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HANJDMBGIMK_BPELMJLPBLF_OFFSET UNITYSDK_OFFSET(0x756B90)
#define HANJDMBGIMK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HANJDMBGIMK_IDMLBBIMONE_OFFSET UNITYSDK_OFFSET(0x756440)
#define HANJDMBGIMK_JCMGPCIPOGB_OFFSET UNITYSDK_OFFSET(0x7E3690)
#define HANJDMBGIMK_KNBEBFKCLKD_OFFSET UNITYSDK_OFFSET(0x755C70)
#define HANJDMBGIMK_LMJNOFIJNLE_OFFSET UNITYSDK_OFFSET(0x7E3710)
#define HANJDMBGIMK_MEIMPNNOJFL_OFFSET UNITYSDK_OFFSET(0x7C4080)
#define HANJDMBGIMK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HANJDMBGIMK_TypeDefinitionIndex = 14448;

struct alignas(4) HANJDMBGIMK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HANJDMBGIMK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HANJDMBGIMK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 BPELMJLPBLF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HANJDMBGIMK_BPELMJLPBLF_OFFSET))(this);
	}

	::System::UInt64 MEIMPNNOJFL()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + HANJDMBGIMK_MEIMPNNOJFL_OFFSET))(this);
	}

	::System::Boolean JCMGPCIPOGB(::System::Int32 HPMEONKHFGG, ::System::Single& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + HANJDMBGIMK_JCMGPCIPOGB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 KNBEBFKCLKD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HANJDMBGIMK_KNBEBFKCLKD_OFFSET))(this);
	}

	/*
	::HANJDMBGIMK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HANJDMBGIMK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HANJDMBGIMK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Single BCDGKFJPJMI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HANJDMBGIMK_BCDGKFJPJMI_OFFSET))(this);
	}

	::System::UInt64 LMJNOFIJNLE()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + HANJDMBGIMK_LMJNOFIJNLE_OFFSET))(this);
	}

	::System::Int32 BANIJECKJDP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HANJDMBGIMK_BANIJECKJDP_OFFSET))(this);
	}

	::System::Int32 IDMLBBIMONE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HANJDMBGIMK_IDMLBBIMONE_OFFSET))(this);
	}
};
