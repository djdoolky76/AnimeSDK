#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define PACALOOLLBD_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PACALOOLLBD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PACALOOLLBD_CCOGKLMHHIE_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define PACALOOLLBD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PACALOOLLBD_GJMBABJCHHJ_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define PACALOOLLBD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PACALOOLLBD_TypeDefinitionIndex = 13079;

struct alignas(4) PACALOOLLBD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PACALOOLLBD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PACALOOLLBD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PACALOOLLBD_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::PACALOOLLBD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PACALOOLLBD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PACALOOLLBD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean CCOGKLMHHIE(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PACALOOLLBD_CCOGKLMHHIE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GJMBABJCHHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PACALOOLLBD_GJMBABJCHHJ_OFFSET))(this);
	}
};
