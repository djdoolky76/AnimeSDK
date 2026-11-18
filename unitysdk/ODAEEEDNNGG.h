#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define ODAEEEDNNGG_ACBLCCEGPHM_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define ODAEEEDNNGG_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ODAEEEDNNGG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ODAEEEDNNGG_DGFAJDNHCIJ_OFFSET UNITYSDK_OFFSET(0x755190)
#define ODAEEEDNNGG_FHPPMOCBAGF_OFFSET UNITYSDK_OFFSET(0x754970)
#define ODAEEEDNNGG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ODAEEEDNNGG_HJFCIELMJPA_OFFSET UNITYSDK_OFFSET(0x755C70)
#define ODAEEEDNNGG_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x758780)
#define ODAEEEDNNGG_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x755A00)
#define ODAEEEDNNGG_JGGEFFJEBHN_OFFSET UNITYSDK_OFFSET(0x756B10)
#define ODAEEEDNNGG_NENDAECBCEM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define ODAEEEDNNGG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1AB26B00)
#define ODAEEEDNNGG_PDCILMNLHDD_OFFSET UNITYSDK_OFFSET(0x755E40)
#define ODAEEEDNNGG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ODAEEEDNNGG_TypeDefinitionIndex = 15543;

struct alignas(4) ODAEEEDNNGG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODAEEEDNNGG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ODAEEEDNNGG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODAEEEDNNGG_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 PDCILMNLHDD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODAEEEDNNGG_PDCILMNLHDD_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODAEEEDNNGG_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Int32 DGFAJDNHCIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODAEEEDNNGG_DGFAJDNHCIJ_OFFSET))(this);
	}

	::System::Int32 HJFCIELMJPA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODAEEEDNNGG_HJFCIELMJPA_OFFSET))(this);
	}

	::System::String* JGGEFFJEBHN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODAEEEDNNGG_JGGEFFJEBHN_OFFSET))(this);
	}

	::System::Int32 FHPPMOCBAGF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODAEEEDNNGG_FHPPMOCBAGF_OFFSET))(this);
	}

	/*
	::ODAEEEDNNGG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ODAEEEDNNGG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ODAEEEDNNGG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODAEEEDNNGG_IFDIOIOCGDP_OFFSET))(this);
	}

	/*
	static ::ODAEEEDNNGG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::ODAEEEDNNGG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + ODAEEEDNNGG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 NENDAECBCEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODAEEEDNNGG_NENDAECBCEM_OFFSET))(this);
	}

	::System::String* ACBLCCEGPHM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODAEEEDNNGG_ACBLCCEGPHM_OFFSET))(this);
	}
};
