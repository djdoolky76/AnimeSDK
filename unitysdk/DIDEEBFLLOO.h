#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DIDEEBFLLOO_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DIDEEBFLLOO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DIDEEBFLLOO_ENHACCOJFDN_OFFSET UNITYSDK_OFFSET(0x755A00)
#define DIDEEBFLLOO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DIDEEBFLLOO_IGKFAFBGBAP_OFFSET UNITYSDK_OFFSET(0x754B50)
#define DIDEEBFLLOO_LNFNKHOEFHJ_OFFSET UNITYSDK_OFFSET(0x754F10)
#define DIDEEBFLLOO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DIDEEBFLLOO_TypeDefinitionIndex = 15716;

struct alignas(4) DIDEEBFLLOO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIDEEBFLLOO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DIDEEBFLLOO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIDEEBFLLOO_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* LNFNKHOEFHJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIDEEBFLLOO_LNFNKHOEFHJ_OFFSET))(this);
	}

	/*
	::DIDEEBFLLOO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DIDEEBFLLOO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DIDEEBFLLOO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 IGKFAFBGBAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIDEEBFLLOO_IGKFAFBGBAP_OFFSET))(this);
	}

	::System::String* ENHACCOJFDN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIDEEBFLLOO_ENHACCOJFDN_OFFSET))(this);
	}
};
