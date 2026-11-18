#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define BABCDECFOPP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BABCDECFOPP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BABCDECFOPP_HCCLHAJODOF_OFFSET UNITYSDK_OFFSET(0x76F6C0)
#define BABCDECFOPP_LFJJJKJAJKN_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BABCDECFOPP_NCPMMEKADBH_OFFSET UNITYSDK_OFFSET(0x756B90)
#define BABCDECFOPP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1C50F530)
#define BABCDECFOPP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BABCDECFOPP_TypeDefinitionIndex = 17434;

struct alignas(4) BABCDECFOPP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BABCDECFOPP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BABCDECFOPP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean HCCLHAJODOF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BABCDECFOPP_HCCLHAJODOF_OFFSET))(this);
	}

	::System::Int32 NCPMMEKADBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BABCDECFOPP_NCPMMEKADBH_OFFSET))(this);
	}

	::System::Int32 LFJJJKJAJKN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BABCDECFOPP_LFJJJKJAJKN_OFFSET))(this);
	}

	/*
	::BABCDECFOPP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BABCDECFOPP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BABCDECFOPP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::BABCDECFOPP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BABCDECFOPP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BABCDECFOPP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
