#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DFNJAADPFKK_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DFNJAADPFKK_BBJGHAGDKOM_OFFSET UNITYSDK_OFFSET(0x756B90)
#define DFNJAADPFKK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DFNJAADPFKK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DFNJAADPFKK_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x754920)
#define DFNJAADPFKK_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define DFNJAADPFKK_LENCEGIELFL_OFFSET UNITYSDK_OFFSET(0x754F10)
#define DFNJAADPFKK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DFNJAADPFKK_TypeDefinitionIndex = 17316;

struct alignas(4) DFNJAADPFKK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNJAADPFKK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFNJAADPFKK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNJAADPFKK_HKELPCLHLEC_OFFSET))(this);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNJAADPFKK_IFDIOIOCGDP_OFFSET))(this);
	}

	/*
	::DFNJAADPFKK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DFNJAADPFKK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFNJAADPFKK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* LENCEGIELFL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNJAADPFKK_LENCEGIELFL_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNJAADPFKK_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 BBJGHAGDKOM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNJAADPFKK_BBJGHAGDKOM_OFFSET))(this);
	}
};
