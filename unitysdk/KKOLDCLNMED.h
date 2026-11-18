#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define KKOLDCLNMED_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KKOLDCLNMED_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KKOLDCLNMED_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KKOLDCLNMED_ONFGLHFDEED_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KKOLDCLNMED_PJNOALJDJLA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define KKOLDCLNMED___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KKOLDCLNMED_TypeDefinitionIndex = 17180;

struct alignas(4) KKOLDCLNMED
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKOLDCLNMED_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KKOLDCLNMED___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::KKOLDCLNMED BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KKOLDCLNMED(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KKOLDCLNMED_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 PJNOALJDJLA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKOLDCLNMED_PJNOALJDJLA_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKOLDCLNMED_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 ONFGLHFDEED()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKOLDCLNMED_ONFGLHFDEED_OFFSET))(this);
	}
};
