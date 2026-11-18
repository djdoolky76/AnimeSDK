#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define HKBPNPDADDP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x755D20)
#define HKBPNPDADDP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HKBPNPDADDP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HKBPNPDADDP_NMIEHCDKGHF_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define HKBPNPDADDP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B124410)
#define HKBPNPDADDP_OAOFKOCHKLJ_OFFSET UNITYSDK_OFFSET(0x754C20)
#define HKBPNPDADDP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HKBPNPDADDP_TypeDefinitionIndex = 16786;

struct alignas(4) HKBPNPDADDP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKBPNPDADDP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKBPNPDADDP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HKBPNPDADDP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HKBPNPDADDP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HKBPNPDADDP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKBPNPDADDP_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::HKBPNPDADDP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HKBPNPDADDP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKBPNPDADDP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 OAOFKOCHKLJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKBPNPDADDP_OAOFKOCHKLJ_OFFSET))(this);
	}

	::System::Boolean NMIEHCDKGHF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HKBPNPDADDP_NMIEHCDKGHF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
