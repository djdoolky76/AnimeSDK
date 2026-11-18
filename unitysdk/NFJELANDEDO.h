#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NFJELANDEDO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NFJELANDEDO_CPBNNNFPKEM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define NFJELANDEDO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NFJELANDEDO_HKAAIJAKCAD_OFFSET UNITYSDK_OFFSET(0x754F10)
#define NFJELANDEDO_MNBGBNJJGNL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NFJELANDEDO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NFJELANDEDO_TypeDefinitionIndex = 16752;

struct alignas(4) NFJELANDEDO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJELANDEDO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NFJELANDEDO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* HKAAIJAKCAD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJELANDEDO_HKAAIJAKCAD_OFFSET))(this);
	}

	/*
	::NFJELANDEDO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NFJELANDEDO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NFJELANDEDO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 CPBNNNFPKEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJELANDEDO_CPBNNNFPKEM_OFFSET))(this);
	}

	::System::Int32 MNBGBNJJGNL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJELANDEDO_MNBGBNJJGNL_OFFSET))(this);
	}
};
