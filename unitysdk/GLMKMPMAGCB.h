#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define GLMKMPMAGCB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GLMKMPMAGCB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GLMKMPMAGCB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GLMKMPMAGCB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17BF24A0)
#define GLMKMPMAGCB_ODDCGKLEFIB_OFFSET UNITYSDK_OFFSET(0x755D20)
#define GLMKMPMAGCB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GLMKMPMAGCB_TypeDefinitionIndex = 9292;

struct alignas(4) GLMKMPMAGCB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMKMPMAGCB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLMKMPMAGCB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMKMPMAGCB_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 ODDCGKLEFIB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMKMPMAGCB_ODDCGKLEFIB_OFFSET))(this);
	}

	/*
	static ::GLMKMPMAGCB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GLMKMPMAGCB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GLMKMPMAGCB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::GLMKMPMAGCB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GLMKMPMAGCB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLMKMPMAGCB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
