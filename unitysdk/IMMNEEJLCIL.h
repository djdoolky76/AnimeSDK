#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define IMMNEEJLCIL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IMMNEEJLCIL_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define IMMNEEJLCIL_DGFAJDNHCIJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IMMNEEJLCIL_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x754F10)
#define IMMNEEJLCIL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IMMNEEJLCIL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B62A8D0)
#define IMMNEEJLCIL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IMMNEEJLCIL_TypeDefinitionIndex = 13557;

struct alignas(4) IMMNEEJLCIL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMNEEJLCIL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IMMNEEJLCIL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::IMMNEEJLCIL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IMMNEEJLCIL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IMMNEEJLCIL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMNEEJLCIL_ENJENAJGHFI_OFFSET))(this);
	}

	::System::Int32 DGFAJDNHCIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMNEEJLCIL_DGFAJDNHCIJ_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMNEEJLCIL_DECMGICKDLH_OFFSET))(this);
	}

	/*
	::IMMNEEJLCIL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IMMNEEJLCIL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IMMNEEJLCIL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
