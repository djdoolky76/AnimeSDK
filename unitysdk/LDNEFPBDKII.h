#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LDNEFPBDKII_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LDNEFPBDKII_CAPEBDGEINN_OFFSET UNITYSDK_OFFSET(0x77A7A0)
#define LDNEFPBDKII_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LDNEFPBDKII_GJDHPOOKIPP_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LDNEFPBDKII_HBLOMCFKGOM_OFFSET UNITYSDK_OFFSET(0x755A00)
#define LDNEFPBDKII_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B2FBC50)
#define LDNEFPBDKII___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LDNEFPBDKII_TypeDefinitionIndex = 17471;

struct alignas(4) LDNEFPBDKII
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNEFPBDKII_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LDNEFPBDKII___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::UInt64 CAPEBDGEINN()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNEFPBDKII_CAPEBDGEINN_OFFSET))(this);
	}

	::System::String* HBLOMCFKGOM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNEFPBDKII_HBLOMCFKGOM_OFFSET))(this);
	}

	/*
	static ::LDNEFPBDKII OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LDNEFPBDKII(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LDNEFPBDKII_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::LDNEFPBDKII BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LDNEFPBDKII(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LDNEFPBDKII_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GJDHPOOKIPP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNEFPBDKII_GJDHPOOKIPP_OFFSET))(this);
	}
};
