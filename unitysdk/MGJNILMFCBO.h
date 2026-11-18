#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MGJNILMFCBO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MGJNILMFCBO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MGJNILMFCBO_JEOGIHDDJBK_OFFSET UNITYSDK_OFFSET(0x762060)
#define MGJNILMFCBO_PMHFFIAHOBA_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define MGJNILMFCBO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MGJNILMFCBO_TypeDefinitionIndex = 11279;

struct alignas(4) MGJNILMFCBO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJNILMFCBO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MGJNILMFCBO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* JEOGIHDDJBK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJNILMFCBO_JEOGIHDDJBK_OFFSET))(this);
	}

	::System::String* PMHFFIAHOBA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJNILMFCBO_PMHFFIAHOBA_OFFSET))(this);
	}

	/*
	::MGJNILMFCBO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MGJNILMFCBO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MGJNILMFCBO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
