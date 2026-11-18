#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KDOCNGIOANC_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KDOCNGIOANC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KDOCNGIOANC_BINHAEMDNDH_OFFSET UNITYSDK_OFFSET(0x755D20)
#define KDOCNGIOANC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KDOCNGIOANC_KGGAFICEEKM_OFFSET UNITYSDK_OFFSET(0x755A00)
#define KDOCNGIOANC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KDOCNGIOANC_TypeDefinitionIndex = 12548;

struct alignas(4) KDOCNGIOANC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOCNGIOANC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDOCNGIOANC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 BINHAEMDNDH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOCNGIOANC_BINHAEMDNDH_OFFSET))(this);
	}

	/*
	::KDOCNGIOANC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KDOCNGIOANC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDOCNGIOANC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOCNGIOANC_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* KGGAFICEEKM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOCNGIOANC_KGGAFICEEKM_OFFSET))(this);
	}
};
