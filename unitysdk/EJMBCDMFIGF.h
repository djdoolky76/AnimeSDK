#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define EJMBCDMFIGF_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EJMBCDMFIGF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EJMBCDMFIGF_EFOELIKLAFG_OFFSET UNITYSDK_OFFSET(0x756B10)
#define EJMBCDMFIGF_GEDCIEFJJFO_OFFSET UNITYSDK_OFFSET(0x756D50)
#define EJMBCDMFIGF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EJMBCDMFIGF_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x754B50)
#define EJMBCDMFIGF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EJMBCDMFIGF_TypeDefinitionIndex = 11329;

struct alignas(4) EJMBCDMFIGF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMBCDMFIGF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EJMBCDMFIGF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* EFOELIKLAFG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMBCDMFIGF_EFOELIKLAFG_OFFSET))(this);
	}

	::System::String* GEDCIEFJJFO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMBCDMFIGF_GEDCIEFJJFO_OFFSET))(this);
	}

	/*
	::EJMBCDMFIGF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EJMBCDMFIGF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EJMBCDMFIGF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMBCDMFIGF_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMBCDMFIGF_ACOEONABOJL_OFFSET))(this);
	}
};
