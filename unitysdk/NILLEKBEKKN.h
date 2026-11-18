#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Struct.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define NILLEKBEKKN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NILLEKBEKKN_ELKAHJACJNC_OFFSET UNITYSDK_OFFSET(0x81A6D0)
#define NILLEKBEKKN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NILLEKBEKKN_HLNKIJDFGAO_OFFSET UNITYSDK_OFFSET(0x81A6A0)
#define NILLEKBEKKN_HMONBDBEFGE_OFFSET UNITYSDK_OFFSET(0x81A670)
#define NILLEKBEKKN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NILLEKBEKKN_TypeDefinitionIndex = 9167;

struct alignas(4) NILLEKBEKKN
{
	::FlatBuffers::Struct KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NILLEKBEKKN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NILLEKBEKKN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Single HMONBDBEFGE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NILLEKBEKKN_HMONBDBEFGE_OFFSET))(this);
	}

	::System::Single HLNKIJDFGAO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NILLEKBEKKN_HLNKIJDFGAO_OFFSET))(this);
	}

	::System::Single ELKAHJACJNC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NILLEKBEKKN_ELKAHJACJNC_OFFSET))(this);
	}

	/*
	::NILLEKBEKKN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NILLEKBEKKN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NILLEKBEKKN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
