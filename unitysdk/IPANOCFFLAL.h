#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define IPANOCFFLAL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IPANOCFFLAL_CLLDENAMKKO_OFFSET UNITYSDK_OFFSET(0x756B10)
#define IPANOCFFLAL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IPANOCFFLAL_HOHEJCGOOJN_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IPANOCFFLAL_OEDMJLPOKMO_OFFSET UNITYSDK_OFFSET(0x758780)
#define IPANOCFFLAL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IPANOCFFLAL_TypeDefinitionIndex = 9842;

struct alignas(4) IPANOCFFLAL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPANOCFFLAL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IPANOCFFLAL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HOHEJCGOOJN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPANOCFFLAL_HOHEJCGOOJN_OFFSET))(this);
	}

	::System::Int32 OEDMJLPOKMO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPANOCFFLAL_OEDMJLPOKMO_OFFSET))(this);
	}

	::System::String* CLLDENAMKKO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPANOCFFLAL_CLLDENAMKKO_OFFSET))(this);
	}

	/*
	::IPANOCFFLAL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IPANOCFFLAL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IPANOCFFLAL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
