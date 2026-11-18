#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MPPCBEMAPMI_AGFCLOGIPFA_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define MPPCBEMAPMI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MPPCBEMAPMI_FDEALHODMDC_OFFSET UNITYSDK_OFFSET(0x755D20)
#define MPPCBEMAPMI_FFBLHLFBEMC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MPPCBEMAPMI_FOIGILBDMCC_OFFSET UNITYSDK_OFFSET(0x761500)
#define MPPCBEMAPMI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MPPCBEMAPMI_IDPHMJEFAIL_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define MPPCBEMAPMI_JOKAMHIIJJL_OFFSET UNITYSDK_OFFSET(0x754C20)
#define MPPCBEMAPMI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19112460)
#define MPPCBEMAPMI_PMLGDGPMNJI_OFFSET UNITYSDK_OFFSET(0x756B10)
#define MPPCBEMAPMI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MPPCBEMAPMI_TypeDefinitionIndex = 14736;

struct alignas(4) MPPCBEMAPMI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPCBEMAPMI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPPCBEMAPMI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 FDEALHODMDC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPCBEMAPMI_FDEALHODMDC_OFFSET))(this);
	}

	::System::String* PMLGDGPMNJI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPCBEMAPMI_PMLGDGPMNJI_OFFSET))(this);
	}

	/*
	::MPPCBEMAPMI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MPPCBEMAPMI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPPCBEMAPMI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 JOKAMHIIJJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPCBEMAPMI_JOKAMHIIJJL_OFFSET))(this);
	}

	::System::String* IDPHMJEFAIL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPCBEMAPMI_IDPHMJEFAIL_OFFSET))(this);
	}

	::System::Boolean FOIGILBDMCC(::System::Int32 HPMEONKHFGG, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + MPPCBEMAPMI_FOIGILBDMCC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 FFBLHLFBEMC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPCBEMAPMI_FFBLHLFBEMC_OFFSET))(this);
	}

	::System::String* AGFCLOGIPFA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPCBEMAPMI_AGFCLOGIPFA_OFFSET))(this);
	}

	/*
	static ::MPPCBEMAPMI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MPPCBEMAPMI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MPPCBEMAPMI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
