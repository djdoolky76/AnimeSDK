#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define MILCGBPMOML_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MILCGBPMOML_GAADLCELLEM_OFFSET UNITYSDK_OFFSET(0x755D20)
#define MILCGBPMOML_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MILCGBPMOML_JJDKPDEMAPH_OFFSET UNITYSDK_OFFSET(0x754B50)
#define MILCGBPMOML_JJGCCDAEMMF_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MILCGBPMOML___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MILCGBPMOML_TypeDefinitionIndex = 9564;

struct alignas(4) MILCGBPMOML
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MILCGBPMOML_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MILCGBPMOML___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 JJDKPDEMAPH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MILCGBPMOML_JJDKPDEMAPH_OFFSET))(this);
	}

	/*
	::MILCGBPMOML BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MILCGBPMOML(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MILCGBPMOML_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 JJGCCDAEMMF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MILCGBPMOML_JJGCCDAEMMF_OFFSET))(this);
	}

	::System::Int32 GAADLCELLEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MILCGBPMOML_GAADLCELLEM_OFFSET))(this);
	}
};
