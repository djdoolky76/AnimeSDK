#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define AMGFANCCNPH_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define AMGFANCCNPH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AMGFANCCNPH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AMGFANCCNPH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19F13350)
#define AMGFANCCNPH_OKIMICLMMHC_OFFSET UNITYSDK_OFFSET(0x755D20)
#define AMGFANCCNPH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AMGFANCCNPH_TypeDefinitionIndex = 13495;

struct alignas(4) AMGFANCCNPH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMGFANCCNPH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AMGFANCCNPH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMGFANCCNPH_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 OKIMICLMMHC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMGFANCCNPH_OKIMICLMMHC_OFFSET))(this);
	}

	/*
	::AMGFANCCNPH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AMGFANCCNPH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AMGFANCCNPH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::AMGFANCCNPH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::AMGFANCCNPH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + AMGFANCCNPH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
