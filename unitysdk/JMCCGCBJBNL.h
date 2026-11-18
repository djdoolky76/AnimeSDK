#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define JMCCGCBJBNL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JMCCGCBJBNL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JMCCGCBJBNL_MEDABLIBPKP_1_OFFSET UNITYSDK_OFFSET(0x1BAFCB50)
#define JMCCGCBJBNL_MEDABLIBPKP_OFFSET UNITYSDK_OFFSET(0x1BAFCAC0)
#define JMCCGCBJBNL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JMCCGCBJBNL_TypeDefinitionIndex = 10149;

struct alignas(4) JMCCGCBJBNL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMCCGCBJBNL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JMCCGCBJBNL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JMCCGCBJBNL MEDABLIBPKP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JMCCGCBJBNL EIFONLCJOPG)
	{
		return ((::JMCCGCBJBNL(*)(::FlatBuffers::ByteBuffer*, ::JMCCGCBJBNL))((::PBYTE)hIl2Cpp + JMCCGCBJBNL_MEDABLIBPKP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::JMCCGCBJBNL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JMCCGCBJBNL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JMCCGCBJBNL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JMCCGCBJBNL MEDABLIBPKP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JMCCGCBJBNL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JMCCGCBJBNL_MEDABLIBPKP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
