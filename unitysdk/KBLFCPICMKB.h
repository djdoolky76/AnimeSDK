#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define KBLFCPICMKB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KBLFCPICMKB_EGNLDHPCAJF_OFFSET UNITYSDK_OFFSET(0x755D20)
#define KBLFCPICMKB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KBLFCPICMKB_IGPCIBDAFDA_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KBLFCPICMKB_IHGHGCHKLLA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KBLFCPICMKB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19551A60)
#define KBLFCPICMKB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KBLFCPICMKB_TypeDefinitionIndex = 12538;

struct alignas(4) KBLFCPICMKB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBLFCPICMKB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KBLFCPICMKB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KBLFCPICMKB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KBLFCPICMKB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KBLFCPICMKB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::KBLFCPICMKB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KBLFCPICMKB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KBLFCPICMKB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 EGNLDHPCAJF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBLFCPICMKB_EGNLDHPCAJF_OFFSET))(this);
	}

	::System::Int32 IHGHGCHKLLA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBLFCPICMKB_IHGHGCHKLLA_OFFSET))(this);
	}

	::System::Int32 IGPCIBDAFDA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBLFCPICMKB_IGPCIBDAFDA_OFFSET))(this);
	}
};
