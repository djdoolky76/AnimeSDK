#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define EFKBHIEGJCP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EFKBHIEGJCP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EFKBHIEGJCP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EFKBHIEGJCP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19C0FC50)
#define EFKBHIEGJCP_OOAMMDCDIGF_OFFSET UNITYSDK_OFFSET(0x754B50)
#define EFKBHIEGJCP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EFKBHIEGJCP_TypeDefinitionIndex = 11179;

struct alignas(4) EFKBHIEGJCP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKBHIEGJCP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EFKBHIEGJCP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::EFKBHIEGJCP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EFKBHIEGJCP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EFKBHIEGJCP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 OOAMMDCDIGF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKBHIEGJCP_OOAMMDCDIGF_OFFSET))(this);
	}

	/*
	::EFKBHIEGJCP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EFKBHIEGJCP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EFKBHIEGJCP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKBHIEGJCP_ACOEONABOJL_OFFSET))(this);
	}
};
