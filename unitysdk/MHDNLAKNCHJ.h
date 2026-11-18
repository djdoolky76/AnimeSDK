#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MHDNLAKNCHJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MHDNLAKNCHJ_CEINMNALLGH_OFFSET UNITYSDK_OFFSET(0x754B50)
#define MHDNLAKNCHJ_ECIBJKDEMON_OFFSET UNITYSDK_OFFSET(0x754970)
#define MHDNLAKNCHJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MHDNLAKNCHJ_GFGFBMBNBLG_OFFSET UNITYSDK_OFFSET(0x755A00)
#define MHDNLAKNCHJ_HBGJANCGEKC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MHDNLAKNCHJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MHDNLAKNCHJ_TypeDefinitionIndex = 15559;

struct alignas(4) MHDNLAKNCHJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHDNLAKNCHJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MHDNLAKNCHJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ECIBJKDEMON()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHDNLAKNCHJ_ECIBJKDEMON_OFFSET))(this);
	}

	::System::String* GFGFBMBNBLG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHDNLAKNCHJ_GFGFBMBNBLG_OFFSET))(this);
	}

	::System::Int32 HBGJANCGEKC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHDNLAKNCHJ_HBGJANCGEKC_OFFSET))(this);
	}

	::System::Int32 CEINMNALLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHDNLAKNCHJ_CEINMNALLGH_OFFSET))(this);
	}

	/*
	::MHDNLAKNCHJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MHDNLAKNCHJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MHDNLAKNCHJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
