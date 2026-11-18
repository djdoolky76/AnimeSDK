#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PLNEDOHBMBN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PLNEDOHBMBN_DAMPLEFDIOB_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PLNEDOHBMBN_FBMIEJIGIED_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define PLNEDOHBMBN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PLNEDOHBMBN_IPDIAPFGABC_OFFSET UNITYSDK_OFFSET(0x755D20)
#define PLNEDOHBMBN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PLNEDOHBMBN_TypeDefinitionIndex = 16697;

struct alignas(4) PLNEDOHBMBN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLNEDOHBMBN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PLNEDOHBMBN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 IPDIAPFGABC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLNEDOHBMBN_IPDIAPFGABC_OFFSET))(this);
	}

	::System::Int32 DAMPLEFDIOB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLNEDOHBMBN_DAMPLEFDIOB_OFFSET))(this);
	}

	::System::String* FBMIEJIGIED()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLNEDOHBMBN_FBMIEJIGIED_OFFSET))(this);
	}

	/*
	::PLNEDOHBMBN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PLNEDOHBMBN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PLNEDOHBMBN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
