#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define OIPDHKLENKB_AFLEMGIBLIA_OFFSET UNITYSDK_OFFSET(0x755670)
#define OIPDHKLENKB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OIPDHKLENKB_DKAONEAPDLN_OFFSET UNITYSDK_OFFSET(0x757C10)
#define OIPDHKLENKB_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OIPDHKLENKB_EECGBKFBHJG_OFFSET UNITYSDK_OFFSET(0x755840)
#define OIPDHKLENKB_EHEPKBICOPP_OFFSET UNITYSDK_OFFSET(0x755190)
#define OIPDHKLENKB_FNMIMMEOMFI_OFFSET UNITYSDK_OFFSET(0x754970)
#define OIPDHKLENKB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OIPDHKLENKB_HMMIIEJLNPO_OFFSET UNITYSDK_OFFSET(0x756B10)
#define OIPDHKLENKB_KDGGGNKFLOE_OFFSET UNITYSDK_OFFSET(0x755D20)
#define OIPDHKLENKB_LCOILJEGAGP_OFFSET UNITYSDK_OFFSET(0x761000)
#define OIPDHKLENKB_MBODAPGMNDN_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define OIPDHKLENKB_MINNLKGLKIM_OFFSET UNITYSDK_OFFSET(0x762FE0)
#define OIPDHKLENKB_NCIGJJLKOCG_OFFSET UNITYSDK_OFFSET(0x757290)
#define OIPDHKLENKB_NKFBMODKKJL_OFFSET UNITYSDK_OFFSET(0x756440)
#define OIPDHKLENKB_NNDNBDCDJJF_OFFSET UNITYSDK_OFFSET(0x755890)
#define OIPDHKLENKB_NPAFPHDAPMI_OFFSET UNITYSDK_OFFSET(0x755A00)
#define OIPDHKLENKB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18E30370)
#define OIPDHKLENKB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OIPDHKLENKB_TypeDefinitionIndex = 11193;

struct alignas(4) OIPDHKLENKB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPDHKLENKB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OIPDHKLENKB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 KDGGGNKFLOE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPDHKLENKB_KDGGGNKFLOE_OFFSET))(this);
	}

	::System::String* LCOILJEGAGP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPDHKLENKB_LCOILJEGAGP_OFFSET))(this);
	}

	::System::Int32 NNDNBDCDJJF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPDHKLENKB_NNDNBDCDJJF_OFFSET))(this);
	}

	::System::Int32 MINNLKGLKIM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPDHKLENKB_MINNLKGLKIM_OFFSET))(this);
	}

	::System::Int32 NKFBMODKKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPDHKLENKB_NKFBMODKKJL_OFFSET))(this);
	}

	::System::Int32 AFLEMGIBLIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPDHKLENKB_AFLEMGIBLIA_OFFSET))(this);
	}

	/*
	::OIPDHKLENKB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OIPDHKLENKB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OIPDHKLENKB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* MBODAPGMNDN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPDHKLENKB_MBODAPGMNDN_OFFSET))(this);
	}

	::System::String* HMMIIEJLNPO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPDHKLENKB_HMMIIEJLNPO_OFFSET))(this);
	}

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPDHKLENKB_DNKLBHKEDEM_OFFSET))(this);
	}

	::System::String* NCIGJJLKOCG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPDHKLENKB_NCIGJJLKOCG_OFFSET))(this);
	}

	::System::Int32 EECGBKFBHJG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPDHKLENKB_EECGBKFBHJG_OFFSET))(this);
	}

	::System::String* NPAFPHDAPMI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPDHKLENKB_NPAFPHDAPMI_OFFSET))(this);
	}

	::System::Int32 EHEPKBICOPP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPDHKLENKB_EHEPKBICOPP_OFFSET))(this);
	}

	::System::Int32 FNMIMMEOMFI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPDHKLENKB_FNMIMMEOMFI_OFFSET))(this);
	}

	::System::Int32 DKAONEAPDLN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPDHKLENKB_DKAONEAPDLN_OFFSET))(this);
	}

	/*
	static ::OIPDHKLENKB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OIPDHKLENKB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OIPDHKLENKB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
