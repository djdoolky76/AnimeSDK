#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DAHLPBOFCLN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DAHLPBOFCLN_DIDMBFLIJFM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DAHLPBOFCLN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DAHLPBOFCLN_MMELOEPFJPG_OFFSET UNITYSDK_OFFSET(0x754F10)
#define DAHLPBOFCLN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DAHLPBOFCLN_TypeDefinitionIndex = 13150;

struct alignas(4) DAHLPBOFCLN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAHLPBOFCLN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DAHLPBOFCLN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 DIDMBFLIJFM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAHLPBOFCLN_DIDMBFLIJFM_OFFSET))(this);
	}

	::System::String* MMELOEPFJPG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAHLPBOFCLN_MMELOEPFJPG_OFFSET))(this);
	}

	/*
	::DAHLPBOFCLN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DAHLPBOFCLN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DAHLPBOFCLN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
