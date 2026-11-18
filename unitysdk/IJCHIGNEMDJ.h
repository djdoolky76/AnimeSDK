#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define IJCHIGNEMDJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IJCHIGNEMDJ_CJHHNHJGPID_OFFSET UNITYSDK_OFFSET(0x754B50)
#define IJCHIGNEMDJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IJCHIGNEMDJ_NAGCPPGBADK_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IJCHIGNEMDJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B130D40)
#define IJCHIGNEMDJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IJCHIGNEMDJ_TypeDefinitionIndex = 16641;

struct alignas(4) IJCHIGNEMDJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJCHIGNEMDJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IJCHIGNEMDJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::IJCHIGNEMDJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IJCHIGNEMDJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IJCHIGNEMDJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 CJHHNHJGPID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJCHIGNEMDJ_CJHHNHJGPID_OFFSET))(this);
	}

	/*
	::IJCHIGNEMDJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IJCHIGNEMDJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IJCHIGNEMDJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NAGCPPGBADK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJCHIGNEMDJ_NAGCPPGBADK_OFFSET))(this);
	}
};
