#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define HDGKELCAADO_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HDGKELCAADO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HDGKELCAADO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HDGKELCAADO_JHHPOALCJJP_OFFSET UNITYSDK_OFFSET(0x754B50)
#define HDGKELCAADO_LKGBPNAPBEH_OFFSET UNITYSDK_OFFSET(0x755D20)
#define HDGKELCAADO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HDGKELCAADO_TypeDefinitionIndex = 13725;

struct alignas(4) HDGKELCAADO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDGKELCAADO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HDGKELCAADO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LKGBPNAPBEH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDGKELCAADO_LKGBPNAPBEH_OFFSET))(this);
	}

	::System::Int32 JHHPOALCJJP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDGKELCAADO_JHHPOALCJJP_OFFSET))(this);
	}

	/*
	::HDGKELCAADO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HDGKELCAADO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HDGKELCAADO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDGKELCAADO_ACOEONABOJL_OFFSET))(this);
	}
};
