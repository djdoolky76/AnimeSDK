#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KABMEPOLMFN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KABMEPOLMFN_CLLDENAMKKO_OFFSET UNITYSDK_OFFSET(0x754F10)
#define KABMEPOLMFN_DOGDEBIANIP_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define KABMEPOLMFN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KABMEPOLMFN_IJBGEKCMADI_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KABMEPOLMFN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KABMEPOLMFN_TypeDefinitionIndex = 9291;

struct alignas(4) KABMEPOLMFN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KABMEPOLMFN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KABMEPOLMFN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* CLLDENAMKKO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KABMEPOLMFN_CLLDENAMKKO_OFFSET))(this);
	}

	::System::String* DOGDEBIANIP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KABMEPOLMFN_DOGDEBIANIP_OFFSET))(this);
	}

	/*
	::KABMEPOLMFN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KABMEPOLMFN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KABMEPOLMFN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 IJBGEKCMADI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KABMEPOLMFN_IJBGEKCMADI_OFFSET))(this);
	}
};
