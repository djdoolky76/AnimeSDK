#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MOJELINEEHB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MOJELINEEHB_CIKGGPBDAFN_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define MOJELINEEHB_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x756D50)
#define MOJELINEEHB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MOJELINEEHB_HINJEHLELNG_OFFSET UNITYSDK_OFFSET(0x7E24F0)
#define MOJELINEEHB_LHNJEKLPMID_OFFSET UNITYSDK_OFFSET(0x756B90)
#define MOJELINEEHB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1AB114C0)
#define MOJELINEEHB_PKOMGKJLKGM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MOJELINEEHB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MOJELINEEHB_TypeDefinitionIndex = 16427;

struct alignas(4) MOJELINEEHB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJELINEEHB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MOJELINEEHB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJELINEEHB_DECMGICKDLH_OFFSET))(this);
	}

	::System::String* CIKGGPBDAFN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJELINEEHB_CIKGGPBDAFN_OFFSET))(this);
	}

	/*
	::MOJELINEEHB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MOJELINEEHB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MOJELINEEHB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MOJELINEEHB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MOJELINEEHB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOJELINEEHB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean HINJEHLELNG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJELINEEHB_HINJEHLELNG_OFFSET))(this);
	}

	::System::Int32 PKOMGKJLKGM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJELINEEHB_PKOMGKJLKGM_OFFSET))(this);
	}

	::System::Int32 LHNJEKLPMID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJELINEEHB_LHNJEKLPMID_OFFSET))(this);
	}
};
