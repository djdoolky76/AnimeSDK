#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define DFGMELKBLNM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DFGMELKBLNM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DFGMELKBLNM_GFKGKNAPPKE_1_OFFSET UNITYSDK_OFFSET(0x195098D0)
#define DFGMELKBLNM_GFKGKNAPPKE_OFFSET UNITYSDK_OFFSET(0x19509840)
#define DFGMELKBLNM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DFGMELKBLNM_TypeDefinitionIndex = 13316;

struct alignas(4) DFGMELKBLNM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGMELKBLNM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFGMELKBLNM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::DFGMELKBLNM GFKGKNAPPKE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DFGMELKBLNM EIFONLCJOPG)
	{
		return ((::DFGMELKBLNM(*)(::FlatBuffers::ByteBuffer*, ::DFGMELKBLNM))((::PBYTE)hIl2Cpp + DFGMELKBLNM_GFKGKNAPPKE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::DFGMELKBLNM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DFGMELKBLNM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFGMELKBLNM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::DFGMELKBLNM GFKGKNAPPKE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DFGMELKBLNM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFGMELKBLNM_GFKGKNAPPKE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
