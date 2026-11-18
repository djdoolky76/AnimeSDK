#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DFAPDAIFFIH_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DFAPDAIFFIH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DFAPDAIFFIH_COPBPCCNEAE_OFFSET UNITYSDK_OFFSET(0x755A00)
#define DFAPDAIFFIH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DFAPDAIFFIH_IDINMHHOOOK_OFFSET UNITYSDK_OFFSET(0x755D20)
#define DFAPDAIFFIH_PIEBMBMBKBA_OFFSET UNITYSDK_OFFSET(0x754B50)
#define DFAPDAIFFIH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DFAPDAIFFIH_TypeDefinitionIndex = 14734;

struct alignas(4) DFAPDAIFFIH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFAPDAIFFIH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFAPDAIFFIH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFAPDAIFFIH_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 IDINMHHOOOK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFAPDAIFFIH_IDINMHHOOOK_OFFSET))(this);
	}

	/*
	::DFAPDAIFFIH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DFAPDAIFFIH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFAPDAIFFIH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* COPBPCCNEAE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFAPDAIFFIH_COPBPCCNEAE_OFFSET))(this);
	}

	::System::Int32 PIEBMBMBKBA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFAPDAIFFIH_PIEBMBMBKBA_OFFSET))(this);
	}
};
