#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HPGOLEGJLKP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HPGOLEGJLKP_DDMMHALCALH_OFFSET UNITYSDK_OFFSET(0x756D50)
#define HPGOLEGJLKP_DEADKCLMNAL_OFFSET UNITYSDK_OFFSET(0x7563E0)
#define HPGOLEGJLKP_DFKECCCPIFI_OFFSET UNITYSDK_OFFSET(0x755A00)
#define HPGOLEGJLKP_EEGNKLECAMK_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HPGOLEGJLKP_FIANNPJGFCP_OFFSET UNITYSDK_OFFSET(0x756780)
#define HPGOLEGJLKP_GEHGDCIACNA_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define HPGOLEGJLKP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HPGOLEGJLKP_INAOJPENMHJ_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define HPGOLEGJLKP_MIPLCHFABNA_OFFSET UNITYSDK_OFFSET(0x755E40)
#define HPGOLEGJLKP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HPGOLEGJLKP_TypeDefinitionIndex = 10286;

struct alignas(4) HPGOLEGJLKP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGOLEGJLKP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPGOLEGJLKP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* DFKECCCPIFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGOLEGJLKP_DFKECCCPIFI_OFFSET))(this);
	}

	::System::String* DDMMHALCALH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGOLEGJLKP_DDMMHALCALH_OFFSET))(this);
	}

	/*
	::HPGOLEGJLKP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HPGOLEGJLKP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPGOLEGJLKP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 DEADKCLMNAL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGOLEGJLKP_DEADKCLMNAL_OFFSET))(this);
	}

	::System::Int32 EEGNKLECAMK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGOLEGJLKP_EEGNKLECAMK_OFFSET))(this);
	}

	::System::Int32 MIPLCHFABNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGOLEGJLKP_MIPLCHFABNA_OFFSET))(this);
	}

	::System::Boolean FIANNPJGFCP(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HPGOLEGJLKP_FIANNPJGFCP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* INAOJPENMHJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGOLEGJLKP_INAOJPENMHJ_OFFSET))(this);
	}

	::System::String* GEHGDCIACNA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGOLEGJLKP_GEHGDCIACNA_OFFSET))(this);
	}
};
