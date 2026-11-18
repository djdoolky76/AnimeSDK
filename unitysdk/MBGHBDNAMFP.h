#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define MBGHBDNAMFP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MBGHBDNAMFP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MBGHBDNAMFP_FIGNOOEDDNC_OFFSET UNITYSDK_OFFSET(0x756B90)
#define MBGHBDNAMFP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MBGHBDNAMFP_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754970)
#define MBGHBDNAMFP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MBGHBDNAMFP_TypeDefinitionIndex = 16767;

struct alignas(4) MBGHBDNAMFP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBGHBDNAMFP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MBGHBDNAMFP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 FIGNOOEDDNC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBGHBDNAMFP_FIGNOOEDDNC_OFFSET))(this);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBGHBDNAMFP_GKBAJJACIEA_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBGHBDNAMFP_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::MBGHBDNAMFP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MBGHBDNAMFP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MBGHBDNAMFP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
