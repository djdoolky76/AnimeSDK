#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define DIDJOMFHAHI_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DIDJOMFHAHI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DIDJOMFHAHI_GAPMJNPKKLF_OFFSET UNITYSDK_OFFSET(0x755D20)
#define DIDJOMFHAHI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DIDJOMFHAHI_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define DIDJOMFHAHI_PKOMGKJLKGM_OFFSET UNITYSDK_OFFSET(0x756B90)
#define DIDJOMFHAHI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DIDJOMFHAHI_TypeDefinitionIndex = 14912;

struct alignas(4) DIDJOMFHAHI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIDJOMFHAHI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DIDJOMFHAHI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIDJOMFHAHI_NFKFHJBEPGD_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIDJOMFHAHI_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 GAPMJNPKKLF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIDJOMFHAHI_GAPMJNPKKLF_OFFSET))(this);
	}

	/*
	::DIDJOMFHAHI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DIDJOMFHAHI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DIDJOMFHAHI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 PKOMGKJLKGM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIDJOMFHAHI_PKOMGKJLKGM_OFFSET))(this);
	}
};
