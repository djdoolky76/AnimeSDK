#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KLHCLDPFNCC_AGLFEEAJOMB_OFFSET UNITYSDK_OFFSET(0x757290)
#define KLHCLDPFNCC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KLHCLDPFNCC_CHGAHFDLJFG_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define KLHCLDPFNCC_CPHNNMBPFCG_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KLHCLDPFNCC_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x754F10)
#define KLHCLDPFNCC_DHDIOCOGIDP_OFFSET UNITYSDK_OFFSET(0x754920)
#define KLHCLDPFNCC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KLHCLDPFNCC_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KLHCLDPFNCC_HFJNMACLGFP_OFFSET UNITYSDK_OFFSET(0x7582A0)
#define KLHCLDPFNCC_NIOLACCPKHH_OFFSET UNITYSDK_OFFSET(0x757EA0)
#define KLHCLDPFNCC_NJIHEHNDOAL_OFFSET UNITYSDK_OFFSET(0x756D50)
#define KLHCLDPFNCC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BB05D00)
#define KLHCLDPFNCC_PHHBAMMBKLA_OFFSET UNITYSDK_OFFSET(0x755E40)
#define KLHCLDPFNCC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KLHCLDPFNCC_TypeDefinitionIndex = 11622;

struct alignas(4) KLHCLDPFNCC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHCLDPFNCC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KLHCLDPFNCC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* CHGAHFDLJFG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHCLDPFNCC_CHGAHFDLJFG_OFFSET))(this);
	}

	::System::Int32 CPHNNMBPFCG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHCLDPFNCC_CPHNNMBPFCG_OFFSET))(this);
	}

	/*
	::KLHCLDPFNCC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KLHCLDPFNCC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KLHCLDPFNCC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHCLDPFNCC_DECMGICKDLH_OFFSET))(this);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHCLDPFNCC_GKBAJJACIEA_OFFSET))(this);
	}

	::System::String* NJIHEHNDOAL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHCLDPFNCC_NJIHEHNDOAL_OFFSET))(this);
	}

	/*
	static ::KLHCLDPFNCC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KLHCLDPFNCC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KLHCLDPFNCC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* NIOLACCPKHH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHCLDPFNCC_NIOLACCPKHH_OFFSET))(this);
	}

	::System::String* AGLFEEAJOMB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHCLDPFNCC_AGLFEEAJOMB_OFFSET))(this);
	}

	::System::Int32 PHHBAMMBKLA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHCLDPFNCC_PHHBAMMBKLA_OFFSET))(this);
	}

	::System::Int32 DHDIOCOGIDP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHCLDPFNCC_DHDIOCOGIDP_OFFSET))(this);
	}

	::System::String* HFJNMACLGFP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHCLDPFNCC_HFJNMACLGFP_OFFSET))(this);
	}
};
