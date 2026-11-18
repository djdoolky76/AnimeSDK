#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define MONCJMOCIEM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MONCJMOCIEM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MONCJMOCIEM_CDDPDNEIELC_OFFSET UNITYSDK_OFFSET(0x755790)
#define MONCJMOCIEM_EFGEJGANFGE_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define MONCJMOCIEM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MONCJMOCIEM_JLGPMMFADLE_OFFSET UNITYSDK_OFFSET(0x754C20)
#define MONCJMOCIEM_LFFLNNDLEBE_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define MONCJMOCIEM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MONCJMOCIEM_TypeDefinitionIndex = 14442;

struct alignas(4) MONCJMOCIEM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONCJMOCIEM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MONCJMOCIEM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::MONCJMOCIEM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MONCJMOCIEM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MONCJMOCIEM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 CDDPDNEIELC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONCJMOCIEM_CDDPDNEIELC_OFFSET))(this);
	}

	::System::Boolean LFFLNNDLEBE(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MONCJMOCIEM_LFFLNNDLEBE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 JLGPMMFADLE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONCJMOCIEM_JLGPMMFADLE_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONCJMOCIEM_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean EFGEJGANFGE(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MONCJMOCIEM_EFGEJGANFGE_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
