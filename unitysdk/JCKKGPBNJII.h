#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define JCKKGPBNJII_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JCKKGPBNJII_CBOKIBDHGIB_OFFSET UNITYSDK_OFFSET(0x755D20)
#define JCKKGPBNJII_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JCKKGPBNJII_LFJJJKJAJKN_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JCKKGPBNJII_NCPMMEKADBH_OFFSET UNITYSDK_OFFSET(0x754B50)
#define JCKKGPBNJII_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17C23DB0)
#define JCKKGPBNJII___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JCKKGPBNJII_TypeDefinitionIndex = 16778;

struct alignas(4) JCKKGPBNJII
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKKGPBNJII_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCKKGPBNJII___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 CBOKIBDHGIB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKKGPBNJII_CBOKIBDHGIB_OFFSET))(this);
	}

	::System::Int32 NCPMMEKADBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKKGPBNJII_NCPMMEKADBH_OFFSET))(this);
	}

	/*
	::JCKKGPBNJII BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JCKKGPBNJII(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCKKGPBNJII_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 LFJJJKJAJKN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKKGPBNJII_LFJJJKJAJKN_OFFSET))(this);
	}

	/*
	static ::JCKKGPBNJII OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JCKKGPBNJII(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JCKKGPBNJII_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
