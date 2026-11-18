#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define NPHAOBDJFOK_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NPHAOBDJFOK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NPHAOBDJFOK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NPHAOBDJFOK_NMPDGNCMJDM_OFFSET UNITYSDK_OFFSET(0x761240)
#define NPHAOBDJFOK_PKBHONACNMM_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define NPHAOBDJFOK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NPHAOBDJFOK_TypeDefinitionIndex = 12766;

struct alignas(4) NPHAOBDJFOK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPHAOBDJFOK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NPHAOBDJFOK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NMPDGNCMJDM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPHAOBDJFOK_NMPDGNCMJDM_OFFSET))(this);
	}

	::System::Boolean PKBHONACNMM(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NPHAOBDJFOK_PKBHONACNMM_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::NPHAOBDJFOK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NPHAOBDJFOK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NPHAOBDJFOK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPHAOBDJFOK_ACOEONABOJL_OFFSET))(this);
	}
};
