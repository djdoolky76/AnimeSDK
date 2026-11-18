#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define ENGCEOLBNIM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ENGCEOLBNIM_BDJKFLFLJNC_OFFSET UNITYSDK_OFFSET(0x754F10)
#define ENGCEOLBNIM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ENGCEOLBNIM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ENGCEOLBNIM_MFPMIFLLCAJ_OFFSET UNITYSDK_OFFSET(0x754B50)
#define ENGCEOLBNIM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ENGCEOLBNIM_TypeDefinitionIndex = 11588;

struct alignas(4) ENGCEOLBNIM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENGCEOLBNIM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ENGCEOLBNIM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* BDJKFLFLJNC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENGCEOLBNIM_BDJKFLFLJNC_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENGCEOLBNIM_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 MFPMIFLLCAJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENGCEOLBNIM_MFPMIFLLCAJ_OFFSET))(this);
	}

	/*
	::ENGCEOLBNIM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ENGCEOLBNIM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ENGCEOLBNIM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
