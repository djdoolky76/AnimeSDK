#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define APFLNKKMNAP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define APFLNKKMNAP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define APFLNKKMNAP_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x757290)
#define APFLNKKMNAP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define APFLNKKMNAP_KOCFBOHJLHC_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define APFLNKKMNAP_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x755890)
#define APFLNKKMNAP_MGEOBCHPJCF_OFFSET UNITYSDK_OFFSET(0x755D20)
#define APFLNKKMNAP_MKELBHKBKDC_OFFSET UNITYSDK_OFFSET(0x756B10)
#define APFLNKKMNAP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1C50E090)
#define APFLNKKMNAP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int APFLNKKMNAP_TypeDefinitionIndex = 15005;

struct alignas(4) APFLNKKMNAP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + APFLNKKMNAP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + APFLNKKMNAP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APFLNKKMNAP_LNOBBAIGKJL_OFFSET))(this);
	}

	/*
	static ::APFLNKKMNAP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::APFLNKKMNAP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + APFLNKKMNAP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* KOCFBOHJLHC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + APFLNKKMNAP_KOCFBOHJLHC_OFFSET))(this);
	}

	::System::Int32 MGEOBCHPJCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APFLNKKMNAP_MGEOBCHPJCF_OFFSET))(this);
	}

	::System::String* MKELBHKBKDC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + APFLNKKMNAP_MKELBHKBKDC_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APFLNKKMNAP_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::APFLNKKMNAP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::APFLNKKMNAP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + APFLNKKMNAP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + APFLNKKMNAP_ENJENAJGHFI_OFFSET))(this);
	}
};
