#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Struct.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define IFMDDIOEJGI_APFKBGKCABG_OFFSET UNITYSDK_OFFSET(0x7A68F0)
#define IFMDDIOEJGI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IFMDDIOEJGI_CMPHCMLPGJH_OFFSET UNITYSDK_OFFSET(0x7626A0)
#define IFMDDIOEJGI_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x762670)
#define IFMDDIOEJGI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IFMDDIOEJGI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IFMDDIOEJGI_TypeDefinitionIndex = 17043;

struct alignas(4) IFMDDIOEJGI
{
	::FlatBuffers::Struct KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMDDIOEJGI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IFMDDIOEJGI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::IFMDDIOEJGI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IFMDDIOEJGI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IFMDDIOEJGI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 APFKBGKCABG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMDDIOEJGI_APFKBGKCABG_OFFSET))(this);
	}

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMDDIOEJGI_DNKLBHKEDEM_OFFSET))(this);
	}

	::System::Int32 CMPHCMLPGJH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMDDIOEJGI_CMPHCMLPGJH_OFFSET))(this);
	}
};
