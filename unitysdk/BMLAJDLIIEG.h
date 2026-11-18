#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define BMLAJDLIIEG_AABCFGOECAA_OFFSET UNITYSDK_OFFSET(0x756B90)
#define BMLAJDLIIEG_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BMLAJDLIIEG_AOCFMIBAMBN_OFFSET UNITYSDK_OFFSET(0x754B50)
#define BMLAJDLIIEG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BMLAJDLIIEG_DALMDKNOCHM_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define BMLAJDLIIEG_FILIKHJMENK_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define BMLAJDLIIEG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BMLAJDLIIEG_GGLPBOIELNO_OFFSET UNITYSDK_OFFSET(0x758780)
#define BMLAJDLIIEG_GJABEKMPJIL_OFFSET UNITYSDK_OFFSET(0x755890)
#define BMLAJDLIIEG_JMBMOLJDEGH_OFFSET UNITYSDK_OFFSET(0x755C70)
#define BMLAJDLIIEG_JPOIKHHGKJO_OFFSET UNITYSDK_OFFSET(0x755D20)
#define BMLAJDLIIEG_MNBJALGPACL_OFFSET UNITYSDK_OFFSET(0x755E40)
#define BMLAJDLIIEG_NDBDAMIIMAI_OFFSET UNITYSDK_OFFSET(0x754920)
#define BMLAJDLIIEG_OKFKIPJMGPI_OFFSET UNITYSDK_OFFSET(0x756440)
#define BMLAJDLIIEG_OPOEPPJCFOM_OFFSET UNITYSDK_OFFSET(0x756490)
#define BMLAJDLIIEG_PMMDDHNILHL_OFFSET UNITYSDK_OFFSET(0x7560E0)
#define BMLAJDLIIEG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BMLAJDLIIEG_TypeDefinitionIndex = 12923;

struct alignas(4) BMLAJDLIIEG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLAJDLIIEG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BMLAJDLIIEG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean OPOEPPJCFOM(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + BMLAJDLIIEG_OPOEPPJCFOM_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GGLPBOIELNO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLAJDLIIEG_GGLPBOIELNO_OFFSET))(this);
	}

	::System::Int32 OKFKIPJMGPI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLAJDLIIEG_OKFKIPJMGPI_OFFSET))(this);
	}

	::System::Int32 MNBJALGPACL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLAJDLIIEG_MNBJALGPACL_OFFSET))(this);
	}

	::System::Int32 PMMDDHNILHL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLAJDLIIEG_PMMDDHNILHL_OFFSET))(this);
	}

	::System::Int32 AOCFMIBAMBN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLAJDLIIEG_AOCFMIBAMBN_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLAJDLIIEG_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 JPOIKHHGKJO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLAJDLIIEG_JPOIKHHGKJO_OFFSET))(this);
	}

	/*
	::BMLAJDLIIEG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BMLAJDLIIEG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BMLAJDLIIEG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 FILIKHJMENK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLAJDLIIEG_FILIKHJMENK_OFFSET))(this);
	}

	::System::Int32 GJABEKMPJIL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLAJDLIIEG_GJABEKMPJIL_OFFSET))(this);
	}

	::System::Int32 JMBMOLJDEGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLAJDLIIEG_JMBMOLJDEGH_OFFSET))(this);
	}

	::System::Int32 NDBDAMIIMAI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLAJDLIIEG_NDBDAMIIMAI_OFFSET))(this);
	}

	::System::Int32 DALMDKNOCHM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLAJDLIIEG_DALMDKNOCHM_OFFSET))(this);
	}

	::System::Int32 AABCFGOECAA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLAJDLIIEG_AABCFGOECAA_OFFSET))(this);
	}
};
