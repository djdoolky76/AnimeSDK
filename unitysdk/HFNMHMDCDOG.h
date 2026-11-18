#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HFNMHMDCDOG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HFNMHMDCDOG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HFNMHMDCDOG_KCHFHBJFNNF_OFFSET UNITYSDK_OFFSET(0x762060)
#define HFNMHMDCDOG_LNLFIAOOEOG_OFFSET UNITYSDK_OFFSET(0x766400)
#define HFNMHMDCDOG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HFNMHMDCDOG_TypeDefinitionIndex = 13782;

struct alignas(4) HFNMHMDCDOG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFNMHMDCDOG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HFNMHMDCDOG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LNLFIAOOEOG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HFNMHMDCDOG_LNLFIAOOEOG_OFFSET))(this);
	}

	/*
	::HFNMHMDCDOG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HFNMHMDCDOG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HFNMHMDCDOG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* KCHFHBJFNNF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFNMHMDCDOG_KCHFHBJFNNF_OFFSET))(this);
	}
};
