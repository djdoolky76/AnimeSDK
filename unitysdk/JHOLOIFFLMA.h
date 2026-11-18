#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define JHOLOIFFLMA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JHOLOIFFLMA_BPJEGCPBOED_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define JHOLOIFFLMA_DLGLCFOPEPO_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JHOLOIFFLMA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JHOLOIFFLMA_JAMCNDCDBHN_OFFSET UNITYSDK_OFFSET(0x755C70)
#define JHOLOIFFLMA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18BCBBE0)
#define JHOLOIFFLMA_ODNOOMHBMLD_OFFSET UNITYSDK_OFFSET(0x754920)
#define JHOLOIFFLMA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JHOLOIFFLMA_TypeDefinitionIndex = 17346;

struct alignas(4) JHOLOIFFLMA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOLOIFFLMA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHOLOIFFLMA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 BPJEGCPBOED()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOLOIFFLMA_BPJEGCPBOED_OFFSET))(this);
	}

	/*
	static ::JHOLOIFFLMA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JHOLOIFFLMA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JHOLOIFFLMA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 DLGLCFOPEPO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOLOIFFLMA_DLGLCFOPEPO_OFFSET))(this);
	}

	/*
	::JHOLOIFFLMA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JHOLOIFFLMA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHOLOIFFLMA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 JAMCNDCDBHN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOLOIFFLMA_JAMCNDCDBHN_OFFSET))(this);
	}

	::System::Int32 ODNOOMHBMLD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOLOIFFLMA_ODNOOMHBMLD_OFFSET))(this);
	}
};
