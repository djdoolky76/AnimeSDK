#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define OGFHLMLLADH_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OGFHLMLLADH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OGFHLMLLADH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OGFHLMLLADH_NMIEHCDKGHF_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define OGFHLMLLADH_OAOFKOCHKLJ_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define OGFHLMLLADH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OGFHLMLLADH_TypeDefinitionIndex = 12165;

struct alignas(4) OGFHLMLLADH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGFHLMLLADH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OGFHLMLLADH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean NMIEHCDKGHF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + OGFHLMLLADH_NMIEHCDKGHF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGFHLMLLADH_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 OAOFKOCHKLJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGFHLMLLADH_OAOFKOCHKLJ_OFFSET))(this);
	}

	/*
	::OGFHLMLLADH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OGFHLMLLADH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OGFHLMLLADH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
