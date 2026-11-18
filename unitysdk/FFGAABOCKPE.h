#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define FFGAABOCKPE_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754B50)
#define FFGAABOCKPE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FFGAABOCKPE_DNGHKOPHJCN_OFFSET UNITYSDK_OFFSET(0x754920)
#define FFGAABOCKPE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FFGAABOCKPE_JPJNAPMFAAI_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FFGAABOCKPE_PGFCLLGLOCG_OFFSET UNITYSDK_OFFSET(0x756B90)
#define FFGAABOCKPE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FFGAABOCKPE_TypeDefinitionIndex = 13450;

struct alignas(4) FFGAABOCKPE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGAABOCKPE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FFGAABOCKPE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::FFGAABOCKPE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FFGAABOCKPE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FFGAABOCKPE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 DNGHKOPHJCN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGAABOCKPE_DNGHKOPHJCN_OFFSET))(this);
	}

	::System::Int32 JPJNAPMFAAI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGAABOCKPE_JPJNAPMFAAI_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGAABOCKPE_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 PGFCLLGLOCG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGAABOCKPE_PGFCLLGLOCG_OFFSET))(this);
	}
};
