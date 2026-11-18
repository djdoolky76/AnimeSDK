#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GBCPFGCGLDG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GBCPFGCGLDG_DIOFFOEFKIM_OFFSET UNITYSDK_OFFSET(0x756B10)
#define GBCPFGCGLDG_DOPKILFKCHN_OFFSET UNITYSDK_OFFSET(0x758780)
#define GBCPFGCGLDG_EJMIEMEEPOB_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define GBCPFGCGLDG_EOEFOJMNHLO_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define GBCPFGCGLDG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GBCPFGCGLDG_HGOJADDCLCB_OFFSET UNITYSDK_OFFSET(0x755A00)
#define GBCPFGCGLDG_HHDBMKPFHPJ_OFFSET UNITYSDK_OFFSET(0x754B50)
#define GBCPFGCGLDG_IHNAMNANDKB_OFFSET UNITYSDK_OFFSET(0x754F10)
#define GBCPFGCGLDG_NHPIEBNBJKM_OFFSET UNITYSDK_OFFSET(0x757190)
#define GBCPFGCGLDG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A5AEBC0)
#define GBCPFGCGLDG_OBAENKDFBEI_OFFSET UNITYSDK_OFFSET(0x754970)
#define GBCPFGCGLDG_OPLKCNDCOFM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GBCPFGCGLDG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GBCPFGCGLDG_TypeDefinitionIndex = 12334;

struct alignas(4) GBCPFGCGLDG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBCPFGCGLDG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GBCPFGCGLDG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* EJMIEMEEPOB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBCPFGCGLDG_EJMIEMEEPOB_OFFSET))(this);
	}

	::System::Int32 HHDBMKPFHPJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBCPFGCGLDG_HHDBMKPFHPJ_OFFSET))(this);
	}

	::System::String* NHPIEBNBJKM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBCPFGCGLDG_NHPIEBNBJKM_OFFSET))(this);
	}

	::System::Int32 OBAENKDFBEI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBCPFGCGLDG_OBAENKDFBEI_OFFSET))(this);
	}

	::System::Int32 EOEFOJMNHLO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBCPFGCGLDG_EOEFOJMNHLO_OFFSET))(this);
	}

	/*
	static ::GBCPFGCGLDG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GBCPFGCGLDG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GBCPFGCGLDG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 DOPKILFKCHN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBCPFGCGLDG_DOPKILFKCHN_OFFSET))(this);
	}

	/*
	::GBCPFGCGLDG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GBCPFGCGLDG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GBCPFGCGLDG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* IHNAMNANDKB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBCPFGCGLDG_IHNAMNANDKB_OFFSET))(this);
	}

	::System::Int32 OPLKCNDCOFM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBCPFGCGLDG_OPLKCNDCOFM_OFFSET))(this);
	}

	::System::String* HGOJADDCLCB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBCPFGCGLDG_HGOJADDCLCB_OFFSET))(this);
	}

	::System::String* DIOFFOEFKIM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBCPFGCGLDG_DIOFFOEFKIM_OFFSET))(this);
	}
};
