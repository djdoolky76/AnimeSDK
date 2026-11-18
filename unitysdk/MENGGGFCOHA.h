#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define MENGGGFCOHA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MENGGGFCOHA_CDDDGDFFLJO_OFFSET UNITYSDK_OFFSET(0x756800)
#define MENGGGFCOHA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MENGGGFCOHA_GKKKCFBKIKH_OFFSET UNITYSDK_OFFSET(0x755FE0)
#define MENGGGFCOHA_MKGFNJJBICO_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MENGGGFCOHA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B312600)
#define MENGGGFCOHA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MENGGGFCOHA_TypeDefinitionIndex = 16049;

struct alignas(4) MENGGGFCOHA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MENGGGFCOHA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MENGGGFCOHA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 CDDDGDFFLJO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MENGGGFCOHA_CDDDGDFFLJO_OFFSET))(this);
	}

	::System::Int32 MKGFNJJBICO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MENGGGFCOHA_MKGFNJJBICO_OFFSET))(this);
	}

	::System::Boolean GKKKCFBKIKH(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MENGGGFCOHA_GKKKCFBKIKH_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::MENGGGFCOHA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MENGGGFCOHA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MENGGGFCOHA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::MENGGGFCOHA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MENGGGFCOHA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MENGGGFCOHA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
