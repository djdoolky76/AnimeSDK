#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define PAFJCMDGOGA_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PAFJCMDGOGA_AJDKIGMHGLM_OFFSET UNITYSDK_OFFSET(0x761240)
#define PAFJCMDGOGA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PAFJCMDGOGA_CEBLKEDAFOP_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define PAFJCMDGOGA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PAFJCMDGOGA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x191393B0)
#define PAFJCMDGOGA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PAFJCMDGOGA_TypeDefinitionIndex = 14045;

struct alignas(4) PAFJCMDGOGA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAFJCMDGOGA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PAFJCMDGOGA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::PAFJCMDGOGA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PAFJCMDGOGA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PAFJCMDGOGA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean CEBLKEDAFOP(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PAFJCMDGOGA_CEBLKEDAFOP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 AJDKIGMHGLM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAFJCMDGOGA_AJDKIGMHGLM_OFFSET))(this);
	}

	/*
	static ::PAFJCMDGOGA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PAFJCMDGOGA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PAFJCMDGOGA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAFJCMDGOGA_ACOEONABOJL_OFFSET))(this);
	}
};
