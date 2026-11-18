#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define CNODMPIKDNC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CNODMPIKDNC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CNODMPIKDNC_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CNODMPIKDNC_HCOGFPNNNNK_OFFSET UNITYSDK_OFFSET(0x755D20)
#define CNODMPIKDNC_NDAMKIGKBLA_OFFSET UNITYSDK_OFFSET(0x756B90)
#define CNODMPIKDNC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x157458F0)
#define CNODMPIKDNC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CNODMPIKDNC_TypeDefinitionIndex = 10344;

struct alignas(4) CNODMPIKDNC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNODMPIKDNC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CNODMPIKDNC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HCOGFPNNNNK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNODMPIKDNC_HCOGFPNNNNK_OFFSET))(this);
	}

	/*
	static ::CNODMPIKDNC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CNODMPIKDNC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CNODMPIKDNC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::CNODMPIKDNC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CNODMPIKDNC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CNODMPIKDNC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNODMPIKDNC_GKBAJJACIEA_OFFSET))(this);
	}

	::System::Int32 NDAMKIGKBLA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNODMPIKDNC_NDAMKIGKBLA_OFFSET))(this);
	}
};
