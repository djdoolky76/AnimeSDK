#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JGCFMNDBEHF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JGCFMNDBEHF_CPBNNNFPKEM_OFFSET UNITYSDK_OFFSET(0x755D20)
#define JGCFMNDBEHF_FLIPDCJJAOL_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define JGCFMNDBEHF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JGCFMNDBEHF_HOCKHAAPODL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JGCFMNDBEHF_MNBGBNJJGNL_OFFSET UNITYSDK_OFFSET(0x756B90)
#define JGCFMNDBEHF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JGCFMNDBEHF_TypeDefinitionIndex = 12359;

struct alignas(4) JGCFMNDBEHF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGCFMNDBEHF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JGCFMNDBEHF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* FLIPDCJJAOL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGCFMNDBEHF_FLIPDCJJAOL_OFFSET))(this);
	}

	::System::Int32 MNBGBNJJGNL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGCFMNDBEHF_MNBGBNJJGNL_OFFSET))(this);
	}

	::System::Int32 HOCKHAAPODL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGCFMNDBEHF_HOCKHAAPODL_OFFSET))(this);
	}

	/*
	::JGCFMNDBEHF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JGCFMNDBEHF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JGCFMNDBEHF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 CPBNNNFPKEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGCFMNDBEHF_CPBNNNFPKEM_OFFSET))(this);
	}
};
