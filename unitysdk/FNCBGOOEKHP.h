#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FNCBGOOEKHP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FNCBGOOEKHP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FNCBGOOEKHP_CLOCMMBKNOE_OFFSET UNITYSDK_OFFSET(0x756B10)
#define FNCBGOOEKHP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FNCBGOOEKHP_ILGJMGDFGPG_OFFSET UNITYSDK_OFFSET(0x756D50)
#define FNCBGOOEKHP_IOCNEHIGCOA_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define FNCBGOOEKHP_KPDGMKDDMAM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define FNCBGOOEKHP_LACJOALKGMI_OFFSET UNITYSDK_OFFSET(0x756B90)
#define FNCBGOOEKHP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FNCBGOOEKHP_TypeDefinitionIndex = 9918;

struct alignas(4) FNCBGOOEKHP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNCBGOOEKHP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNCBGOOEKHP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LACJOALKGMI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNCBGOOEKHP_LACJOALKGMI_OFFSET))(this);
	}

	::System::String* CLOCMMBKNOE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNCBGOOEKHP_CLOCMMBKNOE_OFFSET))(this);
	}

	::System::Int32 KPDGMKDDMAM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNCBGOOEKHP_KPDGMKDDMAM_OFFSET))(this);
	}

	::System::String* IOCNEHIGCOA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNCBGOOEKHP_IOCNEHIGCOA_OFFSET))(this);
	}

	/*
	::FNCBGOOEKHP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FNCBGOOEKHP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNCBGOOEKHP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNCBGOOEKHP_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* ILGJMGDFGPG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNCBGOOEKHP_ILGJMGDFGPG_OFFSET))(this);
	}
};
