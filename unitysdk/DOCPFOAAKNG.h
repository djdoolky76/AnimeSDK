#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DOCPFOAAKNG_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DOCPFOAAKNG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DOCPFOAAKNG_FDFLPGLILLP_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define DOCPFOAAKNG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DOCPFOAAKNG_LGNGIPHNOOF_OFFSET UNITYSDK_OFFSET(0x755D20)
#define DOCPFOAAKNG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19F3FCA0)
#define DOCPFOAAKNG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DOCPFOAAKNG_TypeDefinitionIndex = 17451;

struct alignas(4) DOCPFOAAKNG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCPFOAAKNG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOCPFOAAKNG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::DOCPFOAAKNG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DOCPFOAAKNG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DOCPFOAAKNG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 LGNGIPHNOOF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCPFOAAKNG_LGNGIPHNOOF_OFFSET))(this);
	}

	/*
	::DOCPFOAAKNG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DOCPFOAAKNG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOCPFOAAKNG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* FDFLPGLILLP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCPFOAAKNG_FDFLPGLILLP_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCPFOAAKNG_ACOEONABOJL_OFFSET))(this);
	}
};
