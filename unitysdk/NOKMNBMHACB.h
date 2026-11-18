#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NOKMNBMHACB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NOKMNBMHACB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NOKMNBMHACB_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x754F10)
#define NOKMNBMHACB_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define NOKMNBMHACB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NOKMNBMHACB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1C097BA0)
#define NOKMNBMHACB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NOKMNBMHACB_TypeDefinitionIndex = 16140;

struct alignas(4) NOKMNBMHACB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKMNBMHACB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NOKMNBMHACB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NOKMNBMHACB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NOKMNBMHACB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NOKMNBMHACB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::NOKMNBMHACB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NOKMNBMHACB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NOKMNBMHACB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKMNBMHACB_DECMGICKDLH_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKMNBMHACB_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKMNBMHACB_ENJENAJGHFI_OFFSET))(this);
	}
};
