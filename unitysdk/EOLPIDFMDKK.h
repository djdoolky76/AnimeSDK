#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EOLPIDFMDKK_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EOLPIDFMDKK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EOLPIDFMDKK_BIENLHEKMCD_OFFSET UNITYSDK_OFFSET(0x755A00)
#define EOLPIDFMDKK_CJHFDKEPJMC_OFFSET UNITYSDK_OFFSET(0x755D20)
#define EOLPIDFMDKK_FPFCCDJEDEM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define EOLPIDFMDKK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EOLPIDFMDKK_KAHANFONAMB_OFFSET UNITYSDK_OFFSET(0x754920)
#define EOLPIDFMDKK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EOLPIDFMDKK_TypeDefinitionIndex = 12997;

struct alignas(4) EOLPIDFMDKK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOLPIDFMDKK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EOLPIDFMDKK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::EOLPIDFMDKK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EOLPIDFMDKK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EOLPIDFMDKK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 FPFCCDJEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOLPIDFMDKK_FPFCCDJEDEM_OFFSET))(this);
	}

	::System::Int32 CJHFDKEPJMC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOLPIDFMDKK_CJHFDKEPJMC_OFFSET))(this);
	}

	::System::Int32 KAHANFONAMB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOLPIDFMDKK_KAHANFONAMB_OFFSET))(this);
	}

	::System::String* BIENLHEKMCD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOLPIDFMDKK_BIENLHEKMCD_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOLPIDFMDKK_ACOEONABOJL_OFFSET))(this);
	}
};
