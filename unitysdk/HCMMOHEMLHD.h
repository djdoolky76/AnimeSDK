#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HCMMOHEMLHD_BDGCAOBNDHJ_OFFSET UNITYSDK_OFFSET(0x756B90)
#define HCMMOHEMLHD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HCMMOHEMLHD_EJOPDFPAHNA_OFFSET UNITYSDK_OFFSET(0x754F10)
#define HCMMOHEMLHD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HCMMOHEMLHD_MEKEHBEEBPO_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HCMMOHEMLHD_PMJHGHDJEAJ_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define HCMMOHEMLHD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HCMMOHEMLHD_TypeDefinitionIndex = 15809;

struct alignas(4) HCMMOHEMLHD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCMMOHEMLHD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCMMOHEMLHD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* PMJHGHDJEAJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCMMOHEMLHD_PMJHGHDJEAJ_OFFSET))(this);
	}

	/*
	::HCMMOHEMLHD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HCMMOHEMLHD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCMMOHEMLHD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* EJOPDFPAHNA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCMMOHEMLHD_EJOPDFPAHNA_OFFSET))(this);
	}

	::System::Int32 BDGCAOBNDHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCMMOHEMLHD_BDGCAOBNDHJ_OFFSET))(this);
	}

	::System::Int32 MEKEHBEEBPO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCMMOHEMLHD_MEKEHBEEBPO_OFFSET))(this);
	}
};
