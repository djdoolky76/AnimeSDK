#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HOALPDNFMKD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HOALPDNFMKD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HOALPDNFMKD_KCHFHBJFNNF_OFFSET UNITYSDK_OFFSET(0x762060)
#define HOALPDNFMKD_LNLFIAOOEOG_OFFSET UNITYSDK_OFFSET(0x754B50)
#define HOALPDNFMKD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HOALPDNFMKD_TypeDefinitionIndex = 11476;

struct alignas(4) HOALPDNFMKD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOALPDNFMKD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HOALPDNFMKD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* KCHFHBJFNNF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOALPDNFMKD_KCHFHBJFNNF_OFFSET))(this);
	}

	/*
	::HOALPDNFMKD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HOALPDNFMKD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HOALPDNFMKD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 LNLFIAOOEOG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOALPDNFMKD_LNLFIAOOEOG_OFFSET))(this);
	}
};
