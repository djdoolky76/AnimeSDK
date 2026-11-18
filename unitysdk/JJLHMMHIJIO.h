#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define JJLHMMHIJIO_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JJLHMMHIJIO_AJDKIGMHGLM_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define JJLHMMHIJIO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JJLHMMHIJIO_CEBLKEDAFOP_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define JJLHMMHIJIO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JJLHMMHIJIO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JJLHMMHIJIO_TypeDefinitionIndex = 10601;

struct alignas(4) JJLHMMHIJIO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJLHMMHIJIO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JJLHMMHIJIO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 AJDKIGMHGLM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJLHMMHIJIO_AJDKIGMHGLM_OFFSET))(this);
	}

	::System::Boolean CEBLKEDAFOP(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JJLHMMHIJIO_CEBLKEDAFOP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJLHMMHIJIO_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::JJLHMMHIJIO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JJLHMMHIJIO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JJLHMMHIJIO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
