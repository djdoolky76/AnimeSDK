#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define AKOEDJNDALO_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define AKOEDJNDALO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AKOEDJNDALO_ELPFAFFJNKI_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define AKOEDJNDALO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AKOEDJNDALO_GNMBEBDBCME_OFFSET UNITYSDK_OFFSET(0x758590)
#define AKOEDJNDALO_LFKAFKFLGDA_OFFSET UNITYSDK_OFFSET(0x756B10)
#define AKOEDJNDALO_PBFKHLEHIGG_OFFSET UNITYSDK_OFFSET(0x77A7A0)
#define AKOEDJNDALO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AKOEDJNDALO_TypeDefinitionIndex = 9298;

struct alignas(4) AKOEDJNDALO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOEDJNDALO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AKOEDJNDALO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::UInt64 PBFKHLEHIGG()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOEDJNDALO_PBFKHLEHIGG_OFFSET))(this);
	}

	/*
	::AKOEDJNDALO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AKOEDJNDALO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AKOEDJNDALO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* ELPFAFFJNKI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOEDJNDALO_ELPFAFFJNKI_OFFSET))(this);
	}

	::System::Boolean GNMBEBDBCME()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOEDJNDALO_GNMBEBDBCME_OFFSET))(this);
	}

	::System::UInt32 ACOEONABOJL()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOEDJNDALO_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* LFKAFKFLGDA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOEDJNDALO_LFKAFKFLGDA_OFFSET))(this);
	}
};
