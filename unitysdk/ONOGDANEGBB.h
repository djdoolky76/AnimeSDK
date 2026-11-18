#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define ONOGDANEGBB_AGDOENHIIBI_OFFSET UNITYSDK_OFFSET(0x754B50)
#define ONOGDANEGBB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ONOGDANEGBB_FFMBGCLLCIF_OFFSET UNITYSDK_OFFSET(0x754920)
#define ONOGDANEGBB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ONOGDANEGBB_NKCNGLADFNA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ONOGDANEGBB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1EDB7D60)
#define ONOGDANEGBB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ONOGDANEGBB_TypeDefinitionIndex = 11485;

struct alignas(4) ONOGDANEGBB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONOGDANEGBB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONOGDANEGBB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::ONOGDANEGBB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ONOGDANEGBB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONOGDANEGBB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::ONOGDANEGBB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::ONOGDANEGBB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + ONOGDANEGBB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 AGDOENHIIBI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONOGDANEGBB_AGDOENHIIBI_OFFSET))(this);
	}

	::System::Int32 FFMBGCLLCIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONOGDANEGBB_FFMBGCLLCIF_OFFSET))(this);
	}

	::System::Int32 NKCNGLADFNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONOGDANEGBB_NKCNGLADFNA_OFFSET))(this);
	}
};
