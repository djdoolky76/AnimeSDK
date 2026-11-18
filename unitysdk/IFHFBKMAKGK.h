#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define IFHFBKMAKGK_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IFHFBKMAKGK_BCGAMCIHNNH_OFFSET UNITYSDK_OFFSET(0x756B90)
#define IFHFBKMAKGK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IFHFBKMAKGK_CLLGCKCDAFA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define IFHFBKMAKGK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IFHFBKMAKGK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B6240C0)
#define IFHFBKMAKGK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IFHFBKMAKGK_TypeDefinitionIndex = 16857;

struct alignas(4) IFHFBKMAKGK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFHFBKMAKGK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IFHFBKMAKGK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 BCGAMCIHNNH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFHFBKMAKGK_BCGAMCIHNNH_OFFSET))(this);
	}

	/*
	::IFHFBKMAKGK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IFHFBKMAKGK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IFHFBKMAKGK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 CLLGCKCDAFA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFHFBKMAKGK_CLLGCKCDAFA_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFHFBKMAKGK_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::IFHFBKMAKGK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IFHFBKMAKGK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IFHFBKMAKGK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
