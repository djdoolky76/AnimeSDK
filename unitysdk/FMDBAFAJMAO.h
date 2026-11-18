#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FMDBAFAJMAO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FMDBAFAJMAO_DECDHJMJBFM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FMDBAFAJMAO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FMDBAFAJMAO_PGFCLLGLOCG_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define FMDBAFAJMAO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FMDBAFAJMAO_TypeDefinitionIndex = 11098;

struct alignas(4) FMDBAFAJMAO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDBAFAJMAO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMDBAFAJMAO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* PGFCLLGLOCG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDBAFAJMAO_PGFCLLGLOCG_OFFSET))(this);
	}

	/*
	::FMDBAFAJMAO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FMDBAFAJMAO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMDBAFAJMAO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 DECDHJMJBFM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDBAFAJMAO_DECDHJMJBFM_OFFSET))(this);
	}
};
