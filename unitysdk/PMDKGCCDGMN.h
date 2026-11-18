#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Struct.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define PMDKGCCDGMN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PMDKGCCDGMN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PMDKGCCDGMN_HDOFAEHPLGA_OFFSET UNITYSDK_OFFSET(0x7626A0)
#define PMDKGCCDGMN_PIPBPLEIPFK_OFFSET UNITYSDK_OFFSET(0x762670)
#define PMDKGCCDGMN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PMDKGCCDGMN_TypeDefinitionIndex = 11662;

struct alignas(4) PMDKGCCDGMN
{
	::FlatBuffers::Struct KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMDKGCCDGMN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PMDKGCCDGMN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 PIPBPLEIPFK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMDKGCCDGMN_PIPBPLEIPFK_OFFSET))(this);
	}

	/*
	::PMDKGCCDGMN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PMDKGCCDGMN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PMDKGCCDGMN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 HDOFAEHPLGA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMDKGCCDGMN_HDOFAEHPLGA_OFFSET))(this);
	}
};
