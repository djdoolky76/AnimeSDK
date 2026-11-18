#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define DNBIIEFECIE_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DNBIIEFECIE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DNBIIEFECIE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DNBIIEFECIE_NMIEHCDKGHF_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define DNBIIEFECIE_OAOFKOCHKLJ_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define DNBIIEFECIE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DNBIIEFECIE_TypeDefinitionIndex = 9808;

struct alignas(4) DNBIIEFECIE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBIIEFECIE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DNBIIEFECIE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBIIEFECIE_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::DNBIIEFECIE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DNBIIEFECIE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DNBIIEFECIE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 OAOFKOCHKLJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBIIEFECIE_OAOFKOCHKLJ_OFFSET))(this);
	}

	::System::Boolean NMIEHCDKGHF(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + DNBIIEFECIE_NMIEHCDKGHF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
