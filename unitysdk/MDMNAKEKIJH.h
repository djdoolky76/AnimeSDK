#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define MDMNAKEKIJH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MDMNAKEKIJH_CIPJIECLGIA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MDMNAKEKIJH_FJPGCNGHHCC_OFFSET UNITYSDK_OFFSET(0x754B50)
#define MDMNAKEKIJH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MDMNAKEKIJH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BF5C250)
#define MDMNAKEKIJH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MDMNAKEKIJH_TypeDefinitionIndex = 12256;

struct alignas(4) MDMNAKEKIJH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDMNAKEKIJH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MDMNAKEKIJH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 FJPGCNGHHCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDMNAKEKIJH_FJPGCNGHHCC_OFFSET))(this);
	}

	::System::Int32 CIPJIECLGIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDMNAKEKIJH_CIPJIECLGIA_OFFSET))(this);
	}

	/*
	static ::MDMNAKEKIJH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MDMNAKEKIJH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MDMNAKEKIJH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::MDMNAKEKIJH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MDMNAKEKIJH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MDMNAKEKIJH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
