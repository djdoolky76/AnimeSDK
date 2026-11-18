#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define LCNNHIKFHMP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LCNNHIKFHMP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LCNNHIKFHMP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18BE0FE0)
#define LCNNHIKFHMP_OFOOAIKHMHG_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LCNNHIKFHMP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LCNNHIKFHMP_TypeDefinitionIndex = 16021;

struct alignas(4) LCNNHIKFHMP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCNNHIKFHMP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCNNHIKFHMP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::LCNNHIKFHMP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LCNNHIKFHMP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LCNNHIKFHMP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::LCNNHIKFHMP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LCNNHIKFHMP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCNNHIKFHMP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 OFOOAIKHMHG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCNNHIKFHMP_OFOOAIKHMHG_OFFSET))(this);
	}
};
