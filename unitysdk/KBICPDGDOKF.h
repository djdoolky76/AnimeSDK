#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KBICPDGDOKF_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KBICPDGDOKF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KBICPDGDOKF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KBICPDGDOKF_MNDIPOCDFOO_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define KBICPDGDOKF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KBICPDGDOKF_TypeDefinitionIndex = 10709;

struct alignas(4) KBICPDGDOKF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBICPDGDOKF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KBICPDGDOKF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* MNDIPOCDFOO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBICPDGDOKF_MNDIPOCDFOO_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBICPDGDOKF_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::KBICPDGDOKF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KBICPDGDOKF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KBICPDGDOKF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
