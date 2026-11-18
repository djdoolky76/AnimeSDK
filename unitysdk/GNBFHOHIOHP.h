#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GNBFHOHIOHP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GNBFHOHIOHP_ANNHHHEGPOA_OFFSET UNITYSDK_OFFSET(0x754920)
#define GNBFHOHIOHP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GNBFHOHIOHP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GNBFHOHIOHP_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x754F10)
#define GNBFHOHIOHP_NENDAECBCEM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define GNBFHOHIOHP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B4D8F10)
#define GNBFHOHIOHP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GNBFHOHIOHP_TypeDefinitionIndex = 13932;

struct alignas(4) GNBFHOHIOHP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBFHOHIOHP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GNBFHOHIOHP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBFHOHIOHP_IFDIOIOCGDP_OFFSET))(this);
	}

	/*
	::GNBFHOHIOHP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GNBFHOHIOHP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GNBFHOHIOHP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBFHOHIOHP_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 ANNHHHEGPOA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBFHOHIOHP_ANNHHHEGPOA_OFFSET))(this);
	}

	/*
	static ::GNBFHOHIOHP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GNBFHOHIOHP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GNBFHOHIOHP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 NENDAECBCEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBFHOHIOHP_NENDAECBCEM_OFFSET))(this);
	}
};
