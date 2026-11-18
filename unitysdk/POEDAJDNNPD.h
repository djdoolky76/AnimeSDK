#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define POEDAJDNNPD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define POEDAJDNNPD_CACDOMJFABM_OFFSET UNITYSDK_OFFSET(0x754F10)
#define POEDAJDNNPD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define POEDAJDNNPD_IOEOPGELNDJ_OFFSET UNITYSDK_OFFSET(0x754B50)
#define POEDAJDNNPD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1EC8A0A0)
#define POEDAJDNNPD_OKGOMLEFBHM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define POEDAJDNNPD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int POEDAJDNNPD_TypeDefinitionIndex = 9320;

struct alignas(4) POEDAJDNNPD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + POEDAJDNNPD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POEDAJDNNPD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 OKGOMLEFBHM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POEDAJDNNPD_OKGOMLEFBHM_OFFSET))(this);
	}

	::System::Int32 IOEOPGELNDJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POEDAJDNNPD_IOEOPGELNDJ_OFFSET))(this);
	}

	/*
	static ::POEDAJDNNPD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::POEDAJDNNPD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + POEDAJDNNPD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::POEDAJDNNPD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::POEDAJDNNPD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POEDAJDNNPD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* CACDOMJFABM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + POEDAJDNNPD_CACDOMJFABM_OFFSET))(this);
	}
};
