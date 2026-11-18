#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define IDFCIPCFNJC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IDFCIPCFNJC_CGNIGJANFFG_OFFSET UNITYSDK_OFFSET(0x756B10)
#define IDFCIPCFNJC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IDFCIPCFNJC_HNDHEIAJPHE_OFFSET UNITYSDK_OFFSET(0x76F1A0)
#define IDFCIPCFNJC_LLMHBMFJDOM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define IDFCIPCFNJC_LNHLCEJBOIN_OFFSET UNITYSDK_OFFSET(0x756B90)
#define IDFCIPCFNJC_NKCNGLADFNA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define IDFCIPCFNJC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IDFCIPCFNJC_TypeDefinitionIndex = 10042;

struct alignas(4) IDFCIPCFNJC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFCIPCFNJC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IDFCIPCFNJC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LNHLCEJBOIN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFCIPCFNJC_LNHLCEJBOIN_OFFSET))(this);
	}

	::System::Int32 LLMHBMFJDOM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFCIPCFNJC_LLMHBMFJDOM_OFFSET))(this);
	}

	::System::UInt64 HNDHEIAJPHE()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFCIPCFNJC_HNDHEIAJPHE_OFFSET))(this);
	}

	::System::Int32 NKCNGLADFNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFCIPCFNJC_NKCNGLADFNA_OFFSET))(this);
	}

	/*
	::IDFCIPCFNJC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IDFCIPCFNJC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IDFCIPCFNJC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* CGNIGJANFFG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFCIPCFNJC_CGNIGJANFFG_OFFSET))(this);
	}
};
