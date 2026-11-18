#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BMEBEFKCLDP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BMEBEFKCLDP_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x755D20)
#define BMEBEFKCLDP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BMEBEFKCLDP_HKJCDODCCAG_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BMEBEFKCLDP_LPHONAJLEJL_OFFSET UNITYSDK_OFFSET(0x754B50)
#define BMEBEFKCLDP_OBMJDFGPEHE_OFFSET UNITYSDK_OFFSET(0x756B90)
#define BMEBEFKCLDP_OEEKMIPCMMK_OFFSET UNITYSDK_OFFSET(0x756D50)
#define BMEBEFKCLDP_PIOGMFCHDHK_OFFSET UNITYSDK_OFFSET(0x756B10)
#define BMEBEFKCLDP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BMEBEFKCLDP_TypeDefinitionIndex = 13920;

struct alignas(4) BMEBEFKCLDP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMEBEFKCLDP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BMEBEFKCLDP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* PIOGMFCHDHK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMEBEFKCLDP_PIOGMFCHDHK_OFFSET))(this);
	}

	/*
	::BMEBEFKCLDP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BMEBEFKCLDP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BMEBEFKCLDP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMEBEFKCLDP_DNKLBHKEDEM_OFFSET))(this);
	}

	::System::Int32 HKJCDODCCAG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMEBEFKCLDP_HKJCDODCCAG_OFFSET))(this);
	}

	::System::Int32 LPHONAJLEJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMEBEFKCLDP_LPHONAJLEJL_OFFSET))(this);
	}

	::System::String* OEEKMIPCMMK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMEBEFKCLDP_OEEKMIPCMMK_OFFSET))(this);
	}

	::System::Int32 OBMJDFGPEHE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMEBEFKCLDP_OBMJDFGPEHE_OFFSET))(this);
	}
};
