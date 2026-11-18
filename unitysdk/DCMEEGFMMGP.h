#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define DCMEEGFMMGP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DCMEEGFMMGP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DCMEEGFMMGP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DCMEEGFMMGP_LPIEDGKONKD_OFFSET UNITYSDK_OFFSET(0x7B21E0)
#define DCMEEGFMMGP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17A94E80)
#define DCMEEGFMMGP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DCMEEGFMMGP_TypeDefinitionIndex = 15287;

struct alignas(4) DCMEEGFMMGP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMEEGFMMGP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DCMEEGFMMGP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::DCMEEGFMMGP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DCMEEGFMMGP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DCMEEGFMMGP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::UInt32 ACOEONABOJL()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMEEGFMMGP_ACOEONABOJL_OFFSET))(this);
	}

	::System::UInt64 LPIEDGKONKD()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMEEGFMMGP_LPIEDGKONKD_OFFSET))(this);
	}

	/*
	static ::DCMEEGFMMGP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::UInt32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DCMEEGFMMGP(*)(::System::Int32, ::System::UInt32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DCMEEGFMMGP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
