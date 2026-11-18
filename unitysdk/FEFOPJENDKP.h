#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FEFOPJENDKP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FEFOPJENDKP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FEFOPJENDKP_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x756B10)
#define FEFOPJENDKP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FEFOPJENDKP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FEFOPJENDKP_TypeDefinitionIndex = 16242;

struct alignas(4) FEFOPJENDKP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEFOPJENDKP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FEFOPJENDKP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEFOPJENDKP_ENJENAJGHFI_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEFOPJENDKP_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::FEFOPJENDKP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FEFOPJENDKP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FEFOPJENDKP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
