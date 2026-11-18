#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define ENAPGGCGJGD_BFHNOPHEGKC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ENAPGGCGJGD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ENAPGGCGJGD_DGFAJDNHCIJ_OFFSET UNITYSDK_OFFSET(0x754B50)
#define ENAPGGCGJGD_EIJAEEFFKMB_OFFSET UNITYSDK_OFFSET(0x756B10)
#define ENAPGGCGJGD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ENAPGGCGJGD_NOCFIMNBPGD_OFFSET UNITYSDK_OFFSET(0x755D20)
#define ENAPGGCGJGD_OGNAPAKCHCO_OFFSET UNITYSDK_OFFSET(0x755A00)
#define ENAPGGCGJGD_PCHMHIPALHD_OFFSET UNITYSDK_OFFSET(0x756D50)
#define ENAPGGCGJGD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ENAPGGCGJGD_TypeDefinitionIndex = 11740;

struct alignas(4) ENAPGGCGJGD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAPGGCGJGD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ENAPGGCGJGD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::ENAPGGCGJGD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ENAPGGCGJGD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ENAPGGCGJGD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 BFHNOPHEGKC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAPGGCGJGD_BFHNOPHEGKC_OFFSET))(this);
	}

	::System::String* PCHMHIPALHD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAPGGCGJGD_PCHMHIPALHD_OFFSET))(this);
	}

	::System::Int32 NOCFIMNBPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAPGGCGJGD_NOCFIMNBPGD_OFFSET))(this);
	}

	::System::Int32 DGFAJDNHCIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAPGGCGJGD_DGFAJDNHCIJ_OFFSET))(this);
	}

	::System::String* EIJAEEFFKMB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAPGGCGJGD_EIJAEEFFKMB_OFFSET))(this);
	}

	::System::String* OGNAPAKCHCO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAPGGCGJGD_OGNAPAKCHCO_OFFSET))(this);
	}
};
