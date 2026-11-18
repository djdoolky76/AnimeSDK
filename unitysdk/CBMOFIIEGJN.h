#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define CBMOFIIEGJN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CBMOFIIEGJN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CBMOFIIEGJN_FBGNLIMLMIC_OFFSET UNITYSDK_OFFSET(0x755D20)
#define CBMOFIIEGJN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CBMOFIIEGJN_NEIHNHIDBCK_OFFSET UNITYSDK_OFFSET(0x754920)
#define CBMOFIIEGJN_OLAJIFFJIFB_OFFSET UNITYSDK_OFFSET(0x756B90)
#define CBMOFIIEGJN_PJHKMNGHJNH_OFFSET UNITYSDK_OFFSET(0x754B50)
#define CBMOFIIEGJN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CBMOFIIEGJN_TypeDefinitionIndex = 16202;

struct alignas(4) CBMOFIIEGJN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBMOFIIEGJN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CBMOFIIEGJN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBMOFIIEGJN_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 OLAJIFFJIFB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBMOFIIEGJN_OLAJIFFJIFB_OFFSET))(this);
	}

	::System::Int32 PJHKMNGHJNH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBMOFIIEGJN_PJHKMNGHJNH_OFFSET))(this);
	}

	/*
	::CBMOFIIEGJN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CBMOFIIEGJN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CBMOFIIEGJN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 FBGNLIMLMIC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBMOFIIEGJN_FBGNLIMLMIC_OFFSET))(this);
	}

	::System::Int32 NEIHNHIDBCK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBMOFIIEGJN_NEIHNHIDBCK_OFFSET))(this);
	}
};
