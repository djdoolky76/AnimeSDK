#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HDDMJBAJBNA_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HDDMJBAJBNA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HDDMJBAJBNA_EFOELIKLAFG_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define HDDMJBAJBNA_GEDCIEFJJFO_OFFSET UNITYSDK_OFFSET(0x754F10)
#define HDDMJBAJBNA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HDDMJBAJBNA_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x756B90)
#define HDDMJBAJBNA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HDDMJBAJBNA_TypeDefinitionIndex = 9861;

struct alignas(4) HDDMJBAJBNA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDMJBAJBNA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HDDMJBAJBNA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDMJBAJBNA_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* GEDCIEFJJFO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDMJBAJBNA_GEDCIEFJJFO_OFFSET))(this);
	}

	/*
	::HDDMJBAJBNA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HDDMJBAJBNA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HDDMJBAJBNA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* EFOELIKLAFG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDMJBAJBNA_EFOELIKLAFG_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDMJBAJBNA_HKELPCLHLEC_OFFSET))(this);
	}
};
