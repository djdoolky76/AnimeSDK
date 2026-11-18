#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DJDCADPMGKF_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DJDCADPMGKF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DJDCADPMGKF_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x756D50)
#define DJDCADPMGKF_DFJBPDIKJAJ_OFFSET UNITYSDK_OFFSET(0x754B50)
#define DJDCADPMGKF_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x756B10)
#define DJDCADPMGKF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DJDCADPMGKF_IGNLEGMHGFJ_OFFSET UNITYSDK_OFFSET(0x754C20)
#define DJDCADPMGKF_MDDPADDDCKN_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define DJDCADPMGKF_OIFKOPIILOO_OFFSET UNITYSDK_OFFSET(0x754F10)
#define DJDCADPMGKF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DJDCADPMGKF_TypeDefinitionIndex = 13644;

struct alignas(4) DJDCADPMGKF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDCADPMGKF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DJDCADPMGKF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* OIFKOPIILOO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDCADPMGKF_OIFKOPIILOO_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDCADPMGKF_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 DFJBPDIKJAJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDCADPMGKF_DFJBPDIKJAJ_OFFSET))(this);
	}

	/*
	::DJDCADPMGKF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DJDCADPMGKF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DJDCADPMGKF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean MDDPADDDCKN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + DJDCADPMGKF_MDDPADDDCKN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDCADPMGKF_DECMGICKDLH_OFFSET))(this);
	}

	::System::Int32 IGNLEGMHGFJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDCADPMGKF_IGNLEGMHGFJ_OFFSET))(this);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDCADPMGKF_ENJENAJGHFI_OFFSET))(this);
	}
};
