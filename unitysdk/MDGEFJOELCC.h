#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MDGEFJOELCC_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MDGEFJOELCC_AJFFCMNAIEN_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define MDGEFJOELCC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MDGEFJOELCC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MDGEFJOELCC_IGLFKIBEGGH_OFFSET UNITYSDK_OFFSET(0x756D50)
#define MDGEFJOELCC_OHBJCLKJEEK_OFFSET UNITYSDK_OFFSET(0x755D20)
#define MDGEFJOELCC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MDGEFJOELCC_TypeDefinitionIndex = 12526;

struct alignas(4) MDGEFJOELCC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGEFJOELCC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MDGEFJOELCC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGEFJOELCC_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* IGLFKIBEGGH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGEFJOELCC_IGLFKIBEGGH_OFFSET))(this);
	}

	::System::Int32 OHBJCLKJEEK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGEFJOELCC_OHBJCLKJEEK_OFFSET))(this);
	}

	/*
	::MDGEFJOELCC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MDGEFJOELCC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MDGEFJOELCC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* AJFFCMNAIEN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGEFJOELCC_AJFFCMNAIEN_OFFSET))(this);
	}
};
