#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GGAHAPLOJNH_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GGAHAPLOJNH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GGAHAPLOJNH_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x754F10)
#define GGAHAPLOJNH_DFJBPDIKJAJ_OFFSET UNITYSDK_OFFSET(0x754920)
#define GGAHAPLOJNH_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define GGAHAPLOJNH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GGAHAPLOJNH_IGNLEGMHGFJ_OFFSET UNITYSDK_OFFSET(0x754DB0)
#define GGAHAPLOJNH_MDDPADDDCKN_OFFSET UNITYSDK_OFFSET(0x754A70)
#define GGAHAPLOJNH_OIFKOPIILOO_OFFSET UNITYSDK_OFFSET(0x755A00)
#define GGAHAPLOJNH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GGAHAPLOJNH_TypeDefinitionIndex = 11566;

struct alignas(4) GGAHAPLOJNH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGAHAPLOJNH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GGAHAPLOJNH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGAHAPLOJNH_ENJENAJGHFI_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGAHAPLOJNH_DECMGICKDLH_OFFSET))(this);
	}

	::System::String* OIFKOPIILOO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGAHAPLOJNH_OIFKOPIILOO_OFFSET))(this);
	}

	/*
	::GGAHAPLOJNH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GGAHAPLOJNH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GGAHAPLOJNH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGAHAPLOJNH_ACOEONABOJL_OFFSET))(this);
	}

	::System::Boolean MDDPADDDCKN(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + GGAHAPLOJNH_MDDPADDDCKN_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 DFJBPDIKJAJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGAHAPLOJNH_DFJBPDIKJAJ_OFFSET))(this);
	}

	::System::Int32 IGNLEGMHGFJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGAHAPLOJNH_IGNLEGMHGFJ_OFFSET))(this);
	}
};
