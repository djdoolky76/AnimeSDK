#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FBDLINOKJLA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FBDLINOKJLA_DDKKJOFODIP_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define FBDLINOKJLA_EBAKKAPANCG_OFFSET UNITYSDK_OFFSET(0x755C70)
#define FBDLINOKJLA_FDAEFNEODIK_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define FBDLINOKJLA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FBDLINOKJLA_LDDDPOFGFDM_OFFSET UNITYSDK_OFFSET(0x755A00)
#define FBDLINOKJLA_OGAEDBOMHEI_OFFSET UNITYSDK_OFFSET(0x758780)
#define FBDLINOKJLA_PJDKFJLINKE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FBDLINOKJLA_PKCIBNAFNHJ_OFFSET UNITYSDK_OFFSET(0x755E40)
#define FBDLINOKJLA_PKOMGKJLKGM_OFFSET UNITYSDK_OFFSET(0x754920)
#define FBDLINOKJLA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FBDLINOKJLA_TypeDefinitionIndex = 15985;

struct alignas(4) FBDLINOKJLA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBDLINOKJLA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FBDLINOKJLA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 PJDKFJLINKE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBDLINOKJLA_PJDKFJLINKE_OFFSET))(this);
	}

	::System::String* FDAEFNEODIK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBDLINOKJLA_FDAEFNEODIK_OFFSET))(this);
	}

	::System::Int32 PKCIBNAFNHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBDLINOKJLA_PKCIBNAFNHJ_OFFSET))(this);
	}

	::System::Int32 OGAEDBOMHEI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBDLINOKJLA_OGAEDBOMHEI_OFFSET))(this);
	}

	::System::Int32 PKOMGKJLKGM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBDLINOKJLA_PKOMGKJLKGM_OFFSET))(this);
	}

	/*
	::FBDLINOKJLA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FBDLINOKJLA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FBDLINOKJLA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* DDKKJOFODIP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBDLINOKJLA_DDKKJOFODIP_OFFSET))(this);
	}

	::System::String* LDDDPOFGFDM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBDLINOKJLA_LDDDPOFGFDM_OFFSET))(this);
	}

	::System::Int32 EBAKKAPANCG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBDLINOKJLA_EBAKKAPANCG_OFFSET))(this);
	}
};
