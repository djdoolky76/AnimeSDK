#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Struct.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define IKOPEHLPKNG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IKOPEHLPKNG_ELKAHJACJNC_OFFSET UNITYSDK_OFFSET(0x7626A0)
#define IKOPEHLPKNG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IKOPEHLPKNG_HMONBDBEFGE_OFFSET UNITYSDK_OFFSET(0x762670)
#define IKOPEHLPKNG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IKOPEHLPKNG_TypeDefinitionIndex = 13924;

struct alignas(4) IKOPEHLPKNG
{
	::FlatBuffers::Struct KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKOPEHLPKNG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IKOPEHLPKNG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HMONBDBEFGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKOPEHLPKNG_HMONBDBEFGE_OFFSET))(this);
	}

	::System::Int32 ELKAHJACJNC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKOPEHLPKNG_ELKAHJACJNC_OFFSET))(this);
	}

	/*
	::IKOPEHLPKNG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IKOPEHLPKNG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IKOPEHLPKNG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
