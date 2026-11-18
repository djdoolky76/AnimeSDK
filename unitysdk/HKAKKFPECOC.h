#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define HKAKKFPECOC_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HKAKKFPECOC_BAHFPHAFKIA_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define HKAKKFPECOC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HKAKKFPECOC_DBNOJOHPLED_OFFSET UNITYSDK_OFFSET(0x754A70)
#define HKAKKFPECOC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HKAKKFPECOC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HKAKKFPECOC_TypeDefinitionIndex = 11688;

struct alignas(4) HKAKKFPECOC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAKKFPECOC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKAKKFPECOC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 BAHFPHAFKIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAKKFPECOC_BAHFPHAFKIA_OFFSET))(this);
	}

	::System::Boolean DBNOJOHPLED(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HKAKKFPECOC_DBNOJOHPLED_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAKKFPECOC_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::HKAKKFPECOC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HKAKKFPECOC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKAKKFPECOC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
