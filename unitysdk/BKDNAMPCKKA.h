#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BKDNAMPCKKA_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BKDNAMPCKKA_BDKKGNHJPOF_OFFSET UNITYSDK_OFFSET(0x755C70)
#define BKDNAMPCKKA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BKDNAMPCKKA_DCGJGALIIHB_OFFSET UNITYSDK_OFFSET(0x756B10)
#define BKDNAMPCKKA_DGFAJDNHCIJ_OFFSET UNITYSDK_OFFSET(0x755D20)
#define BKDNAMPCKKA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BKDNAMPCKKA_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x754970)
#define BKDNAMPCKKA_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x756B90)
#define BKDNAMPCKKA_NENDAECBCEM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define BKDNAMPCKKA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BKDNAMPCKKA_TypeDefinitionIndex = 14238;

struct alignas(4) BKDNAMPCKKA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKDNAMPCKKA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BKDNAMPCKKA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKDNAMPCKKA_HKELPCLHLEC_OFFSET))(this);
	}

	::System::String* DCGJGALIIHB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKDNAMPCKKA_DCGJGALIIHB_OFFSET))(this);
	}

	::System::Int32 NENDAECBCEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKDNAMPCKKA_NENDAECBCEM_OFFSET))(this);
	}

	/*
	::BKDNAMPCKKA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BKDNAMPCKKA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BKDNAMPCKKA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKDNAMPCKKA_LNOBBAIGKJL_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKDNAMPCKKA_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 BDKKGNHJPOF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKDNAMPCKKA_BDKKGNHJPOF_OFFSET))(this);
	}

	::System::Int32 DGFAJDNHCIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKDNAMPCKKA_DGFAJDNHCIJ_OFFSET))(this);
	}
};
