#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define CBIKEIOHDPP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CBIKEIOHDPP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CBIKEIOHDPP_MFPMIFLLCAJ_OFFSET UNITYSDK_OFFSET(0x754B50)
#define CBIKEIOHDPP_OCEEOEELJFP_OFFSET UNITYSDK_OFFSET(0x754970)
#define CBIKEIOHDPP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CBIKEIOHDPP_TypeDefinitionIndex = 9375;

struct alignas(4) CBIKEIOHDPP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKEIOHDPP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CBIKEIOHDPP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::CBIKEIOHDPP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CBIKEIOHDPP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CBIKEIOHDPP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 MFPMIFLLCAJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKEIOHDPP_MFPMIFLLCAJ_OFFSET))(this);
	}

	::System::Int32 OCEEOEELJFP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKEIOHDPP_OCEEOEELJFP_OFFSET))(this);
	}
};
