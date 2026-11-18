#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HCPOOPKNLOC_BAEOMCJEMPP_OFFSET UNITYSDK_OFFSET(0x754F10)
#define HCPOOPKNLOC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HCPOOPKNLOC_EJHGJLOPGCH_OFFSET UNITYSDK_OFFSET(0x756B10)
#define HCPOOPKNLOC_EPBDFBNKOCD_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HCPOOPKNLOC_GCMKEDALHHL_OFFSET UNITYSDK_OFFSET(0x756640)
#define HCPOOPKNLOC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HCPOOPKNLOC_GKOJLLMAINA_OFFSET UNITYSDK_OFFSET(0x755710)
#define HCPOOPKNLOC_GMHDMLDOHDO_OFFSET UNITYSDK_OFFSET(0x756280)
#define HCPOOPKNLOC_JILFNFGEDMF_OFFSET UNITYSDK_OFFSET(0x755A00)
#define HCPOOPKNLOC_JLNDCDNIOJI_OFFSET UNITYSDK_OFFSET(0x755570)
#define HCPOOPKNLOC_KHJMIGHIKIB_OFFSET UNITYSDK_OFFSET(0x763920)
#define HCPOOPKNLOC_KJCIHLKLELL_OFFSET UNITYSDK_OFFSET(0x758320)
#define HCPOOPKNLOC_MAJAEKAKMNG_OFFSET UNITYSDK_OFFSET(0x757E20)
#define HCPOOPKNLOC_MLJODBEJAAL_OFFSET UNITYSDK_OFFSET(0x757760)
#define HCPOOPKNLOC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x160F0970)
#define HCPOOPKNLOC_OFHKKELFFEP_OFFSET UNITYSDK_OFFSET(0x758780)
#define HCPOOPKNLOC_PODOKDJNGBN_OFFSET UNITYSDK_OFFSET(0x757330)
#define HCPOOPKNLOC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HCPOOPKNLOC_TypeDefinitionIndex = 11606;

struct alignas(4) HCPOOPKNLOC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPOOPKNLOC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCPOOPKNLOC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* BAEOMCJEMPP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPOOPKNLOC_BAEOMCJEMPP_OFFSET))(this);
	}

	::System::String* JLNDCDNIOJI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPOOPKNLOC_JLNDCDNIOJI_OFFSET))(this);
	}

	::System::Int32 PODOKDJNGBN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPOOPKNLOC_PODOKDJNGBN_OFFSET))(this);
	}

	::System::String* GKOJLLMAINA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPOOPKNLOC_GKOJLLMAINA_OFFSET))(this);
	}

	::System::String* EJHGJLOPGCH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPOOPKNLOC_EJHGJLOPGCH_OFFSET))(this);
	}

	::System::Int32 OFHKKELFFEP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPOOPKNLOC_OFHKKELFFEP_OFFSET))(this);
	}

	::System::Int32 EPBDFBNKOCD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPOOPKNLOC_EPBDFBNKOCD_OFFSET))(this);
	}

	/*
	static ::HCPOOPKNLOC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HCPOOPKNLOC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HCPOOPKNLOC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 GMHDMLDOHDO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPOOPKNLOC_GMHDMLDOHDO_OFFSET))(this);
	}

	::System::String* MLJODBEJAAL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPOOPKNLOC_MLJODBEJAAL_OFFSET))(this);
	}

	::System::Boolean GCMKEDALHHL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HCPOOPKNLOC_GCMKEDALHHL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* JILFNFGEDMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPOOPKNLOC_JILFNFGEDMF_OFFSET))(this);
	}

	::System::String* MAJAEKAKMNG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPOOPKNLOC_MAJAEKAKMNG_OFFSET))(this);
	}

	/*
	::HCPOOPKNLOC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HCPOOPKNLOC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCPOOPKNLOC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean KHJMIGHIKIB(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + HCPOOPKNLOC_KHJMIGHIKIB_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::String* KJCIHLKLELL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPOOPKNLOC_KJCIHLKLELL_OFFSET))(this);
	}
};
